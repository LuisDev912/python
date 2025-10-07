# Program to check if a student passes based on marks in 3 subjects

# Take input for marks
m1 = int(input("Enter marks in first subject: "))
m2 = int(input("Enter marks in second subject: "))
m3 = int(input("Enter marks in third subject: "))

# Check if marks in all subjects are at least 35
if m1 >= 35 and m2 >= 35 and m3 >= 35:
    print("Pass")
else:
    print("Fail")
