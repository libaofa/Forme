#ifndef WIDGET_H			//防止头文件widget.h呗重复调用，if not defined
#define WIDGET_H			//宏定义

#include <QWidget>			//调用QWidget头文件

const int BLOCK_SIZE=25; 	//单个方块单元的边长
const int MARGIN=5; 		//场景边距
const int AREA_ROW=20; 		//场景行数
const int AREA_COL=12; 		//场景列数

//方向
enum Direction					
{
    UP,						//上
    DOWN,					//下
    LEFT,					//左
    RIGHT,					//右
    SPACE					//直接落到底
};

//定义边界信息
struct Border
{
    int ubound;				//上边界
    int dbound;				//下边界
    int lbound;				//左边界
    int rbound;				//右边界
};

//坐标
struct block_point			
{
    int pos_x;				//横坐标
    int pos_y;				//纵坐标
};

namespace Ui {				//创建命名空间
class Widget;				//Widget类
}

class Widget : public QWidget	//公有继承
{
    Q_OBJECT				/*宏的展开将为我们的类提供信号槽机制、
							国际化机制以及 Qt 提供的不基于 C++ RTTI 的
							反射能力，不添加会错*/

public:
    void InitGame(); 		//初始化
    void StartGame(); 		//开始游戏
    void GameOver(); 		//游戏结束

    void ResetBlock(); 		//重置方块
    void BlockMove(Direction dir); 					//方块变动
    void BlockRotate(int block[4][4]); 				//方块旋转
    void CreateBlock(int block[4][4],int block_id); //产生方块
    void GetBorder(int block[4][4],Border &border); //计算边界
    void ConvertStable(int x,int y); 				//转换为稳定方块
    bool IsCollide(int x,int y,Direction dir); 		//判断是否会碰撞

public:
    explicit Widget(QWidget *parent = 0);			//显示构造函数，QWidget指针变量默认值为0		
    ~Widget();										//析构函数

    virtual void paintEvent(QPaintEvent *event); 	//场景刷新
    virtual void timerEvent(QTimerEvent *event); 	//定时器事件
    virtual void keyPressEvent(QKeyEvent *event); 	//键盘响应

private:
    Ui::Widget *ui;						//窗体

private:
    int game_area[AREA_ROW][AREA_COL]; 	//场景区域，1表示活动的方块，2表示稳定的方块，0表示空
    block_point block_pos; 				//当前方块坐标
    int cur_block[4][4]; 				//当前方块形状
    Border cur_border; 					//当前方块边界
    int next_block[4][4]; 				//下一个方块形状
    bool isStable; 						//当前方块是否稳定了
    int score;  						//游戏分数
    int game_timer; 					//方块下落计时器
    int paint_timer; 					//渲染刷新计时器
    int speed_ms; 						//下落时间间隔
    int refresh_ms; 					//刷新时间间隔

};

#endif // WIDGET_H
