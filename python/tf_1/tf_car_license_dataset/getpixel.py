#coding=utf-8

import cv2
import os
import numpy as np

def bianhuan(path):
    img = cv2.imread(path,0)
    res=cv2.resize(img,(32,40),interpolation=cv2.INTER_CUBIC)
    a=np.ones((50,42))
    a[:,:] = 0
    a[5:45,5:37] = res
    img_new = cv2.resize(a,(32,40),interpolation=cv2.INTER_CUBIC)
    #res = img
    for i in range(40):
        for j in range(32):
            if img_new[i,j] > 150:
                img_new[i,j] = 255
            else:
                img_new[i, j] = 0
    path = path[:-3]+'bmp'
    
    cv2.imwrite(path,img_new)
    #cv2.imshow('img',res)
    #cv2.waitKey(0)

i = 0
dir = r'C:\Users\Bear\Desktop\cnn_char_train'
for root, dirs, files in os.walk(dir, topdown=False):
    #for name in files:
        #print(os.path.join(root, name))
    for name in dirs:
        i_path = os.path.join(root, name)
        #print(name)
        '''if name == '2':
            print(name)
            for i_root, i_dirs, i_files in os.walk(str(i_path), topdown=False):
                for i_name in i_files:
                    img_name = os.path.join(i_root, i_name)                   
                    print(img_name) 
                    bianhuan(str(img_name))
                    i = i + 1'''
        #print(i)
        for i_root, i_dirs, i_files in os.walk(str(i_path), topdown=False):
            for i_name in i_files:
                img_name = os.path.join(i_root, i_name)                   
                print(img_name) 
                bianhuan(str(img_name))
                i = i + 1
        i = 0
print('exit')
#print(i_dirs)
'''for name in i_dirs: 
    print(dir)
    for rt, dirs, files in os.walk(name):
        for filename in files:
            filename = dir + filename
            bianhuan(filename)'''

#print('123456.jpg'+'\b\b\b\b.bpm')
#path = "C:/Users/Bear/Desktop/zifu/9/0_12.png"
#bianhuan(path)


