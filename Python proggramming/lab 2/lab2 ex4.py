#lab2 ex4.py
#Nneoma Onwe
#we ask the userto input the exam result to know if the fail,pass ,meirt ,distinction
# Input three numbers from the user

marks = int(input("Enter the marks : "))

if marks < 40:
    print ("fail")
elif marks < 50:
    print("Pass")
elif marks < 60:
    print("Merit")
elif marks < 70:
    print("high Merit")
else:
    print("Distinction")
    
print(" marks is:", marks)
