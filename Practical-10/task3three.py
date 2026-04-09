#Biplab Prasad Gajurel 25024641
myFile = open("myFile.txt", "r")
yourFile = open("yourFile.txt", "w")

first_line = myFile.readline()  # read only the first line
yourFile.write(first_line)      # write it to yourFile

myFile.close()
yourFile.close()