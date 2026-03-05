from tkinter import*
def start():
                if k>0:
                                b1.config(state="disabled")
                                b2.config(state="normal")
                                k1.config(text="")
                                live()
def win():
                global k
                if k>50:
                                k4.config(image=i1)
                if k<=50 and k>0:
                                k4.config(image=i2)
                if k<1:
                                k4.config(image=i3)
                                b1.config(state="normal")
                                b2.config(state="disabled")
                                k1.config(text="Нажмите для начала игры")
                                k=0
                                n=0
                                k2.after_cancel(live)
                k2.config(text="Жизнь: "+str(k))
                k4.after(100,win)
def click():
                global n
                n=n+1
                k3.config(text="Клики: "+str(n))
                if n%15==0:
                                k=k+1
                                print(k)
def live():
                global k
                k=k-1
                k2.after(200,live)
w=Tk()
w.title("Бабах")
k1=Label(w,text="Нажмите для начала игры")
b1=Button(w,text="Старт",command=start)
k=100
n=0
k2=Label(w,text="Жизнь: "+str(k))
k3=Label(w,text="Клики: "+str(n))

i1=PhotoImage(file="bomb_normal.gif")
i2=PhotoImage(file="bomb_no.gif")
i3=PhotoImage(file="pow.gif")

k4=Label(w,image=i1)

b2=Button(w,text="Клик",bg="black",fg="white",font=("Courier new",14),width=40,
          state="disabled",command=click)

k1.pack()
b1.pack()
k2.pack()
k3.pack()
k4.pack()
b2.pack()
