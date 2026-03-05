from tkinter import*
def menushka(event):
                global x1,y1
                x1=event.x
                y1=event.y
                x=event.x_root
                y=event.y_root
                m1.post(x,y)
def krug():
                g.create_oval(x1,y1,x1+50,y1+50)
def kvadrat():
                g.create_rectangle(x1,y1,x1+50,y1+50)
w=Tk()

g=Canvas(w,bg="white",width=1000,height=600)
g.pack()

m1=Menu()

m1.add_cascade(label="круг",command=krug)
m1.add_cascade(label="квадрат",command=kvadrat)

g.bind('<Button-3>',menushka)
