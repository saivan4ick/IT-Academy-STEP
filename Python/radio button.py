from tkinter import*
def pensia():
                if var.get()==1:
                                k1.config(text="НА ПЕНСИЮ В 63 ГОДА")
                if var.get()==5:
                                k1.config(text="НА ПЕНСИЮ В 58 ГОДА")
def t1():
                k1.config(bg="green")
def t2():
                k1.config(bg="blue")
w=Tk()
var=IntVar()
r1=Radiobutton(w,text="Мужской",variable=var,value=1,indicatoron=0,command=t1)
r2=Radiobutton(w,text="Женский",variable=var,value=5,indicatoron=0,command=t2)
b1=Button(w,text="выбор",command=pensia)
k1=Label(w)
r1.pack()       
r2.pack()
b1.pack()
k1.pack()
