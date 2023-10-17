# import cv2
# face_cascade=cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
# cap=cv2.VideoCapture(0)

# while 1:
#     ret,img=cap.read()
#     gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
#     faces=face_cascade.detectMultiScale(gray,1.3,5)

#     for(x,y,w,h) in faces:
#         cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2,cv2.LINE_AA)
#         font=cv2.FONT_HERSHEY_SIMPLEX
#         cv2.putText(img,'Chow3',(200,200),font,2,(255,255,0),2,cv2.LINE_AA)
#         roi_gray=gray[y:y+h,x:x+w]
#         roi_color=img[y:y+h, x:x+w]
#     cv2.imshow('img',img)
#     k=cv2.waitKey(30)
#     if k==27:
#         break
# cap.release()
# cv2.destroyAllWindows()



import cv2

# Load the pre-trained face detection cascade
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Initialize the webcam
video_capture = cv2.VideoCapture(0)

while True:
    # Capture frame-by-frame
    ret, frame = video_capture.read()

    # Convert the frame to grayscale
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Perform face detection
    faces = face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5, minSize=(30, 30))

    # Draw rectangles around the detected faces
    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 3)

    # Display the resulting frame
    cv2.imshow('Face Detection', frame)

    # Exit loop if 'q' is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the webcam and close the window
video_capture.release()
cv2.destroyAllWindows()