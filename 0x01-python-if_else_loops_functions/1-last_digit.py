#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = (number) % 10
message = f"Last digit of {number} is {last_digit} and is "
if last_digit > 5:
    print(message + "greater than 5")
elif last_digit == 0:
    print(message + "0")
else:
    print(message + "less than 6 and not 0")
