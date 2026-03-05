from tkinter import*
from random import*
def ris():
    for i in range(100):
        x=randint(0,1400)
        y=randint(0,750)
        color=["#ADFF2F","#00FA9A","#FF69B4","#20B2AA","#DDA0DD","#7B68EE","#00008B"]
        c_f=choice(color)
        c_g=choice(color)
        n=randint(1,10)
        razmer=randint(10,100)
        g.create_oval(x,y,x+razmer,y+razmer,fill=c_f,outline=c_g,width=n)
def och():
    g.delete("all")
w=Tk()

b1=Button(w,text="рисовать",command=ris)
b2=Button(w,text="очистить",command=och)
g=Canvas(w,width=1400,height=800,bg="black")

b1.pack()
b2.pack()
g.pack()
