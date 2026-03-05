from tkinter import*
w=Tk()
f1=Frame(w)
f2=Frame(w)
f3=Frame(w)
f4=LabelFrame(w,text="пол")
f5=Frame(w)
f6=LabelFrame(w,text="образование")
f7=Frame(w)
l1=Label(f1,text="Форма",width=10)
l2=Label(f2,text="Имя",width=10)
l3=Label(f2,text="Фамилия",width=10)
l4=Label(f2,text="Год рождения",width=10)

e1=Entry(f2)
e2=Entry(f3)
e3=Entry(f5)

r1=Radiobutton(f5,text="муж",value=1,width=10)
r2=Radiobutton(f5,text="жен",value=2,width=10)

c1=Checkbutton(f6,text="Высшее",width=10)
c2=Checkbutton(f6,text="Среднее-спец",width=10)

b1=Button(f7,text="Записать",width=27)


