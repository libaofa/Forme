import pymysql

def Connect_DataBase():
    try:
        Base = input("请输入想要连接的数据库:")
        db = pymysql.connect(   # 打开数据库连接
            host="127.0.0.1",   # 主地址
            user="root",        # 用户名
            password="123123",  # 密码
            database = Base,
            charset="utf8")     # 编码格式
        print("数据库连接成功")
        cursor = db.cursor()
        return [db,cursor]
    except:
        print("数据库连接失败")
        return [0,0]

def Close(db):
    db.close()
    print("数据库断开连接")
