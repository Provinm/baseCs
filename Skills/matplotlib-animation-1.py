import numpy as np
import matplotlib.mlab as mlab
import matplotlib.pyplot as plt
import random


# left = list(range(5))
# height = random.sample(range(100), 5)
# width = 0.8
# color = ['green'] * 4 + ['red']

# fig = plt.figure()




# plt.bar(left=left, height=height, width=width, color=color)

# plt.show()

# import matplotlib.pyplot as plt
from matplotlib import animation

def barlist(n): 
    return [1/float(n*k) for k in range(1,6)]

fig=plt.figure()

n=100 #Number of frames
x=range(1,6)
barcollection = plt.bar(x,barlist(1))

def animate(i):
    y=barlist(i+1)
    for i, b in enumerate(barcollection):
        b.set_height(y[i])

anim=animation.FuncAnimation(fig,animate,repeat=False,blit=False,frames=n,
                             interval=500)

# anim.save('mymovie.mp4',writer=animation.FFMpegWriter(fps=10))
plt.show()