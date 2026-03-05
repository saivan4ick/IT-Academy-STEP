import tkinter as tk

class DrawingApp:
    def __init__(self, root):
        self.root = root
        self.canvas_width = 800
        self.canvas_height = 600

        self.create_ui()

    def create_ui(self):
        self.canvas = tk.Canvas(self.root, width=self.canvas_width, height=self.canvas_height)
        self.canvas.pack()

        self.canvas.bind("<B1-Motion>", self.draw)

        self.clear_button = tk.Button(self.root, text="Очистить", command=self.clear_canvas)
        self.clear_button.pack()

    def draw(self, event):
        x, y = event.x, event.y
        radius = 5
        self.canvas.create_oval(x - radius, y - radius, x + radius, y + radius, fill="black")

    def clear_canvas(self):
        self.canvas.delete("all")
        
root = tk.Tk()
root.title("Программа для рисования")
app = DrawingApp(root)

root.mainloop()
