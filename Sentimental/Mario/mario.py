from cs50 import get_int




while True:
    height = get_int("What is the height of the pyramid: ")
    if height >= 1 and height <= 8:
        break
for i in range(height):
    print(" " * (height - i), end="")
    print("#" * (i + 1), end="  ")
    print("#" * (i + 1))