def getPort():
    port = int(input("Enter a well-known TCP port number (1-1023): "))
    if 1 <= port <= 1023:
        return port
    else:
        return 0



def isValidPort(port):
    if 1 <= port <= 1023:
        return True
    else:
        return False

def displayPort():
    port = getPort()
    if isValidPort(port):
        print("The entered port number is:", port)
    else:
        print("Invalid port number. Please try again.")
        
port_number = getPort()
print("The entered port number is:", port_number)
displayPort()
