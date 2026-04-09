#Biplab Prasad Gajurel 25024641

# Trying to create an object of the abstract class Person
# p = Person("Abstract Person", "Heaven")

# This will cause an error because Person is an abstract class
# and contains an abstract method called studentship()

# Abstract classes cannot be instantiated directly
# They are meant to be inherited by subclasses

# Only a concrete subclass like Student, which implements
# the studentship() method, can be used to create objects

# Example of correct usage:
# p = Student("Abstract Person", "Heaven", 1)
