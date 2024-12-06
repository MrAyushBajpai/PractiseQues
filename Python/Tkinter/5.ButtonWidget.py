import tkinter as tk
root = tk.Tk()

def on_button_click():
    print("Button Pressed")

button = tk.Button(root, text="Button1", command=on_button_click)
button.pack(pady=20)

exitButton = tk.Button(root, text="Exit", command=root.quit)
exitButton.pack(pady=20)

root.mainloop()