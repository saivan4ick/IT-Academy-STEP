from tkinter import*
from tkinter import filedialog
def save():
    file_name=filedialog.asksaveasfilename(title="Сохранение тектового файла",filetypes=(('All files','*.*'),('Текстовой файл','.txt')))
    print(file_name)
    f=open(file_name+'.txt','w',encoding='utf-8')
    x=t.get(1.0,END)
    f.write(x)
    f.close
def openn():
    file_name=filedialog.askopenfilename(title="Открыть тектовой файл",filetypes=(('All files','*.*'),('Текстовой файл','.txt')))
    f=open(file_name,'r',encoding='utf-8')
    x=f.read()
    t.delete(1.0,END)
    t.insert(1.0,x)
    f.close()
w=Tk()

t=Text(w)
t.pack()

m=Menu()
m1=Menu(tearoff=0)

m1.add_cascade(label="Open",command=openn)
m1.add_cascade(label="Save as",command=save)

m.add_cascade(label="File",menu=m1)

w.config(menu=m)
