from PIL import Image

textAtEnd = []
def generate_animation(image_path, part_name, frame_width, frame_height, action_type, scan_right_to_left=True, start_bottom=False):
    """
    Generate C++ animation array from sprite sheet
    
    Args:
        image_path: Path to sprite sheet image
        part_name: Name of the body part (e.g., 'mouth', 'nose')
        frame_width: Width of each frame in pixels
        frame_height: Height of each frame in pixels
        action_type: Type of action (e.g., 'idle', 'happy', 'sad')
        scan_right_to_left: Scanning direction for LED wiring (horizontal)
        start_bottom: Start from bottom row instead of top (for eyes)
    """
    sprite_sheet = Image.open(image_path)
    sprite_sheet = sprite_sheet.convert('RGB')
    pixel_map = sprite_sheet.load()
    
    sheet_width, sheet_height = sprite_sheet.size
    num_frames = sheet_width // frame_width
    pixels_per_frame = frame_width * frame_height
    
    print(f"// {part_name.upper()+action_type.upper()} Animation")
    print(f"// Frames: {num_frames}, Size: {frame_width}x{frame_height}")
    print(f"const CRGB {part_name}{action_type}Frames[] PROGMEM = {{")
    
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
    textAtEnd.append(f"const Animation {part_name}{action_type.capitalize()} PROGMEM = {{{part_name}{action_type.capitalize()}Frames, {num_frames}, {pixels_per_frame}, 10}};")
    # print(f"\nAnimation {part_name}{action_type.capitalize()} = {{{part_name}{action_type.capitalize()}Frames, {num_frames}, {pixels_per_frame}, 10}};")
    print()

### ========== DEFAULT 1 ==========
## -- PRIORITY --
# Nose: left to right, bottom to top
generate_animation('./assets/Default_1/normal/Default_1_normal_nose_4x12-Sheet.png', 'nose', 12, 4, 'Idle', scan_right_to_left=False, start_bottom=False)
# Mouth: right to left, top to bottom
generate_animation('./assets/Default_1/Default_1_talk_mouth_8x32-Sheet.png', 'normal_mouth', 32, 8, 'Talk', scan_right_to_left=True, start_bottom=False)
# Right Eye: right to left, top to bottom
generate_animation('./assets/Default_1/Default_1_blink_righteye_8x8-Sheet.png', 'normal_righteye', 8, 8, 'Blink', scan_right_to_left=True, start_bottom=False)
# Left Eye: right to left, top to bottom
generate_animation('./assets/Default_1/Default_1_blink_lefteye_8x8-Sheet.png', 'normal_lefteye', 8, 8, 'Blink', scan_right_to_left=True, start_bottom=False)

## - NORMAL -
# Mouth: right to left, top to bottom
generate_animation('./assets/Default_1/normal/Default_1_normal_mouth_8x32-Sheet.png', 'normal_mouth', 32, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Right Eye: right to left, top to bottom
generate_animation('./assets/Default_1/normal/Default_1_normal_righteye_8x8-Sheet.png', 'normal_righteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Left Eye: right to left, top to bottom
generate_animation('./assets/Default_1/normal/Default_1_normal_lefteye_8x8-Sheet.png', 'normal_lefteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)

## - SAD -
# Mouth: right to left, top to bottom
generate_animation('./assets/Default_1/sad/Default_1_sad_mouth_8x32-Sheet.png', 'sad_mouth', 32, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Right Eye: right to left, top to bottom
generate_animation('./assets/Default_1/sad/Default_1_sad_righteye_8x8-Sheet.png', 'sad_righteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Left Eye: right to left, top to bottom
generate_animation('./assets/Default_1/sad/Default_1_sad_lefteye_8x8-Sheet.png', 'sad_lefteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)

## - HUH -
# Mouth: right to left, top to bottom
generate_animation('./assets/Default_1/huh/Default_1_huh_mouth_8x32-Sheet.png', 'huh_mouth', 32, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Right Eye: right to left, top to bottom
generate_animation('./assets/Default_1/huh/Default_1_huh_righteye_8x8-Sheet.png', 'huh_righteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Left Eye: right to left, top to bottom
generate_animation('./assets/Default_1/huh/Default_1_huh_lefteye_8x8-Sheet.png', 'huh_lefteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)

## - MAD -
# Mouth: right to left, top to bottom
generate_animation('./assets/Default_1/mad/Default_1_mad_mouth_8x32-Sheet.png', 'mad_mouth', 32, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Right Eye: right to left, top to bottom
generate_animation('./assets/Default_1/mad/Default_1_mad_righteye_8x8-Sheet.png', 'mad_righteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Left Eye: right to left, top to bottom
generate_animation('./assets/Default_1/mad/Default_1_mad_lefteye_8x8-Sheet.png', 'mad_lefteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)

## - UWU -
# Mouth: right to left, top to bottom
generate_animation('./assets/Default_1/uwu/Default_1_uwu_mouth_8x32-Sheet.png', 'uwu_mouth', 32, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Right Eye: right to left, top to bottom
generate_animation('./assets/Default_1/uwu/Default_1_uwu_righteye_8x8-Sheet.png', 'uwu_righteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)
# Left Eye: right to left, top to bottom
generate_animation('./assets/Default_1/uwu/Default_1_uwu_lefteye_8x8-Sheet.png', 'uwu_lefteye', 8, 8, 'Idle', scan_right_to_left=True, start_bottom=False)

for text in textAtEnd:
    print(text)