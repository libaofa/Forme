import cv2
import numpy as np

a=np.ones((46,38))
a[:,:] = 0
cv2.imshow('a',a)
cv2.waitKey()
print(a.shape[0],a.shape[1])