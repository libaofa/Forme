import os

def mkdir(path,name):
    path = path+name
    path = path.strip()
    path = path.rstrip('/')

    isExists = os.path.exists(path)
    if not isExists:
        os.makedirs(path)
        print(path + ' 创建成功')
        return True
    else:
        print(path + ' 目录已存在')
        return False


i = range(34,66)
# 定义要创建的目录
mkpath = 'C:/Users/Bear/Desktop/tf_1/tf_car_license_dataset/train_images/training-set/'
# 调用函数
for i in range(34,66):
    mkdir(mkpath, str(i))