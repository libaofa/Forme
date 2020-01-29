import os
os.environ['TF_CPP_MIN_LOG_LEVEL']='2'
import tensorflow as tf

#创建常量op
m1 = tf.constant([[3,3]])
#创建常量op
m2 = tf.constant([[2],[3]])
#创建矩阵乘法op,将m1和m2传入
product = tf.matmul(m1,m2)
print(m1)
print(m2)
print(product)

#定义会话，启动默认图
sess = tf.Session()

#调用sess的run方法来执行矩阵乘法op
#run(product)触发了图中3个op
result = sess.run(product)
print(result)