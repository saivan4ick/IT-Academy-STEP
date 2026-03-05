import tkinter as tk
from tkinter import messagebox
import subprocess

class App:
    def __init__(self, root):
        self.root = root
        self.root.title("Запуск нескольких программ на Tkinter")

        self.create_ui()

    def create_ui(self):
        self.canvas = tk.Canvas(self.root, width=800, height=600)
        self.canvas.pack()

        self.button = tk.Button(self.root, text="Запустить программу Рисование", command=self.run_paint)
        self.button.pack()
        self.button = tk.Button(self.root, text="Запустить программу Ежедневник", command=self.run_ezhednevnik)
        self.button.pack()
        self.button = tk.Button(self.root, text="Запустить программу Калькулятор", command=self.run_calculator)
        self.button.pack()
    def run_paint(self):
        try:
        
            process = subprocess.Popen(['python', 'paint.py'], stdout=subprocess.PIPE)
            window_id = self.canvas.create_window(100, 100, window=process.stdout)
        except Exception as e:
            pass
    def run_ezhednevnik(self):
        try:
            process = subprocess.Popen(['python', 'ezhednevnik.py'], stdout=subprocess.PIPE)
            window_id = self.canvas.create_window(100, 100, window=process.stdout)
        except Exception as e:
            pass
    def run_calculator(self):
        try:
            process = subprocess.Popen(['python', 'calculator.py'], stdout=subprocess.PIPE)
            window_id = self.canvas.create_window(100, 100, window=process.stdout)
        except Exception as e:
            pass
root = tk.Tk()
app = App(root)
root.mainloop()
