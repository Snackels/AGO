import sensor, image, time
import display
from pyb import UART

sensor.reset()
sensor.set_pixformat(sensor.RGB565)
sensor.set_framesize(sensor.QVGA)  # 320x240 max size 76,800
sensor.skip_frames(time=1000)
sensor.set_auto_gain(False)  # Must be turned off for color tracking
sensor.set_auto_whitebal(False)  # Must be turned off for color tracking
sensor.set_auto_exposure(False)

GreenThresholds = [(57, 0, -10, -128, 14, 127)]
RedThresholds = [(100, 0, 38, 127, -127, 127)]

uart = UART(3, 19200)
clock = time.clock()

# Initialize LCD using SPI Display
lcd = display.SPIDisplay()

while(True):
    clock.tick()
    img = sensor.snapshot()

    GreenBob = img.find_blobs(GreenThresholds, pixels_threshold=200, area_threshold=200, merge=True, margin=5)
    if GreenBob:
        LargestGreenBob = max(GreenBob, key=lambda b: b.area())
        img.draw_rectangle(LargestGreenBob.rect(), color=(0, 255, 0))
        img.draw_cross(LargestGreenBob.cx(), LargestGreenBob.cy(), color=(0, 255, 0))
        uart.write("%d,%d,%d,%c,    \n" % (LargestGreenBob.cx(), LargestGreenBob.cy(), LargestGreenBob.area(), "G",))

    RedBob = img.find_blobs(RedThresholds, pixels_threshold=200, area_threshold=200, merge=True, margin=5)
    if RedBob:
        LargestRedBob = max(RedBob, key=lambda b: b.area())
        img.draw_rectangle(LargestRedBob.rect(), color=(255, 0, 0))
        img.draw_cross(LargestRedBob.cx(), LargestRedBob.cy(), color=(255, 0, 0))
        uart.write("%d,%d,%d,%c,\n" % (LargestRedBob.cx(), LargestRedBob.cy(), LargestRedBob.area(), "R",))

    lcd.write(img)

    if uart.any():
        data = uart.readline()
        print("Received:", data)
