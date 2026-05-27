from PIL import Image

## mouth
mouth = Image.open('./assets/test_mouth_8x32.png')
mouth = mouth.convert('RGB')
mouth_map = mouth.load()

m_width, m_height = mouth.size
print('=' * 5, 'Mouth', '=' * 5)
print(f"Image size: {m_width}x{m_height}")
print(f"Total pixels: {m_width * m_height}")

print("\nconst CRGB mouthSprite[] = {")
for x in range(m_width - 1, -1, -1): # right to left
    print("  ", end="")
    if x % 2 == 0:
        for y in range(m_height): # top to bottom
            r, g, b = mouth_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    else:
        for y in range(m_height - 1, -1, -1): # bottom to top
            r, g, b = mouth_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    print()
print("};")

## nose
nose = Image.open('./assets/test_nose_4x12.png')
nose = nose.convert('RGB')
nose_map = nose.load()

n_width, n_height = nose.size
print('=' * 5, 'Nose', '=' * 5)
print(f"Image size: {n_width}x{n_height}")
print(f"Total pixels: {n_width * n_height}")


print("\nconst CRGB noseSprite[] = {")
for x in range(n_width): # left to right
    print("  ", end="")
    if x % 2 == 0:
        for y in range(n_height): # top to bottom
            r, g, b = nose_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    else:
        for y in range(n_height - 1, -1, -1):
            r, g, b = nose_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    print()
print("};")

## eyes
eyes = Image.open('./assets/test_eyes_8x8.png')
eyes = eyes.convert('RGB')
eyes_map = eyes.load()

e_width, e_height = eyes.size
print('=' * 5, 'Eyes', '=' * 5)
print(f"Full image size: {e_width}x{e_height}")

# Right Eye (last 8 columns from YOUR perspective, x=9 to x=16, skipping x=8 gap)
print('=' * 5, 'Right Eye', '=' * 5)
print(f"Image size: 8x{e_height}")
print(f"Total pixels: {8 * e_height}")

print("\nconst CRGB eyeRightSprite[] = {")
for x in range(16, 8, -1):  # going right to left
    print("  ", end="")
    if x % 2 == 0:
        for y in range(e_height - 1, -1, -1): # bottom to top
            r, g, b = eyes_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    else:
        for y in range(e_height): # top to bottom
            r, g, b = eyes_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    print()
print("};")

# Left Eye (first 8 columns from YOUR perspective, x=0 to x=7)
print('=' * 5, 'Left Eye', '=' * 5)
print(f"Image size: 8x{e_height}")
print(f"Total pixels: {8 * e_height}")

print("\nconst CRGB eyeLeftSprite[] = {")
for x in range(7, -1, -1):  # right to left
    print("  ", end="")
    if x % 2 == 0:
        for y in range(e_height): # top to bottom
            r, g, b = eyes_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    else:
        for y in range(e_height - 1, -1, -1): # bottom to top
            r, g, b = eyes_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    print()
print("};")


## left ear
left_ear = Image.open('./assets/test_leftear_1x30.png')
left_ear = left_ear.convert('RGB')
left_ear_map = left_ear.load()

le_width, le_height = left_ear.size
print('=' * 5, 'Left Ear', '=' * 5)
print(f"Image size: {le_width}x{le_height}")
print(f"Total pixels: {le_width * le_height}")


print("\nconst CRGB leftEarSprite[] = {")
for x in range(le_width): # left to right
    print("  ", end="")
    if x % 2 == 0:
        for y in range(le_height): # top to bottom
            r, g, b = left_ear_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    else:
        for y in range(le_height - 1, -1, -1):
            r, g, b = left_ear_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    print()
print("};")


## right ear
right_ear = Image.open('./assets/test_rightear_1x30.png')
right_ear = right_ear.convert('RGB')
right_ear_map = right_ear.load()

re_width, re_height = right_ear.size
print('=' * 5, 'Right Ear', '=' * 5)
print(f"Image size: {re_width}x{re_height}")
print(f"Total pixels: {re_width * re_height}")


print("\nconst CRGB rightEarSprite[] = {")
for x in range(re_width): # left to right
    print("  ", end="")
    if x % 2 == 0:
        for y in range(re_height): # top to bottom
            r, g, b = right_ear_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    else:
        for y in range(re_height - 1, -1, -1):
            r, g, b = right_ear_map[x, y]
            print(f"CRGB({r}, {g}, {b}), ", end="")
    print()
print("};")