from tkinter import*
def password():
    a=one.get()
    x.config(text=a)
    one.config(show="")
    one.delete(0,END)
    one.insert(0,"Спасибо за атаку на RuTube")
okno=Tk()

one=Entry(okno,width=50,font=("Comic Sans MS",40),bg="white",fg="black",show="*")
b=Button(okno,text="ВВЕСТИ",command=password)
x=Label(okno)

one.pack()
b.pack()
x.pack()
