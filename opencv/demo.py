# import cv2
# import numpy as np
# img = cv2.imread('Screenshot (186).png',0)
# print(img)
# cv2.imshow('Screenshot (186).png',img)
# cv2.waitKey(0)
# cv2.destroyAllWindows()

# import cv2 as o
# cap_webcam=o.VideoCapture(0)
# if not cap_webcam.isOpened():
#     print("Error")
#     exit()
# while True:
#     ret,frame=cap_webcam.read()
#     if not ret:
#         break
#     o.imshow("Video",frame)
#     if o.waitKey(1)&0xFF == ord('q'):
#         break
# cap_webcam.release()
# o.destroyAllWindows()
import cv2

# Load the image
image = cv2.imread('messi5.jpg')

# Define the coordinates of the ROI
x = 100  # X-coordinate of the top-left corner of the ROI
y = 150  # Y-coordinate of the top-left corner of the ROI
width = 200  # Width of the ROI
height = 150  # Height of the ROI

# Slice the ROI from the image
roi = image[y:y+height, x:x+width]

# Display the ROI
cv2.imshow('ROI', roi)
cv2.waitKey(0)
cv2.destroyAllWindows()