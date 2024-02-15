def write_file(file, content):
        try:
            with open('./files/'+file, 'a+') as writer:
                # Alternatively you could use
                writer.writelines(content)

                # Write the dog breeds to the file in reversed order
                # for breed in reversed(dog_breeds):
                #     writer.write(breed)
        except Exception as e:
            print(e)
            return False

    
def read_file(file):
    try:
        with open('./files/'+file, "r") as txt_file:
            return txt_file.readlines()
    except Exception as e:
        print(e)
        return False

def delete_item(file, id):
    try:
        with open('./files/'+file, "r") as f:
            lines = f.readlines()
        with open('./files/'+file, "w") as f:
            for line in lines:
                if id not in line.strip("\n").split(','):
                    f.write(line)
    except Exception as e:
        print("Error reading file ", file)
        print(e)