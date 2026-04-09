#Biplab Prasad Gajurel 25024641

# Open the original file in read mode and the new file in write mode
myFile = open("myFile.txt", "r")
yourFile = open("yourFile.txt", "w")

# Read lines from myFile
lines = myFile.readlines()  # reads all lines into a list

# Write only the second line (index 1) to yourFile
yourFile.write(lines[1])

# Close both files after writing
myFile.close()
yourFile.close()

# Open yourFile to print its content
yourFile = open("yourFile.txt", "r")
print(yourFile.read())
yourFile.close()