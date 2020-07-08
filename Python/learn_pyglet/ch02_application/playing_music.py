import pyglet 

window = pyglet.window.Window()
music = pyglet.resource.media("ball.wav", streaming = False)
music.play()

@window.event 
def on_draw():
    window.clear()

pyglet.app.run()