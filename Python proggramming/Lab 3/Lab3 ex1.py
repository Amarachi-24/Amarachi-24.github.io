#Nneoma Onwe
#06/02/2024
#LAB 2 EX 1 
# we were ask to ask the user to enter a number between 1 and 10

#Assing the variable number and ask the user to enter a number 
number = int(input("Enter a number:"))

# Using a while loop  to range number from 1 to 11  , to display 1 to 10 
while number <= 0 or number >= 11:
    # Display the number between 1 to 10 
    print("Invalid number. Please enter a number between 1 and 10.")
    
    number = int(input("Enter a number:"))
# Display the number 
print(number)
