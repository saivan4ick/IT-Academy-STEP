from tkinter import*

w=Tk()

g=Canvas(w,bg="orange",width=1000,height=800)

g.pack()
g.create_line(100,100,500,450)
g.create_line(50,50,150,50)
g.create_rectangle(50,300,200,450,fill="light blue",outline="blue",width=10)
g.create_oval(350,350,450,550)
g.create_oval(450,10,525,85,fill="silver")
g.create_text(500,500,text="hello\world",font=("segoe script",25),fill="purple")
g.create_polygon(600,150,650,100,700,150,fill="light green")
