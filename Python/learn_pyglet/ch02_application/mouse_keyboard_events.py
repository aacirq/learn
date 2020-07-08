import pyglet
from pyglet.window import key
from pyglet.window import mouse

window = pyglet.window.Window()

@window.event 
def on_key_press(symbol, modifiers):
    if symbol == key.A:
        print("The 'A' key was pressed.")
    elif symbol == key.LEFT:
        print("The 'LEFT' arrow key was pressed.")
    elif symbol == key.ENTER:
        print("The 'enter' key was pressed.")

@window.event 
def on_mouse_press(x, y, button, modifiers):
    if button == mouse.LEFT:
        print("The LEFT MOUSE button was pressed.", x, y)

@window.event 
def on_draw():
    window.clear()

# event_logger = pyglet.window.event.WindowEventLogger()
# window.push_handlers(event_logger)
pyglet.app.run()