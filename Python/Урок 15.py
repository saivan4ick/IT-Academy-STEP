from tkinter import*
def krug(event):
                x=event.x
                y=event.y
                g.create_oval(x,y,x+20,y+10,fill='blue',outline='blue')
def krug2(event):
                x=event.x
                y=event.y
                g.create_oval(x,y,x+20,y+10,fill='pink',outline='pink')
def och(event):
                g.delete('all')
w=Tk()
g=Canvas(w,bg="white",width=500,height=500)
g.pack()
g.bind('<Button-1>',krug)
g.bind('<Button-3>',krug2)
w.bind('<Return>',och)
w.bind('<space>',random)
