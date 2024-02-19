def getPort():

    port = int(input("Enter a well-known TCP port number (1-1023): "))
    if 1 <= port <= 1023:

        return port
    else:
        return 0

port_number = getPort()
print("The entered port number is:", port_number)

