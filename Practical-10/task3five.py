#Biplab Prasad Gajurel 25024641
try:
    # Try to open the source file
    myFile = open("myFile1.txt", "r")  # intentionally changed to test FileNotFoundError
    yourFile = open("yourFile.txt", "w")

except FileNotFoundError:
    # This block runs if the source file does not exist
    print("Error: Source file not found. Please check the file name or path.")

else:
    # This block runs only if the try block succeeds
    lines = myFile.readlines()
    
    if len(lines) >= 2:
        yourFile.write(lines[1])  # copy second line
    else:
        print("Source file has less than 2 lines.")

    myFile.close()
    yourFile.close()

    # Print content of yourFile
    yourFile = open("yourFile.txt", "r")
    print("Content of yourFile.txt:")
    print(yourFile.read())
    yourFile.close()