from pygame import*
from tkinter import*
from tkinter import messagebox
init()

screen=display.set_mode((1200,200))
display.set_caption('Hacker Soft')
icon1 = image.load('virus.gif')
display.set_icon(icon1)
font1=font.SysFont('Verdana',20,bold=True,italic=True)
label=font1.render('Если не пришлите в течении 3 дней деньги удалим ваши файлы',False,(0, 253, 0))
screen.blit(label,(100,100))
display.update()
while True:
    for i in event.get():
        if i.type==QUIT:
            quit()
            messagebox.showerror('','Фатальная ошибка')
    
