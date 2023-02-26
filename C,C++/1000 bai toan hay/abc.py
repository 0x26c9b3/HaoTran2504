#by chi hao tran and open ai :D 
import tkinter as tk

class Calculator(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Calculator")
        self.geometry("400x400")
        self.resizable(False, False)
        self.create_widgets()

    def create_widgets(self):
        self.result_var = tk.StringVar()
        self.result_var.set("")

        self.result = tk.Entry(self, textvariable=self.result_var, justify="right", state="disabled")
        self.result.grid(row=0, column=0, columnspan=4, padx=40, pady=40, ipadx=40, ipady=40)

        self.create_button("1", 1, 1,lambda: self.update("1"))
        self.create_button("2", 1, 2,lambda: self.update("2"))
        self.create_button("3", 1, 3,lambda: self.update("3"))

        self.create_button("4", 2, 1,lambda: self.update("4"))
        self.create_button("5", 2, 2,lambda: self.update("5"))
        self.create_button("6", 2, 3,lambda: self.update("6"))

        self.create_button("7", 3, 1,lambda: self.update("7"))
        self.create_button("8", 3, 2,lambda: self.update("8"))
        self.create_button("9", 3, 3,lambda: self.update("9"))

        self.create_button("+", 1, 4, lambda: self.update("+"))
        self.create_button("-", 2, 4, lambda: self.update("-"))
        self.create_button("*", 3, 4, lambda: self.update("*"))
        self.create_button("/", 4, 4, lambda: self.update("/"))

        self.create_button("C", 4, 1, self.clear)
        self.create_button("0", 4, 2,lambda: self.update("0"))
    

        self.create_button("=", 4, 3, self.evaluate)
    def create_button(self, text, row, column, command=None):
        button = tk.Button(self, text=text, command=command)
        button.grid(row=row, column=column, padx=10, pady=10)

    def update(self, operator):
        current = self.result_var.get()
        self.result_var.set(current + operator)

    def clear(self):
        self.result_var.set("0")

    def evaluate(self):
        current = self.result_var.get()
        try:
            self.result_var.set(eval(current))
        except:
            self.result_var.set("Error")

if __name__ == "__main__":
    calculator = Calculator()
    calculator.mainloop()