from subprocess import call
import time
import os
import glob
import smtplib
import base64
from email.mime.image import MIMEImage
from email.mime.multipart import MIMEMultipart
import subprocess
gmail_user = "bommisrilekkhaag.21cse@kongu.edu"
gmail_pwd = "kongu@2022"
FROM ="bommisrilekkhaag.21cse@kongu.edu"
TO = ["bommisrilekkhaaganesan@gmail.com"]
#must be a list
i=2
print("testing")
while (1):
    i=i-1
    #subprocess.Popen( "raspivid -o /home/pi/sample.mov",shell=True )
    time.sleep(1)
    print("I am here")
    msg = MIMEMultipart()
    time.sleep(1)
    msg["Subject"] ="testing msg sent from python"
    time.sleep(1)
    fp = open("D:/Programming-Practice/python/mail-IoT/rose.jpg", "rb")
    time.sleep(1)
    img = MIMEImage(fp.read())
    time.sleep(1)
    fp.close()
    time.sleep(1)
    msg.attach(img)
    time.sleep(1)
    try:
        server = smtplib.SMTP("smtp.gmail.com", 587)
    #or port 465 doesn"t seem to work!
        print("smtp.gmail")
        server.ehlo()
        print( "ehlo")
        server.starttls()
        print ("starttls")
        server.login(gmail_user, gmail_pwd)
        print ("reading mail & password")
        server.sendmail(FROM, TO, msg.as_string())
        print ("from")
        server.close()
        print ("successfully sent the mail")
    except:
        print ("failed to send mail")