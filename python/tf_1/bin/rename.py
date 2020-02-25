import os
import re
import sys


def rename(path, name):
    fileList = os.listdir(path)
    # 输出此文件夹中包含的文件名称
    # print("修改前：" + str(fileList)[1])
    # 得到进程当前工作目录
    currentpath = os.getcwd()
    os.chdir(path)
    num = 1
    for fileName in fileList:
        #os.rename(fileName, ( name+'_%d.bmp'%num))
        os.rename(fileName, ('%d.bmp'%num))
        num = num + 1
    # print("***************************************")
    os.chdir(currentpath)
    sys.stdin.flush()
    # print("修改后：" + str(os.listdir(r"C:/Users/Bear/Desktop/program/python/ex11/data/1"))[1])

#name = ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "J", "K", "L", "M", "N", "P","Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z")

#for i in range(1,34):
    #dir = 'C:\\Users\\Bear\\Desktop\\tf_1\\tf_car_license_dataset\\train_images\\training-set\\%s\\'%str(i)
    #rename(dir,name[i])
	
i = 1
dir = r"C:\Users\Bear\Desktop\tf_1\tf_car_license_dataset\test_images"
for root, dirs, files in os.walk(dir, topdown=False):
    #for name in files:
        #print(os.path.join(root, name))
    for name in dirs:
        i_path = os.path.join(root, name)
        #print(i_path)
        rename(i_path,str(i))
        '''for i_root, i_dirs, i_files in os.walk(str(i_path), topdown=False):
            for i_name in i_files:
                img_name = os.path.join(i_root, i_name)
                bianhuan(str(img_name))
                i = i + 1'''
        print(i)
        i = 0

print('exit')