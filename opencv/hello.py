# import cv2
# img=cv2.imread('E:\opencv\Screenshot (21).png',0)
# print(img)
# cv2.imshow('E:\opencv\Screenshot (21).png',img)
# cv2.waitKey(5000)
# cv2.destroyAllWindows()


# import cv2
# img=cv2.imread('E:\opencv\Screenshot (21).png',0)
# print(img)
# # cv2.imshow('Thalaphathy.png',img)
# cv2.waitKey(0)
# cv2.imwrite('Thalaphathy.png',img)
# cv2.destroyAllWindows()

# import cv2
# cap=cv2.VideoCapture(0)
# while(True):
#     ret,frame=cap.read()
#     gray=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
#     cv2.imshow('frame',gray)
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break
# cap.release()
# cv2.destroyAllWindows()


# import cv2
# cap=cv2.VideoCapture(0)
# fourcc = cv2.VideoWriter_fourcc(*'XVID')
# out=cv2.VideoWriter('output.avi',fourcc,20.0,(640,480))
# print(cap.isOpened())
# while(cap.isOpened()):
#     ret,frame=cap.read()
#     if(ret==True):
#         print(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
#         print(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
#         out.write(frame)
#         gray=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
#         cv2.imshow('frame',gray)
#         if cv2.waitKey(1) & 0xFF == ord('q'):
#             break
#     else:
#         break
# cap.release()
# out.release()
# cv2.destroyAllWindows()



# import cv2
# img=cv2.imread('E:\opencv\Thalaphathy.png',1)

# img=cv2.line(img,(0,0),(255,255),(2,4,2),2)

# cv2.imshow('hi',img)
# cv2.waitKey(5000)
# cv2.destroyAllWindows()


# import cv2
# img=cv2.imread('E:\opencv\Thalaphathy.png',1)

# img=cv2.line(img,(0,0),(255,255),(2,4,2),2)

# cv2.imshow('hi',img)
# cv2.waitKey(5000)
# cv2.destroyAllWindows()







