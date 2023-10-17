#video capture

import cv2
img=cv2.imread('messi5.jpg',1)

print(img.shape)
#img.shape returns a tuple of number of rows, columns, and channels

print(img.size)
#img.size returns Total number of pixels is accessed

print(img.dtype)
#img.dtype returns Image datatype is obtained

b,g,r=cv2.split(img)
#output vector of arrays; the arrays themselves are reallocated, if needed.

img=cv2.merge((b,g,r))
# The number of channels will be the total number of channels in the matrix array.

ball=img[280:340,330:390]
#copy the ball from the image which is available above coordinate position

img[273:333,100:160]=ball
#paste ball in the image new coordinate position

cv2.imshow('image',img)
cv2.waitKey(0)
cv2.destroyAllWindows()