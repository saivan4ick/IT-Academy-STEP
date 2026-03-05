from tkinter import *

w=Tk()
w.geometry("300x300")

b1=Button(w,text='1')
b2=Button(w,text='2')
b3=Button(w,text='3')

b1.place(relx=0.25,rely=0.25,relwidth=0.25,relheight=0.1)
b2.place(relx=0.5,rely=0.5,relwidth=0.5,relheight=0.2,anchor="center",)
b3.place(x=20,y=100,width=80,height=40)
