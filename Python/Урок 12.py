from tkinter import*
def okno():
                w=Tk()
def zacrut():
                w.destroy()
w=Tk()

m1=Menu()

m2=Menu(tearoff=0,fg="black",activebackground="#B0E0E6",activeforeground="black")

m3=Menu(tearoff=0)
m3.add_cascade(label="Файл")

m2.add_cascade(label="Новый")
m2.add_cascade(label="Открыть")
m2.add_cascade(label="Сохранить",menu=m3)
m2.add_separator()
m2.add_cascade(label="Выйти",command=zacrut)

m1.add_cascade(label="Файл",menu=m2)
m1.add_cascade(label="Окно",command=okno)
m1.add_cascade(label="Помощь")

i=PhotoImage(file="duck.gif")
k=Label(w,image=i)
e=Entry(w)
b=Button(w,text=676)

k.place(x=0,y=0)
e.place(x=100,y=100,width=100)
b.place(x=200,y=100,width=100)
w.config(menu=m1)
