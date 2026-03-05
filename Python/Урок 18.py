from tkinter import*
from random import*
def kvadrat(event):
                global a,y,x
                x=event.x
                y=event.y
                a=g.create_rectangle(x,y,x+50,y+50)
def size1(event):
                x=event.x
                y=event.y
                a=g.create_rectangle(x,y,x+100,y+100)
def size(event):
                x=event.x
                y=event.y
                a=g.create_rectangle(x,y,x+30,y+30)
def random(event):
                for i in range(0,200):
                                col=Color[randint(0,3)]
                                x=randint(0,490)
                                y=randint(0,190)
                                razmer=randint(0,3)
                                g.create_rectangle(x,y,x+razmer,y+razmer,fil=col)
w=Tk()
g=Canvas(w,width=900,height=700,bg="white")
g.pack()
Color=['blue','yellow','red','green']
g.bind('<Button-1>',kvadrat)
w.bind('<Right>',size1)
w.bind('<Left>',size)
w.bind('<Key-q>',random)
