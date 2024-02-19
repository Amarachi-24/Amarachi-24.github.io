#Lab 4 ex 5.py 
def Length():
    Length = int(input("Enter the length of the rectangle: "))
    return Length

def Width():
    width = int(input("Enter the width of the rectangle: "))
    return width

def calculateArea(Length, Width):
    Area = Length * Width
    return Area

def displayArea():
    Length = Length()
    Width = Width()
    Area = calculateArea(Length, Width)
displayArea()   

def main():
    for i in range (Length):
        if i == 0 or i == Length -1 :
            print('*'* Width)
    print("The area of the rectangle is:", Area)

