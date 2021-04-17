"""This module makes lamp posts go rusty."""
from dataclasses import dataclass


@dataclass
class Dog:
    "Woof! I'm A Dog"

    def __init__(self, name, barksound="Woof! I'm A Dog", peeaction="with leg cocked"):
        self.name = name
        self.barksound = barksound
        self.peeaction = peeaction

    def bark(self):
        "All types of dogs make a noise!"
        print("%s says %s " % (self.name, self.barksound))

    def pee(self):
        print("%s pees %s " % (self.name, self.peeaction))


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
        super().__init__(name, "Miaow, I'm non binary.", "crouching")

    def bark(self):
        print("%s is a DogPussy and her snack is %s" % (self.name, self.snack))
        super().bark()


Cat = DogPussy


def debug_dogs():
    "Debugging Dogs"
    print("debugDogs")
    dennis = Dog("Dennis")
    dennis.bark()
    dennis.pee()
    fang = DogBig("Fang")
    fang.bark()
    fang.pee()
    denise = Cat("denise")
    denise.bark()
    denise.pee()
    stella = DogPussy("stella", "käse")
    stella.bark()
    stella.pee()
    amelia = DogPussy("amelia", "thunfisch")
    amelia.bark()
    amelia.pee()


if __name__ == "__main__":
    debug_dogs()
