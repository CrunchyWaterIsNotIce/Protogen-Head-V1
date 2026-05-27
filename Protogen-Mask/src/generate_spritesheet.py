from PIL import Image

def generate_animation(image_path, part_name, frame_width, frame_height, scan_right_to_left=True, start_bottom=False):
    """
    Generate C++ animation array from sprite sheet
    
    Args:
        image_path: Path to sprite sheet image
        part_name: Name of the body part (e.g., 'mouth', 'nose')
        frame_width: Width of each frame in pixels
        frame_height: Height of each frame in pixels
        scan_right_to_left: Scanning direction for LED wiring (horizontal)
        start_bottom: Start from bottom row instead of top (for eyes)
    """
    sprite_sheet = Image.open(image_path)
    sprite_sheet = sprite_sheet.convert('RGB')
    pixel_map = sprite_sheet.load()
    
    sheet_width, sheet_height = sprite_sheet.size
    num_frames = sheet_width // frame_width
    pixels_per_frame = frame_width * frame_height
    
    print(f"// {part_name.upper()} Animation")
    print(f"// Frames: {num_frames}, Size: {frame_width}x{frame_height}")
    print(f"const CRGB {part_name}Frames[] PROGMEM = {{")
    
    for frame_num in range(num_frames):
        print(f"  // Frame {frame_num}")
        frame_offset_x = frame_num * frame_width
        
        if scan_right_to_left:
            for x in range(frame_width - 1, -1, -1):
                print("  ", end="")
                actual_x = frame_offset_x + x
                
                # Determine vertical direction based on column (zig-zag)
                if x % 2 == 0:
                    if start_bottom:
                        # Even columns: bottom to top
                        for y in range(frame_height - 1, -1, -1):
                            r, g, b = pixel_map[actual_x, y]
                            print(f"CRGB({r}, {g}, {b}), ", end="")
                    else:
                        # Even columns: top to bottom
                        for y in range(frame_height):
                            r, g, b = pixel_map[actual_x, y]
                            print(f"CRGB({r}, {g}, {b}), ", end="")
                else:
                    if start_bottom:
                        # Odd columns: top to bottom
                        for y in range(frame_height):
                            r, g, b = pixel_map[actual_x, y]
                            print(f"CRGB({r}, {g}, {b}), ", end="")
                    else:
                        # Odd columns: bottom to top
                        for y in range(frame_height - 1, -1, -1):
                            r, g, b = pixel_map[actual_x, y]
                            print(f"CRGB({r}, {g}, {b}), ", end="")
                print()
        else:
            # Left to right scanning
            for x in range(frame_width):
                print("  ", end="")
                actual_x = frame_offset_x + x
                
                if x % 2 == 0:
                    if start_bottom:
                        for y in range(frame_height - 1, -1, -1):
                            r, g, b = pixel_map[actual_x, y]
                            print(f"CRGB({r}, {g}, {b}), ", end="")
                    else:
                        for y in range(frame_height):
                            r, g, b = pixel_map[actual_x, y]
                            print(f"CRGB({r}, {g}, {b}), ", end="")
                else:
                    if start_bottom:
                        for y in range(frame_height):
                            r, g, b = pixel_map[actual_x, y]
                            print(f"CRGB({r}, {g}, {b}), ", end="")
                    else:
                        for y in range(frame_height - 1, -1, -1):
                            r, g, b = pixel_map[actual_x, y]
                            print(f"CRGB({r}, {g}, {b}), ", end="")
                print()
    
    print("};")
    print(f"\nAnimation {part_name}Idle = {{{part_name}Frames, {num_frames}, {pixels_per_frame}, 10}};")
    print()

# Mouth: right to left, top to bottom
# generate_animation('./assets/test_mouth_8x32-Sheet.png', 'mouth', 32, 8, scan_right_to_left=True, start_bottom=True)

# Nose: left to right, bottom to top
# generate_animation('./assets/test_nose_4x12-Sheet.png', 'nose', 12, 4, scan_right_to_left=False, start_bottom=False)

# Right Eye: right to left, top to bottom
# generate_animation('./assets/test_righteye_8x8-Sheet.png', 'eyeRight', 8, 8, scan_right_to_left=True, start_bottom=False)

# Left Eye: right to left, top to bottom
# generate_animation('./assets/test_lefteye_8x8-Sheet.png', 'eyeLeft', 8, 8, scan_right_to_left=True, start_bottom=False)

# # Right Ear: right to left, top to bottom
# generate_animation('./assets/test_rightear_1x30-Sheet.png', 'rightEar', 30, 1, scan_right_to_left=True, start_bottom=False)

# # Left Ear: right to left, top to bottom
# generate_animation('./assets/test_leftear_1x30-Sheet.png', 'leftEar', 30, 1, scan_right_to_left=True, start_bottom=False)


# Mouth: right to left, top to bottom
generate_animation('./assets/evil_mouth_8x32-Sheet.png', 'mouth', 32, 8, scan_right_to_left=True, start_bottom=True)

# Nose: left to right, bottom to top
generate_animation('./assets/evil_nose_4x12-Sheet.png', 'nose', 12, 4, scan_right_to_left=False, start_bottom=False)

# Right Eye: right to left, top to bottom
generate_animation('./assets/evil_righteye_8x8-Sheet.png', 'eyeRight', 8, 8, scan_right_to_left=True, start_bottom=False)

# Left Eye: right to left, top to bottom
generate_animation('./assets/evil_lefteye_8x8-Sheet.png', 'eyeLeft', 8, 8, scan_right_to_left=True, start_bottom=False)

# # Right Ear: right to left, top to bottom
generate_animation('./assets/evil_rightear_1x30-Sheet.png', 'rightEar', 30, 1, scan_right_to_left=True, start_bottom=False)

# # Left Ear: right to left, top to bottom
generate_animation('./assets/evil_leftear_1x30-Sheet.png', 'leftEar', 30, 1, scan_right_to_left=True, start_bottom=False)