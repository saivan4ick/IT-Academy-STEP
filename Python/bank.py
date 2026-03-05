class bank:
    def __init__(self,name1,fio1,summa1):
        self.name=name1
        self.fio=fio1
        self.summa=summa1
    def nomer(self,a):
        print(self.summa)
    def fio(self,b):
        print(self.fio)
    def summa(self,c):
        print(self.summa)
    def dobavit(self):
        a=int(input("Сколько добавить?:\n"))
        self.summa=self.summa+a
        print(self.summa)
    def ubrat(self):
        b=int(input("Сколько убрать?:\n"))
        self.summa=self.summa-b
        print(self.summa)
schet=bank(3782073210915524,"Дудкин Александр Анатольевич",5)
print(schet.nomer)
print(schet.fio)
print(schet.summa)
schet.dobavit()
schet.ubrat()
