from tkinter import*
def consoleText():
    print("казахстан угрожает нам бомбардировкой")
    k.config(fg="red")
    b2.config(bg="red",activebackground="#FFF8DC")
def consoleOkno():
    y=Tk()
    y.title("Twitch накрутка онлайна")
    b3=Button(y)
    b3.pack()
w=Tk()
w.title("Google Chrome")
w.geometry("560x660")
b1=Button(w,text="Click me",font=("Impact",12),
          width=20,height=10,fg="blue",
          activeforeground="yellow",bg="Azure",activebackground="#FFF8DC", bd=5,command=consoleText)
b1.pack()
b2=Button(w,text="ОКНО",bg="green",command=consoleText)
b2.pack()

y=Tk()
y.title("Twitch накрутка онлайна")
y.geometry("560x660")
b3=Button(y,text="Отрой меня",font=("Arial",12),bg="green",command=consoleOkno)
b3.pack()
k=Label(w,text="нажми на кнопку")

b2.pack()
b1.pack()
k.pack()
