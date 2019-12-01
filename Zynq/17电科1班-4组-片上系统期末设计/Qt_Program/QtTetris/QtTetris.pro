QT       += core gui    #为qt添加core基础代码模块和图形界面模块

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets  #为qt添加QtWidget模块

TARGET = QtTetris		#文件名称
TEMPLATE = app			#指定为应用程序模板


SOURCES += main.cpp\		#指定程序源文件
        widget.cpp

HEADERS  += widget.h		#指定头文件

FORMS    += widget.ui		#指定可视化设计的窗体
