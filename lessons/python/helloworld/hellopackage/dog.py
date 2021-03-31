"""This module does blah blah."""
from dataclasses import dataclass


@dataclass
class Dog:
    "I'm A Dog"

    name: str
    barksound: str = "woof"

    def bark(self):
        print("%s says %s " % (self.name, self.barksound))


class DogBig(Dog):
    "Grrr, I'm a big dog."

    def __init__(self, name):
        super().__init__(name, barksound="Growl!")


class DogPussy(Dog):
    "Miaow, I'm non binary."

    def __init__(self, name, snack="leckerlie"):
        self.snack = snack
        super().__init__(name, barksound="Miaow!")

    def bark(self):
        print("%s is a DogPussy and its snack is %s" %
              (self.name,  self.snack))
        super(DogPussy, self).bark()


Cat = DogPussy


def debugDogs():
    "HELLO"
    dennis = Dog("Dennis")
    dennis.bark()
    fang = DogBig("Fang")
    fang.bark()
    denise = Cat("denise")
    denise.bark()
    stella = DogPussy("stella", "käse")
    stella.bark()
    amelia = DogPussy("amelia", "thunfisch")
    amelia.bark()


if __name__ == "__main__":
    debugDogs()

print("Imported dog.py")
