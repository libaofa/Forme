import pymysql

def Define(db,cursor):
    if(db == 0):
        print("未连接数据库，请创建或连接数据库\n")
    else:
        sql = input("请输入SQL的操作语句:")
        try:
            cursor.execute(sql)
            db.commit()
            print("操作成功")
        except:
            db.rollback()
            print("操作失败")

def Select(db,cursor):
    if (db == 0):
        print("未连接数据库\n")
    else:
        base = input("请输入想要查询的表名:")
        sql = input("请输入SQL的查询语句:")
        if(base not in sql):
            print("想要查询的表名不在语句中\n")
        else:
            try:
                column_name = "DESC "+base+";"
                cursor.execute(column_name)
                result = cursor.fetchall()
                for row in result:
                    print(row[0].center(20),end=' ')
                print('\n')
                cursor.execute(sql)
                result = cursor.fetchall()
                for row in result:
                    for field in row:
                        print(str(field).center(20),end=' ')
                    print('\n')

                print("查询成功")
            except:
                db.rollback()
                print("查询失败")