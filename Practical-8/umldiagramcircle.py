'''class Circle:
    def __init__(self, radius=1.0, color="Black"):
        self.__radius = radius
        self.__color = color

    def getRadius(self):
        return self.__radius

    def setRadius(self, radius):
        if 0.1 <= radius <= 100.0:
            self.__radius = radius

    def getColor(self):
        return self.__color

    def setColor(self, color):
        if 3 <= len(color) <= 10:
            self.__color = color

    def area(self):
        return 3.1416 * self.__radius ** 2  # manual pi

    def display(self):
        print("Circle Info:")
        print("Radius:", self.__radius)
        print("Color:", self.__color)
        print("Area:", self.area())

c1 = Circle(5.0, "Blue")
c1.display()

print()'''
'''class Book:
    def __init__(self, title="", price=0.0):
        self.__title = title
        self.__price = price

    def getTitle(self):
        return self.__title

    def setTitle(self, title):
        if 2 <= len(title) <= 30:
            self.__title = title

    def getPrice(self):
        return self.__price

    def setPrice(self, price):
        if 100.0 <= price <= 5000.0:
            self.__price = price

    def display(self):
        print("Book Info:")
        print("Title:", self.__title)
        print("Price:", self.__price)
b1 = Book("Python Basics", 1200.0)
b1.display()'''
'''# Biplab P. Gajurel 25024641

#Base Class
class Person:
    def __init__(self, name, address):
        self.__name = name
        self.__address = address

    def getName(self):
        return self.__name

    def setName(self, name):
        self.__name = name

    def getAddress(self):
        return self.__address

    def setAddress(self, address):
        self.__address = address

    def __str__(self):
        return f"Name: {self.__name}\nAddress: {self.__address}"

#Lecturer Class(inherits Person class)
class Lecturer(Person):
    def __init__(self, name, address, lecturerID):
        super().__init__(name, address)
        self.__lecturerID = lecturerID

    def getLecturerID(self):
        return self.__lecturerID

    def setLecturerID(self, lecturerID):
        self.__lecturerID = lecturerID

    def __str__(self):
        return f"Lecturer's name is {self.getName()}\nAddress is {self.getAddress()}\nLecturer ID: {self.__lecturerID}"

#Person Class(inherits Person class)

class Student(Person):
    def __init__(self, name, address, studentID):
        super().__init__(name, address)
        self.__studentID = studentID

    def getStudentID(self):
        return self.__studentID

    def setStudentID(self, studentID):
        self.__studentID = studentID

    def __str__(self):
        return f"Student's name is {self.getName()}\nAddress is {self.getAddress()}\nStudent ID: {self.__studentID}"

#GraduateStudent Class(inherits Studnet class)

class GraduateStudent(Student):
    def __init__(self, name, address, studentID, supervisorName):
        super().__init__(name, address, studentID)
        self.__supervisorName = supervisorName

    def getSupervisorName(self):
        return self.__supervisorName

    def setSupervisorName(self, supervisorName):
        self.__supervisorName = supervisorName

    def __str__(self):
        return f"Student's name is {self.getName()}\nAddress is {self.getAddress()}\nStudent ID: {self.getStudentID()}\nSupervisor's name: {self.__supervisorName}"

lecturer = Lecturer("Chris", "Simons, UWE Frenchay Campus 4QXX", 2345)
print(lecturer)
print()

student = Student("Peter", "Miller, UWE Frenchay Campus", 5678)
print(student)
print()

gradstudent = GraduateStudent("Dan", "Fielding, UWE Frenchay Campus", 6789, "Jim Smith")
print(gradstudent)'''
class Person:
#constructor
 def __init__(self, firstName='Mr', lastName='X', address='Bristol'):
  self.__firstName = firstName #private variable
  self.__lastName = lastName #private variable
  self.__address = address #private variable
 def setFirstName(self, firstName):
  self.__firstName = firstName
 def setLastName(self, lastName):
  self.__lastName = lastName
 def setAddress(self,address):
  self.__address = address
 def getFirstName(self):
  return self.__firstName
 def getLastName(self):
  return self.__lastName
 def getAddress(self):
  return self.__address
 def __str__(self):
  return "Person's name is " + self.getFirstName() +" "+ self.getLastName() +"\nAddress is "+ self.getAddress()
#creating a Person object with default values
print("Creating a Person object with default values")
p = Person()
#printing the information using __str__ method
print("Printing the information using __str__ method")
print(p)
#setting name and address
print("Now setting the names and address")
p.setFirstName("Abdur")
p.setLastName("Rakib")
p.setAddress("UWE Frenchay Campus 4QXX")
#printing the information using __str__ method
print("Printing the information using __str__ method")
print(p)
#Creating another object by passing the values explicitly
print("Creating another Person object by passing the values explicitly")
p1 = Person("Jun", "Hong", "UWE Frenchay Campus 3QXX")
#printing the information using __str__ method
print("Printing the information using __str__ method")

print(p1)