from djitellopy import Tello
import cv2

tello = Tello()

tello.connect()
tello.streamon()
frame_read = tello.get_frame_read()
tello.takeoff()

tello.move_left(50)
tello.rotate_clockwise(90)
cv2.imwrite("picture.png", frame_read.frame)
tello.move_forward(50)
tello.rotate_clockwise(270)
cv2.imwrite("picture1.png", frame_read.frame)

tello.land()
tello.streamoff()