"""This module does blah blah."""

from hellopackage.dog import Dog, DogPussy

x = 1
Cat = DogPussy

if x == 1:
    print("x is 1.")
    print("Hello World")


def sayhello(name):
    "hello"
    print("Hello %s!\n" % name)
    return "you sexy beast2"


if __name__ == "__main__":
    print(sayhello("Richie"))

dennis = Dog("dennis")  # (lsp--suggest-project-root)
dennis.bark()
denise = Cat("denise")
denise.bark()
stella = DogPussy("stella")
stella.bark()
