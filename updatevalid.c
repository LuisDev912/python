a1 = int(input("Enter first angle : "))
a2 = int(input("Enter second angle : "))
a3 = int(input("Enter third angle : "))

# Check validity
if a1 > 0 and a2 > 0 and a3 > 0 and (a1 + a2 + a3 == 180):
    print("Valid angles")
else:
    print("Invalid angles")
