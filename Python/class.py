class Susnosti:
    pass
class Neodushevlennue:
    def ne_dush(self):
        print("не дышат")
    def ne_pit(self):
        print("не питаеться")
class Odushevlennue:
    def pit(self):
        print("пьёт")
    def dush(self):
        print("дышат")
class Divan:
    def rassklad(self):
        print("раскладывает")
class Rastenia:
    def ne_hodjat(self):
        print("не ходят")
class Jivotnue(Odushevlennue):
    def dvig(self):
        print("двигаются")
class Mlekopitaushie(Jivotnue):
    def drink_milk(self):
        print("поедает молоко")
class Korova(Mlekopitaushie):
    def muchit(self):
        print("му")
    def eat_grass(self):
        print("едят траву")
    def __init__(self,name1,age1,weight1):
        self.name=name1
        self.age=age1
        self.weight=weight1
poland=Korova("Польша",1)
belarus=Korova("Беларусь",5)
poland.muchit()
belarus.eat_grass()
ukraine=Divan()
ukraine.rassklad()
poland.drink_milk()
poland.dush()
italy=Mlekopitaushie()
italy.dvig()
poland.name()
print(poland.name)
print(belarus.name)
print(belarus.age)
print(belarus.weight)
