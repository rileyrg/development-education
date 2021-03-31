class Dog:
    def __init__(self, name, barksound="yip"):
        self.name = name
        self.barksound = barksound

    def bark(self):
        print("%s says %s " % (self.name, self.barksound))


class DogBig(Dog):
    def __init__(self, name):
        super().__init__(name, barksound="Growl!")


class DogPussy(Dog):
    def __init__(self, name):
        super().__init__(name, barksound="Miaow!")


def debugDogs():
    dennis = Dog("Dennis")
    dennis.bark()
    fang = DogBig("Fang")
    fang.bark()


if __name__ == "__main__":
    debugDogs()
