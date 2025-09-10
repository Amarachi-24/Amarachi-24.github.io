#Nneoama Onwe 
#Due Date 14th April 
#We were ask to decord the hidden message inside the image file 
def read_Image():
    try:
        with open("image4.pgm", 'r') as data_file:# Open the file 'image2.pgm' in read mode and use 'data_file' as a file object
            # Read the first four lines from the file and strip whitespace characters from each line
            lines = [line.strip() for line in data_file.readlines()[:4]]
            if lines[0] != 'P2': # Check if the file is not in P2 format
                # Print the lines
                print(lines)

            # Determine the maximum pixel grayscale value from the fourth line
            max_pixel_value = int(lines[3])

            # Decode hidden message
            decoded_message = decode_image() # Call the decode_image function to decode any hidden message in the image

            # Return the lines, maximum pixel grayscale value, and decoded message
            return lines, max_pixel_value, decoded_message
    except FileNotFoundError: # Catch FileNotFoundError exception
        print("File not found.")# Print an error message indicating the file is not found
        return None, None, None  # Return default values if file not found or reading fails
    except Exception as e:  # Catch other exceptions
        print("An error occurred:", e)# Print the error message
        return None, None, None  # Return default values if any other error occurs


def calculate_file_size():
# Open the file named 'image2.pgm' in read mode and use 'file' as a file object
    with open('image4.pgm', 'r') as file:
       # Initialize a counter variable to keep track of the file size
        file_size = 0

        # Read the file byte by byte until the end of file
        byte = file.read(1)
        while byte:
             # Increment the counter for each byte read
            file_size += 1

            # Read the next byte
            byte = file.read(1)

    # Return the total file size
    return file_size

# This function to get  the higher pixel value 
def get_highest_pixel_value(body): #Define a function named get_highest_pixel_value that takes a parameter named body, which represents the pixel values of an image.
    return max(max(row) for row in body)# Return the maximum pixel value found in the image represented by the body parameter. This is achieved by using a generator expression that iterates over each row in the body and finds the maximum value in each row using the max() function. Then, the outer max() function finds the maximum value among all the maximum values of the rows.

#function to get the lowest pixel value in an image 
def get_lowest_pixel_value(body):
    return min(max(row) for row in body) # Return the minimum of the maximum pixel values found in each row of the image represented by the body parameter. This is achieved by using a generator expression that iterates over each row in the body and finds the maximum value in each row using the max() function. Then, the min() function finds the minimum value among all the maximum values of the rows.

# Function to get avgerage pixel value in the image 
def get_average_pixel_value(body):# Define a function named get_average_pixel_value that takes a parameter named body, which represents the pixel values of an image.
    total_pixels = sum(len(row) for row in body)# Calculate the total number of pixels in the image by summing up the length of each row in the body. This is done using a generator expression that iterates over each row and computes its length.
    total_value = sum(sum(row) for row in body)# Calculate the total sum of pixel values in the image by summing up all the pixel values in each row of the body. This is achieved using a nested generator expression that iterates over each row and computes the sum of its elements.
    return total_value / total_pixels# Return the average pixel value of the image, which is computed by dividing the total sum of pixel values by the total number of pixels.


# Example body representing pixel values of the image
# This is just a placeholder, replace it with actual pixel values

# Define a variable named 'body' containing a list of lists representing pixel values of an image. 
# Each inner list represents a row of pixels, and the values within the inner lists represent pixel intensities.
body = [[10, 20, 30], [40, 50, 60], [70, 80, 90]]
# image2.pgm key value 75
# image3.pgm key value 133 cant read the file 
# image4.pgm key value 133
# image6.pgm key value cant read the file 
# image7.pgm key value  can't find the hidden message 
# image8.pgm key value 92

def decode_image():
    with open("image4.pgm", 'r') as data_file:# Open the file 'image2.pgm' in read mode and use 'data_file' as a file object
        # Read the remaining lines from the file, skipping the first four lines which contain header information
        binary_message = ""# Initialize an empty string to store the binary message
        pixel = 0# Initialize a variable to store pixel values
        pixel_lines = [line.strip() for line in data_file.readlines()[4:]]# Read pixel data lines and remove leading/trailing whitespace

        #Define the message pixel value and non-message pixel value transformation rules
        # The message pixel value is 75, and it should be changed to 0
        # Every non-message pixel value should be rounded to 255

    for line in pixel_lines: # Iterate over each line of pixel data
            for pixel in line.split():# Iterate over each pixel value in the line
                if int(pixel) == 133:# Check if the pixel value is equal to the message pixel value
                    print(pixel) #To the key vale of the pixel vaule of the image 
                    binary_message += "0   "  # Message pixel value changed to 0
                else:
                    binary_message += "255 "  # Non-message pixel value changed to 255

            binary_message += "\n"  # Add a newline character after processing each line of pixels
           

    return binary_message # Return the binary message containing the decoded image data


def write_decoded_image(decoded_message, max_pixel_value):
    try:
        # Open the file 'decodedimage3.pgm' in write mode and use 'decoded_file' as a file object
        with open("decodedimage4.pgm", 'w') as decoded_file:
            # Write the PGM format identifier to the file
            decoded_file.write("P2\n")  # PGM format identifier
            
            # Write an optional comment indicating that the image is decoded
            decoded_file.write("# Decoded Image\n")  # Optional comment
            
            # Write the image dimensions (240x300) to the file
            decoded_file.write("240 300\n")  # Image dimensions
            
            # Write the maximum pixel value to the file
            decoded_file.write(str(max_pixel_value) + "\n")  # Maximum pixel value
            
            # Write the decoded message to the file 
            decoded_file.write(decoded_message)
            
            # Print a success message if the file is written successfully
        print("Decoded image file 'decodedimage4.pgm' created successfully.")
    except Exception as e:
         # Print an error message if an exception occurs during file writing
        print("An error occurred while writing the decoded image file:", e)


def main():
    # Define the file path to 'image2.pgm'
    file_path = 'image4.pgm'
    
    # Call the read_Image function to read image data and decode any hidden message
    lines, max_pixel_value, decoded_message = read_Image()
    
    # Check if the image data and maximum pixel value are successfully obtained
    if lines is not None and max_pixel_value is not None:
       
        # Print the maximum grayscale value of the image
        print(f"Maximum grayscale value: {max_pixel_value}")
       
        # Print the file size of the PGM file in bytes
        print(f"PGM file size: {calculate_file_size()} bytes")
        
        # Write the decoded message to a new PGM file
        write_decoded_image(decoded_message, max_pixel_value)

        # Calculate and print the highest pixel value in the image body
        highest_pixel_value = get_highest_pixel_value(body)
        print("Highest Pixel Value:", highest_pixel_value)

        # Calculate and print the lowest pixel value in the image body
        lowest_pixel_value = get_lowest_pixel_value(body)
        print("Lowest Pixel Value:", lowest_pixel_value)

        # Calculate and print the average pixel value in the image body
        average_pixel_value = get_average_pixel_value(body)
        print("Average Pixel Value:", average_pixel_value)
        print (lines)
# Call the main function to execute the program
main()