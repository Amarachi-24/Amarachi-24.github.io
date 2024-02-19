# Nneoma Onwe
# 06/02/24

# Assign the username and password
# The user enters a username and password
attempts = 0

while attempts < 5:
    # Reset attempts for each loop iteration
    attempts = 0
    
    # Ask for username and password
    username = input("Enter a username: ")
    password = input("Enter a password: ")

    # Attempt to log in with student1 credentials
    while username != "student1" or password != "networking101":
        attempts += 1
        if attempts == 5:
            print("Maximum login attempts reached. Please try again later.")
            exit()
        print("Invalid username or password. Please enter the correct credentials.")
        username = input("Enter a username: ")
        password = input("Enter a password: ")

    print("Successfully logged in!")
    break  # Exit the loop if login successful

while username != "student2" or password != "networking102":
    attempts += 1
    if attempts == 5:
        print("Maximum login attempts reached. Please try again later.")
        exit()
    print("Invalid username or password. Please enter the correct credentials.")
    username = input("Enter a username: ")
    password = input("Enter a password: ")

print("Successfully logged in!")

while username != "student3" or password != "networking103":
    attempts += 1
    if attempts == 5:
        print("Maximum login attempts reached. Please try again later.")
        exit()
    print("Invalid username or password. Please enter the correct credentials.")
    username = input("Enter a username: ")
    password = input("Enter a password: ")

print("Successfully logged in!")









