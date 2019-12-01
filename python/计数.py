#coding:utf-8


def jishu (x,num):
    for z in range(len(x)):
        print("%d" % x[z], end=' ')
    print("\t\t\t")
    for z in range(len(x)):
        print(bin(x[z]), end=' ')
    print("总值:"+bin(sum(x)))
    if(x[0] == 0 and x[1] == 0 and x[2] == 0):
        print("%s胜利"%("B"if num%2 else "A"))
        x = [7, 6, 5]
        jishu(x,0)
    i = len(x)
    count = int(input("%s输入想要改变的数:"%("B"if num%2 else "A")))
    if(0 < count < i+1 and x[count-1] != 0):
        a = int(input("置为:"))
        if(a > x[count-1]):
            print("过大")
            jishu(x,num)
        x[count-1] = a
        jishu(x,num+1)
    else:
        print("输入错误")
        jishu(x,num)

x = [7,6,5]
jishu(x,0)
