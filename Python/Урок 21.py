from tkinter import*
from random import*
def move1():
                global vx,vy,life
                if life>0:
                    p=g.coords(player)
                    x1_p=p[0]
                    y1_p=p[1]
                    x2_p=x1_p+50
                    y2_p=y1_p+50
                    for i in range(n):
                        asteroid=asteroids[i]
                        vx=vx_asteroid[i]
                        vy=vy_asteroid[i]
                        f=g.coords(asteroid)
                        x1=f[0]
                        y1=f[1]
                        x2=x1+50
                        y2=y1+50
                        if x1<=0 or x2>=1300:
                                vx=(-1)*vx
                        if y1<=0 or y2>=800:
                                vy=(-1)*vy
                        vx_asteroid[i]=vx
                        vy_asteroid[i]=vy
                        g.move(asteroid,vx,vy)
                        if ((x1_p<x1<=x2_p) or (x1_p<x2<=x2_p)) and ((y1_p<y1<=y2_p) or (y1_p<y2<=y2_p)):
                            life=life-1
                            g.itemconfig(r,text="Жизнь: "+str('❤'*life))
                            x1_p=randint(0,1250)
                            y1_p=randint(0,750)
                            g.coords(player,x1_p,y1_p)
                    g.after(250,move1)
                else:
                                g.delete('all')
                                g.create_image(0,0,image=m4,anchor="nw")
def up1(event):
    g.move(player,0,-10)
def down1(event):
    g.move(player,0,50)
def down2(event):
    g.move(player,-50,0)
def down3(event):
    g.move(player,50,0)
def score1():
    global score
    itemconfig(text="Время: "+str(score))
    score=score+1
    g.after(1000,score1)
def life1():
    global life
    g.itemconfig
w=Tk()
n=10
life=3
score=0
g=Canvas(w,width=1300,height=800,bg="white")
g.pack()
asteroids=[]
vx_asteroid=[]
vy_asteroid=[]
m1=PhotoImage(file='gymnasium.gif')
m2=PhotoImage(file='schools.gif')
m3=PhotoImage(file="eacher.gif")
m4=PhotoImage(file="game over.gif")
g.create_image(0,0,image=m1,anchor="nw")
player=g.create_image(700,400,image=m3,anchor="nw")
s=g.create_text(60,30,text="Время: "+str(score),fill="white",font=("Arial black",15))
r=g.create_text(1200,30,text="Жизнь: "+str('❤'*life),fill="red",font=("Arial black",15))
for i in range(n):
    x1=randint(0,1250)
    y1=randint(0,750)
    vx=randint(-10,10)
    vy=randint(-15,15)
    asteroid=g.create_image(x1,y1,image=m2,anchor="nw")
    asteroids.append(asteroid)
    vx_asteroid.append(vx)
    vy_asteroid.append(vy)
    print(asteroids)
vx=10
vy=15
move1()
w.bind('<Up>',up1)
w.bind('<Down>',down1)
w.bind('<Left>',down2)
w.bind('<Right>',down3)
