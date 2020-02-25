import cv2
import numpy as np
from math import *

B = 138
G = 63
R = 23
pixelB = 0
pixelG = 0
pixelR = 0
colormax = 50
r_width = 300
r_height = 400
img_tiqu = []

def tiqu_(path):
    img = cv2.imread(path, 1)
    #修改尺寸
    img_resize = cv2.resize(img, (r_height, r_width), interpolation=cv2.INTER_CUBIC)
    #二值化
    img_gray = cv2.cvtColor(img_resize,cv2.COLOR_RGB2GRAY)
    ret, img_d2 = cv2.threshold(img_gray, 0, 255, cv2.THRESH_OTSU)
    for i in range(img_resize.shape[0]):
        for j in range(img_resize.shape[1]):
            pixelB = img_resize[i, j, 0]
            pixelG = img_resize[i, j, 1]
            pixelR = img_resize[i, j, 2]
            if abs(pixelB - B) < colormax and abs(pixelG - G) < colormax and abs(pixelR - R) < colormax:
                img_d2[i, j] = 255
                img_d2[i, j] = 255
                img_d2[i, j] = 255
            else:
                img_d2[i, j] = 0
                img_d2[i, j] = 0
                img_d2[i, j] = 0

    kernelX = cv2.getStructuringElement(cv2.MORPH_RECT, (20, 5))
    img_d2_open = cv2.morphologyEx(img_d2, cv2.MORPH_CLOSE, kernelX)
    img_median = cv2.medianBlur(img_d2_open, 15)

    tmp, contours, w1 = cv2.findContours(img_median, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

    for item in contours:
        rect = cv2.boundingRect(item)
        x = rect[0]
        y = rect[1]
        width = rect[2]
        height = rect[3]
        if rect[0] > 50 and rect[0] < r_width-30 and rect[1] > 100  and rect[0] < r_height - 50:
            if width > (height * 2):
                # 裁剪区域图片
                chepai = img_resize[y:y + height, x:x + width]
                chepai_resize = cv2.resize(chepai, (360, 90), interpolation=cv2.INTER_CUBIC)
                #cv2.imshow('chepai'+str(x), chepai_resize)
                #print(chepai_resize.shape[0],chepai_resize.shape[1])
                img_tiqu.append(chepai_resize)
                cv2.imwrite(r'C:/Users/Bear/Desktop/2.jpg', chepai_resize)
    #return img_tiqu


def xiaochu(img):
    #
	#前两个，后五个都占50像素宽，圆点占10像素宽
	#
    img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)  # 转换了灰度化
    #cv2.imshow('gray', img_gray)  # 显示图片
    img_d2 = img_gray
    #cv2.threshold(img_gray, 100, 255, cv2.THRESH_BINARY, img_d2)
    for i in range(90):
        for j in range(360):
            if img_d2[i,j] > 180:
                img_d2[i,j] = 255
            else:
                img_d2[i,j] = 0
    #cv2.imshow('threshold', img_d2)
    #kernelX = cv2.getStructuringElement(cv2.MORPH_RECT, (2, 2))
    #img_d2 = cv2.morphologyEx(img_d2, cv2.MORPH_OPEN, kernelX)
    start_i = 0
    end_i = 0
    flag = []
    count = 0
    a = []
    for i in range(30):
        a.append(i)
    a.reverse()
    #上方
    
    for i in a:
        for j in range(360):
            if img_d2[i,j] == 255:
                count = count + 1					
        if count >= 40:
            #print(i)
            flag.append(i)
        else:
            break
        count = 0
    if flag == []:
        start_i = 0
    else:
        start_i = flag[-1]+1	
    #print('START:',start_i)
		
    flag.clear()
    img_d2[0:start_i, :] = 0
    #下方	
    for i in range(60,90):
        for j in range(360):
            if img_d2[i,j] == 255:
                count = count + 1
        if count >= 40:
            flag.append(i)
        else:
            break
        count = 0
    if flag == []:
        end_i = 89
    else:
        end_i = flag[-1]+1
    #print('END:',end_i)
    img_d2[end_i:, :] = 0
    
    count_255 = 0
    l_i = 0
    flag = 0
    #汉字左方
    for j in range(46):
        for i in range(86):
            for x_i in range(i,i+4):
                for x_j in range(j,j+4):
                    if img_d2[x_i,x_j] == 255:
                        count_255 = count_255 + 1
            #print(i,j,count_255)
            if count_255 == 16:
                l_i = j
                flag = 1
                break
            else:
                count_255 = 0
        if flag == 1:
            break
    img_d2[:,0:l_i] = 0
    #尾数右方
    count_255 = 0
    r_i = 0
    flag = 0
    a = []
    for i in range(325,350):
        a.append(i)
    a.reverse()
    for j in a:
        for i in range(3,90):
            for x_i in range(i-3,i+1):
                for x_j in range(j-3,j+1):
                    if img_d2[x_i,x_j] == 255:
                        count_255 = count_255 + 1
            if count_255 == 16:
                r_i = j
                flag = 1
                break
            else:
                count_255 = 0
        if flag == 1:
            break

    img_d2[:,r_i:] = 0
    
    img_new = img_d2[start_i:end_i, l_i:r_i]
    
    a = np.ones((img_new.shape[0],img_new.shape[1]+10))
    a[:,:] = 0
    a[:,5:5+img_new.shape[1]] = img_new
    new = cv2.resize(a,(360,90),interpolation=cv2.INTER_CUBIC)

    pixel = [0,49, 50,99, 110,159, 160,209, 210,259, 260,309, 310,359]
    num_i = 1
    count = 0
    flag = 0
    for pix in range(7):
        img_new = cv2.resize(new[:, pixel[pix*2]:pixel[pix*2+1]],(32,40),interpolation=cv2.INTER_CUBIC)
        a=np.ones((56,48))
        a[:,:] = 0
        a[8:48,8:40] = img_new
        img_new = cv2.resize(a,(32,40),interpolation=cv2.INTER_CUBIC)
        #cv2.imshow('1_000',img_new)
        #print(img_new.shape[0], img_new.shape[1])
        cv2.waitKey()

        for i in range(40):
            for j in range(32):
                if img_new[i,j] == 0:
                    count = count + 1 
            if count != 1280:   
                flag = 1
                count = 0
                break

        if flag == 1:
            cv2.imshow('1_%d'%num_i,img_new)
            cv2.imwrite(r"C:/Users/Bear/Desktop/tf_1/tf_car_license_dataset/test_images/1/%s.bmp"%str(num_i), img_new)
            num_i = num_i + 1
        #cv2.waitKey()


#**********************************************************#
# 1、读取图像，并把图像转换为灰度图像并显示
path = r'C:\Users\Bear\Desktop\tf_1\data\image\1.jpg'
tiqu_(path)
for img in img_tiqu:
    try:
        xiaochu(img)
        cv2.waitKey()
    except:
        continue
#img = []
cv2.destroyAllWindows()


