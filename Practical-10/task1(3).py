#Biplab Prasad Gajurel 25024641
from abc import ABC, abstractmethod

# (1) Animal abstract class
class Animal(ABC):
    def __init__(self, numberOfLegs):
        self.__numberOfLegs = numberOfLegs

    def setNumberOfLegs(self, numberOfLegs):
        self.__numberOfLegs = numberOfLegs

    def getNumberOfLegs(self):
        return self.__numberOfLegs

    @abstractmethod
    def eat(self):
        pass

    @abstractmethod
    def walk(self):
        pass


# (2) Pet abstract class
class Pet(ABC):
    def __init__(self, name):
        self.__name = name

    def setName(self, name):
        self.__name = name

    def getName(self):
        return self.__name

    @abstractmethod
    def play(self):
        pass


# (3) Cat class (multiple inheritance)
class Cat(Animal, Pet):
    def __init__(self, name, numberOfLegs):
        Animal.__init__(self, numberOfLegs)
        Pet.__init__(self, name)

    def eat(self):
        print("Cat eats fish")

    def walk(self):
        print(f"Cat walks on {self.getNumberOfLegs()} legs")

    def play(self):
        print("Cat plays with a ball")


# (4) Fish class (multiple inheritance)
class Fish(Animal, Pet):
    def __init__(self, name, numberOfLegs=0):
        Animal.__init__(self, numberOfLegs)
        Pet.__init__(self, name)

    def eat(self):
        print("Fish eats algae")

    def walk(self):
        print("Fish cannot walk, it swims")

    def play(self):
        print("Fish plays by swimming around")


# (5) Spider class
class Spider(Animal):
    def __init__(self, numberOfLegs=8):
        super().__init__(numberOfLegs)

    def eat(self):
        print("Spider eats insects")

    def walk(self):
        print(f"Spider walks on {self.getNumberOfLegs()} legs")


# Testing the classes
cat = Cat("Whiskers", 4)
fish = Fish("Nemo")
spider = Spider()

cat.eat()
cat.walk()
cat.play()

fish.eat()
fish.walk()
fish.play()

spider.eat()
spider.walk()