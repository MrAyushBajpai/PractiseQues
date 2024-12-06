import tkinter as tk

# Create the main application window
root = tk.Tk()
root.title("Tkinter Geometry Managers Example")
root.geometry("500x400")

# Using pack
frame_pack = tk.Frame(root, bg="lightblue", width=500, height=100)
frame_pack.pack(fill="x")  # Use pack to position the frame
label_pack = tk.Label(frame_pack, text="This is packed", bg="lightblue", font=("Helvetica", 14))
label_pack.pack(pady=10)  # Positioned in the center of the frame

# Using grid
frame_grid = tk.Frame(root, bg="lightgreen", width=500, height=150)
frame_grid.pack(fill="x")  # Position the grid container using pack
label_grid_1 = tk.Label(frame_grid, text="Grid (0, 0)", bg="lightgreen", font=("Helvetica", 12))
label_grid_1.grid(row=0, column=0, padx=10, pady=10)  # First cell of the grid
label_grid_2 = tk.Label(frame_grid, text="Grid (0, 1)", bg="lightgreen", font=("Helvetica", 12))
label_grid_2.grid(row=0, column=1, padx=10, pady=10)  # Second cell of the grid
label_grid_3 = tk.Label(frame_grid, text="Grid (1, 0)", bg="lightgreen", font=("Helvetica", 12))
label_grid_3.grid(row=1, column=0, padx=10, pady=10)  # New row

# Using place
frame_place = tk.Frame(root, bg="lightyellow", width=500, height=150)
frame_place.pack(fill="x")  # Position the place container using pack
label_place = tk.Label(frame_place, text="This is placed at (200, 50)", bg="lightyellow", font=("Helvetica", 12))
label_place.place(x=200, y=50)  # Exact coordinates (200 pixels from left, 50 from top)

root.mainloop()
