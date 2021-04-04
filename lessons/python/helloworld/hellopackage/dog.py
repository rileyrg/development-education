"""This module makes lamp posts go rusty."""
from dataclasses import dataclass


@dataclass
class Dog:
    "Woof! I'm A Dog"
    name: str
    barksound: str = "Woof! I'm A Dog"

    def bark(self):
        print("%s says %s " % (self.name, self.barksound))


class DogBig(Dog):
    "Grrr, I'm a big dog."

    def __init__(self, name: str, age: int = 21):
        self.age = age
        super().__init__(name, barksound="Grrr, I'm a big dog!")

    def bark(self):
        print("My name is %s and I'm %2d years old." % (self.name, self.age))


class DogPussy(Dog):
    "Miaow, I'm non binary."

    def __init__(self, name: str, snack: str = "leckerlie"):
        self.snack = snack
        super().__init__(name, barksound="Miaow, I'm non binary.")

    def bark(self):
        print("%s is a DogPussy and her snack is %s" % (self.name, self.snack))
        super(DogPussy, self).bark()


Cat = DogPussy


def debugDogs():
    "HELLO"
    print("debugDogs")
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
