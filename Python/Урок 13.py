from tkinter import*
def krug(event):
                x=event.x
                y=event.y
                g.create_oval(x,y,x+50,y+50)
def kvadrat(event):
                x=event.x
                y=event.y
                g.create_rectangle(x,y,x+50,y+50)
def koord(event):
                 x=event.x
                 y=event.y
                 k.config(text='x:  '+str(x)+'  y:   '+str(y))
def koord1(event):
                x=event.x_root
                y=event.y_root
                k1.config(text="x:  "+str(x)+"   y:   "+str(y))
def och(event):
                g.delete('all')
w=Tk()
g=Canvas(w,bg="white",width=1000,height=600)
g.pack()
k=Label(w)
k.pack()
k1=Label(w)
k1.pack()
g.bind('<Button-1>',krug)
g.bind('<Double-Button-1>',kvadrat)
g.bind('<Motion>',koord)
w.bind('<B1-Motion>',koord1)
w.bind('<Key-q>',och)

