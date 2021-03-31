"""This module does blah blah."""

from hellopackage.dog import Dog, DogPussy, DogPussy as Cat

x = 1

if x == 1:
    # indented four spaces
    print("x is 1.")
    print("Hello World")


def sayhello(name):
    "hello"
    print("Hello %s!\n" % name)
    return "you sexy beast"


if __name__ == "__main__":
    print(sayhello("Richie"))
    denise = Cat("denise")
    denise.bark()
    stella = DogPussy("stella")
    stella.bark()

dennis = Dog("dennis")
dennis.bark()
