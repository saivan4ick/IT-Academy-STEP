from tkinter import*
from random import*
def player():
                a=int(e1.get())
                global n
                if (a==1 or a==2 or a==3) and n>a:
                                n=n-a
                                k2.config(text="| "*n)
                                k3.config(text=n)
                                b2.config(state="disabled")
                                b1.config(state="normal")
                                if n==1:
                                                k3.config(text="Игрок выигал!")
                                                
def pc():
                b=randint(1,3)
                global n
                if n==4:
                                n=n-3
                elif n==3:
                                n=n-2
                elif n==2:
                                n=n-1
                elif n>b:
                                n=n-b
                                k2.config(text="| "*n)
                                k3.config(text=n)
                                b1.config(state="disabled")
                                b2.config(state="normal")
                                if n==1:
                                                k3.config(text="PC выигал!")
w=Tk()
w.title("game")
n=30
k1=Label(w,text="Введите число от 1 до 3")
e1=Entry(w,font=("Arial Black",20),width=28)
k2=Label(w,text="| "*n,font=("Arial Black",20))
k3=Label(w,text=n,font=("Arial Black",20))
b1=Button(w,text="PC",font=("Arial Black",20),width=26,bg="lime",command=pc)
b2=Button(w,text="Player",font=("Arial Black",20),width=26,bg="aqua",command=player)

k1.pack()
e1.pack()
k2.pack()
k3.pack()
b1.pack()
b2.pack()
