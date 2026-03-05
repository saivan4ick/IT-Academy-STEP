from tkinter import*
from random import*
def krug():
                global a,x,y,r
                g.delete(a)
                x=randint(50,1300)
                y=randint(50,1000)
                r=randint(20,50)
                color=["red","orange","lime","pink","purple","blue"]
                c=choice(color)
                a=g.create_oval(x-r,y-r,x+r,y+r,fill=c)
                g.after(800,krug)
def kvadrat():
                global d
                g.delete(d)
                x=randint(50,1300)
                y=randint(50,1000)
                r=randint(20,50)
                color=["blue","orange","yellow","red","aqua"]
                c=choice(color)
                d=g.create_rectangle(x-r,y-r,x+r,y+r,fill=c)
                g.after(600,kvadrat)
def click(event):
                global s
                x1=event.x
                y1=event.y
                if (x1-x)**2+(y1-y)**2<=r**2:
                                s=s+1
                                g.itemconfig(t,text="Клики: "+str(s))
                if (x1-x)**2+(y1-y)**2>r**2:
                                s=s-1
                                g.itemconfig(t,text="Клики: "+str(s))
def click1(event):
                global s
                x1=event.x
                y1=event.y
                if (x1-x)**2+(y1-y)**2<=r**2:
                                s=s+10
                                g.itemconfig(t,text="Клики: "+str(s))
w=Tk()
a=0
s=0
d=0
g=Canvas(w,width=1500,height=900,bg="white")
g.pack()
krug()
kvadrat()
t=g.create_text(30,30,text="Клики: "+str(s))
g.bind('<Button-1>',click)
g.bind('<Button-1>',click1)
