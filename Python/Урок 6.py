from tkinter import*
def res():
                global n
                if var1.get()==1 and var4.get()==1 and var2.get()==0 and var3.get()==0:
                                
                                n=n+10
                                g2.config(text=n)
                else:
                                g2.config(text=0)
w=Tk()
n=0
g1=Label(w,text="Кто основал Википедию?")
var1=IntVar()
var2=IntVar()
var3=IntVar()
var4=IntVar()
k1=Checkbutton(w,text="Джимми Уэйлс",variable=var1,onvalue=1,offvalue=0)
k2=Checkbutton(w,text="Марк Цукерберг",variable=var2,onvalue=1,offvalue=0)
k3=Checkbutton(w,text="Илон Маск",variable=var3,onvalue=1,offvalue=0)
k4=Checkbutton(w,text="Ларри Сэнгер",variable=var4,onvalue=1,offvalue=0)

b1=Button(w,text="Результат",command=res)
g2=Label(w)

g1.pack()
k1.pack()
k2.pack()
k3.pack()
k4.pack()
b1.pack()
g2.pack()
