import tkinter as tk

class Calculator:
    def __init__(self, root):
        self.root = root
        self.root.title("Калькулятор")

        self.result = tk.StringVar()
        self.result.set("0")

        self.create_ui()

    def create_ui(self):
        self.entry = tk.Entry(self.root, textvariable=self.result, font=("Arial", 20), justify="right")
        self.entry.grid(row=0, column=0, columnspan=4, padx=10, pady=10)

        buttons = [
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "0", ".", "=", "+"
        ]

        row = 1
        col = 0

        for button in buttons:
            tk.Button(self.root, text=button, width=5, height=2, command=lambda btn=button: self.button_click(btn)).grid(row=row, column=col, padx=5, pady=5)

            col += 1
            if col > 3:
                col = 0
                row += 1

    def button_click(self, button):
        if button == "=":

            try:
                result = eval(self.result.get())
                self.result.set(str(result))
            except:
                self.result.set("Ошибка")
        else:
            if self.result.get() == "0" and button != ".":
                self.result.set("")

            current_result = self.result.get()
            self.result.set(current_result + button)

root = tk.Tk()
app = Calculator(root)
root.mainloop()
