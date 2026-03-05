import tkinter as tk
from tkinter import messagebox

def save_entry():
    entry_text = entry.get("1.0", "end-1c")
    if entry_text.strip():
        with open("diary.txt", "a") as file:
            file.write(entry_text + "\n")
        messagebox.showinfo("Сохранено", "Запись сохранена успешно!")
        entry.delete("1.0", "end")
    else:
        messagebox.showwarning("Пустое поле", "Пожалуйста, введите текст!")

def view_entries():
    with open("diary.txt", "r") as file:
        entries = file.read()
    messagebox.showinfo("Записи", entries)

root = tk.Tk()
root.title("Ежедневник")

entry = tk.Text(root, height=10, width=50)
entry.pack()

save_button = tk.Button(root, text="Сохранить", command=save_entry)
save_button.pack()

view_button = tk.Button(root, text="Просмотреть записи", command=view_entries)
view_button.pack()

root.mainloop()
