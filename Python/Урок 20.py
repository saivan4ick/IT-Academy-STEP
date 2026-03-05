from tkinter import*
def move1():
                global vx,vy
                f=g.coords(a)
                print(f)
                x1=f[0]
                y1=f[1]
                x2=f[2]
                y2=f[3]
                if x1<=0 or x2>=1300:
                                vx=(-1)*vx
                if y1<=0 or y2>=800:
                                vy=(-1)*vy
                g.move(a,vx,vy)
                g.after(10,move1)
w=Tk()
g=Canvas(w,width=1300,height=800,bg="white")
g.pack()
a=g.create_oval(100,100,150,150)
vx=10
vy=15
move1()
