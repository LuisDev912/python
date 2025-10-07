# Program to check if three angles form a valid triangle

# Take input from the user
a1 = int(input("Enter first angle: "))
a2 = int(input("Enter second angle: "))
a3 = int(input("Enter third angle: "))

# Condition for a valid triangle:
# 1. Sum of all three angles must be 180
# 2. Each angle must be greater than 0
if a1 > 0 and a2 > 0 and a3 > 0 and (a1 + a2 + a3 == 180):
    print("Valid angles - They form a triangle.")
else:
    print("Invalid angles - They do not form a triangle.")
