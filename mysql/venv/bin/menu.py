#此页面作为菜单界面
from Connect import Connect_DataBase
from Connect import Close
from Define_Sql import Define
from Define_Sql import Select

base = [0,0]

while 1:
    print("1.连接数据库")
    print("2.自定义输入SQL语句(增删改)")
    print("3.自定义输入查询语句")
    print("4.断开连接或退出")
    if base[0] != 0:
        sql = "SHOW TABLES;"
        base[1].execute(sql)
        result = base[1].fetchall()
        print("已有数据表:")
        i = 1
        for row in result:
            print(row[0].center(20), end=' ')
            if(i % 4 == 0):
                print("\n")
            i = i + 1
    Choose = int(input("\n请键入您的选择:"))
    if Choose == 1:
        base = Connect_DataBase()
    elif Choose == 2:
        Define(base[0],base[1])
    elif Choose == 3:
        Select(base[0],base[1])
    elif Choose == 4:
        Close(base[0])
        exit(1)
    else:
        print("请键入1～4以内的数值\n")
