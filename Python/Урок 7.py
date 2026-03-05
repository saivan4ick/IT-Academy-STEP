from tkinter import*
def color1():
                if var1.get()==1:
                                a.config(fg="red")
                if var1.get()==0:
                                a.config(fg="black")

def bukvu():
                b=a.get()
                if var2.get()==1:
                                c=b.upper()
                                a.delete(0,END)
                                a.insert(0,c)
                if var2.get()==0:
                                c=b.lower()
                                a.delete(0,END)
                                a.insert(0,c)
w=Tk()

a=Entry(w)
var1=IntVar()
var2=IntVar()
g1=Checkbutton(w,text="красный цвет/чёрный цвет",variable=var1,onvalue=1,offvalue=0,command=color1)
g2=Checkbutton(w,text="заглавные буквы/прописные буквы",variable=var2,onvalue=1,offvalue=0,command=bukvu)

a.pack()
g1.pack()
g2.pack()
