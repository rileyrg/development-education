"""This module does blah blah."""


class Dog:
    "HELLO"

    def __init__(self, name, barksound="yip"):
        self.name = name
        self.barksound = barksound

    def bark(self):
        print("%s says %s " % (self.name, self.barksound))


class DogBig(Dog):
    "HELLO"

    def __init__(self, name):
        super().__init__(name, barksound="Growl!")


class DogPussy(Dog):
    "HELLO"

    def __init__(self, name):
        super().__init__(name, barksound="Miaow!")


def debugDogs():
    "HELLO"
    dennis = Dog("Dennis")
    dennis.bark()
    fang = DogBig("Fang")
    fang.bark()


if __name__ == "__main__":
    "HELLO"
    debugDogs()

print("Imported dog.py")
