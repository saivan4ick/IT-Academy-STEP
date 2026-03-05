from tkinter import*

def slozhenie():
    f=eval(e1.get())
    h=eval(e2.get())
    e3.delete(0,END)
    if slozhenie:
                     u=f+h
                     e3.insert(0,u)

def delenie():
    f=eval(e1.get())
    h=eval(e2.get())
    e3.delete(0,END)
    if delenie:
       e3.insert(0,"Ошибка")
    else:
                u=f/h
                e3.insert(0,u)
def umnozhenie():
    f=eval(e1.get())
    h=eval(e2.get())
    e3.delete(0,END)
    if umnozhenie:
                u=f*h
                e3.insert(0,u)
def vichitanie():
    f=eval(e1.get())
    h=eval(e2.get())
    e3.delete(0,END)
    if vichitanie:
                u=f-h
                e3.insert(0,u)

okno=Tk()

k1=Label(okno,text="Введите первое число")
k2=Label(okno,text="Введите второе число")
k3=Label(okno,text="Результат")

e1=Entry(okno)
e2=Entry(okno)
e3=Entry(okno)

b1=Button(okno,text="+",command=slozhenie)
b2=Button(okno,text="-",command=vichitanie)
b3=Button(okno,text="*",command=umnozhenie)
b4=Button(okno,text=":",command=delenie)

k1.grid(row=1,column=1,columnspan=4,sticky="swen")
e1.grid(row=2,column=1,columnspan=4,sticky="swen")
k2.grid(row=3,column=1,columnspan=4,sticky="swen")
e2.grid(row=4,column=1,columnspan=4,sticky="swen")
b1.grid(row=5,column=1,sticky="swen")
b2.grid(row=5,column=2,sticky="swen")
b3.grid(row=5,column=3,sticky="swen")
b4.grid(row=5,column=4,sticky="swen")
k3.grid(row=6,column=1,columnspan=4,sticky="swen")
e3.grid(row=7,column=1,columnspan=4,sticky="swen")
