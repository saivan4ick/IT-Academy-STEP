from tkinter import*
def create(event):
                global a,y,x
                x=event.x
                y=event.y
                a=g.create_oval(x,y,x+100,y+100)
def delete(event):
                g.delete(a)
def dvizhenie(event):
                global y
                while True:
                                if y<=500:
                                                g.move(a,0,1)
                                                y=y+1
                                                g.update()
                                                g.after(60)
                                else:
                                                break
                g.move(a,20,100)
def formatirovanie(event):
                g.itemconfig(a,fill="green",outline="light blue",width=5)
def peremestit(event):
                g.coords(a,500,150,600,250)
def size(event):
                g.coords(a,y,x,x+90,y+90)
def coordinat(event):
                print(g.coords(a))
w=Tk()

g=Canvas(w,width=800,height=600,bg="white")
g.pack()

g.bind('<Button-1>',create)
g.bind('<Button-3>',delete)
w.bind('<space>',dvizhenie)
w.bind('<Return>',formatirovanie)
w.bind('<Down>',peremestit)
w.bind('<Key-q>',size)
