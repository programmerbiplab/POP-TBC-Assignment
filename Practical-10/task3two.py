#Biplab Prasad Gajurel 25024641
myFile = open("myFile.txt", "r")
yourFile = open("yourFile.txt", "w")

yourFile.write(myFile.read())

myFile.close()
yourFile.close()