from tkinter import*
def knopka():
                def knopka1():
                                b2.pack_forget()
                b2=Button(f2,text="#",command=knopka1)
                b2.pack(side="left")
w=Tk()

f1=Frame()
f2=Frame()

b1=Button(f1,text="Добавить",command=knopka)

f1.pack()
f2.pack()
b1.pack()
