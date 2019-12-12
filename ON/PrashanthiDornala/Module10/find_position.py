import pyautogui

print('Press vontrol +C to terminate')
try:
    while True:
        x,y=pyautogui.position()
        positionStr='X: '+str(x)+' Y: '+str(y)
        print(positionStr,end='\r')
except KeyboardInterrupt:
    print('\nDone')
    