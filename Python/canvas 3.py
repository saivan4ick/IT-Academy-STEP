from tkinter import*

w=Tk()

g=Canvas(w,bg="orange",width=1000,height=800)
g.pack()
g.create_text(100,150,text="Happy Halloween")
g.create_line(150,100,150,300)
g.create_oval(100,300,200,400,fill="black")
g.create_line(58,325,244,325)
g.create_line(194,325,244,325)
g.create_line(57,325,107,275)
g.create_line(244,325,194,275)
g.create_line(50,350,100,350)
g.create_line(50,350,52,300)
g.create_line(200,350,250,350)
g.create_line(250,350,250,300)
g.create_line(57,400,107,375)
g.create_line(57,400,7,400)
g.create_line(243,400,193,375)
g.create_line(293,350,243,400)
g.create_oval(150,350,175,375,fill="white")
g.create_oval(125,350,150,375,fill="white")

