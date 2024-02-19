
# Initialize variables
lowest = 0
highest = 0

# Input three numbers from the user
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
num3 = int(input("Enter the third number: "))

# Find the highest number
if (num2 >= num3) and (num2 >= num1):
    highest = num2
elif (num3 >= num1) and (num3 >= num2):
    highest = num3
else:
    highest = num1

# Find the lowest number
if (num1 <= num2) and (num1 <= num3):
    lowest = num1
elif (num2 <= num1) and (num2 <= num3):
    lowest = num2
else:
    lowest = num3

# Check if the lowest number is too low
if lowest < 10:
    print("The number is too low. Please try again.")
else:
    # Display the results
    print("The highest number is:", highest)
    print("The lowest number is:", lowest)



