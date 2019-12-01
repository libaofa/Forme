#include <time.h>			//调用头文件time.h
#include <QMessageBox>		//调用头文件QMessageBox，内置的标准对话框
#include <QDebug>			//调用头文件QDebug
//为开发者提供一个装置、文件、字符串或者控制台，写出调试和跟踪信息
#include <QPainter>			//调用头文件QPainter，可以在QWidget上进行绘制图形
#include <QKeyEvent>		//调用头文件QKeyEvent，获取键盘事件	
#include "widget.h"			//调用头文件widget.h
#include "ui_widget.h"		//调用头文件ui_widget.h


//定义图案代码和边界
//田字
int item1[4][4]=
{
    {0,0,0,0},
    {0,1,1,0},
    {0,1,1,0},
    {0,0,0,0}
};
//右L
int item2[4][4]=
{
    {0,1,0,0},
    {0,1,0,0},
    {0,1,1,0},
    {0,0,0,0}
};
//左L
int item3[4][4]=
{
    {0,0,1,0},
    {0,0,1,0},
    {0,1,1,0},
    {0,0,0,0}
};
//右S
int item4[4][4]=
{
    {0,1,0,0},
    {0,1,1,0},
    {0,0,1,0},
    {0,0,0,0}
};
//左S
int item5[4][4]=
{
    {0,0,1,0},
    {0,1,1,0},
    {0,1,0,0},
    {0,0,0,0}
};
//山形
int item6[4][4]=
{
    {0,0,0,0},
    {0,0,1,0},
    {0,1,1,1},
    {0,0,0,0}
};
//长条
int item7[4][4]=
{
    {0,0,1,0},
    {0,0,1,0},
    {0,0,1,0},
    {0,0,1,0}
};

//拷贝方块图案，内置函数
inline void block_cpy(int dblock[4][4],int sblock[4][4])	
{
    for(int i=0;i<4;i++)					//将变量sblock内的数据完全的赋值给变量dblock
        for(int j=0;j<4;j++)
            dblock[i][j]=sblock[i][j];
}

Widget::Widget(QWidget *parent) :	//利用初始化列表方式对类的参数进行赋值
    QWidget(parent),
    ui(new Ui::Widget)
{
	//this值得是此对象的指针
    ui->setupUi(this);
    //调整窗口尺寸布局
    resize(AREA_COL*BLOCK_SIZE+MARGIN*4+4*BLOCK_SIZE,AREA_ROW*BLOCK_SIZE+MARGIN*2);
    //初始化游戏
    InitGame();
}

Widget::~Widget()		//析构函数
{
    delete ui;			//释放掉窗口ui
}

void Widget::paintEvent(QPaintEvent *event)		//场景刷新函数
{
    QPainter painter(this);
    //画游戏场景边框
    painter.setBrush(QBrush(Qt::white,Qt::SolidPattern));
    painter.drawRect(MARGIN,MARGIN,AREA_COL*BLOCK_SIZE,AREA_ROW*BLOCK_SIZE);
    //画方块预告
    painter.setBrush(QBrush(Qt::blue,Qt::SolidPattern));
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(next_block[i][j]==1)
                painter.drawRect(MARGIN*3+AREA_COL*BLOCK_SIZE+j*BLOCK_SIZE,MARGIN+i*BLOCK_SIZE,BLOCK_SIZE,BLOCK_SIZE);
    //绘制得分
    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial",14));
    painter.drawText(QRect(MARGIN*3+AREA_COL*BLOCK_SIZE,MARGIN*2+4*BLOCK_SIZE,BLOCK_SIZE*4,BLOCK_SIZE*4),Qt::AlignCenter,"score: "+QString::number(score));


    //绘制下落方块和稳定方块,注意方块边线的颜色是根据setPen来的，默认黑色
    for(int i=0;i<AREA_ROW;i++)
        for(int j=0;j<AREA_COL;j++)
        {
            //绘制活动方块
            if(game_area[i][j]==1)
            {
                painter.setBrush(QBrush(Qt::red,Qt::SolidPattern));
                painter.drawRect(j*BLOCK_SIZE+MARGIN,i*BLOCK_SIZE+MARGIN,BLOCK_SIZE,BLOCK_SIZE);
            }
            //绘制稳定方块
            else if(game_area[i][j]==2)
            {
                painter.setBrush(QBrush(Qt::green,Qt::SolidPattern));
                painter.drawRect(j*BLOCK_SIZE+MARGIN,i*BLOCK_SIZE+MARGIN,BLOCK_SIZE,BLOCK_SIZE);
            }
        }
}

void Widget::timerEvent(QTimerEvent *event)
{
    //方块下落
    if(event->timerId()==game_timer)
        BlockMove(DOWN);
    //刷新画面
    if(event->timerId()==paint_timer)
        update();
}

//键盘响应函数
void Widget::keyPressEvent(QKeyEvent *event)	
{
    switch(event->key())		//获取键盘事件
    {
    case Qt::Key_Up:			//上键
        BlockMove(UP);			//翻转
        break;
    case Qt::Key_Down:			//下键
        BlockMove(DOWN);		//下落
        break;
    case Qt::Key_Left:			//左键
        BlockMove(LEFT);		//左移
        break;
    case Qt::Key_Right:			//右键
        BlockMove(RIGHT);		//右移
        break;
    case Qt::Key_Space:			//空格键
        BlockMove(SPACE);		//直接落到底
        break;
    case Qt::Key_Escape:		//ESC键
        exit(1);				//结束程序
        break;
    case Qt::Key_R:				//R键
        InitGame();				//重置游戏
        break;
    default:					//其他按键不进行任何操作
        break;
    }
}

//产生方块函数
void Widget::CreateBlock(int block[4][4],int block_id)
{
    switch (block_id)			
    {
    case 0:
        block_cpy(block,item1);		//田字
        break;
    case 1:
        block_cpy(block,item2);			//右L
        break;
    case 2:
        block_cpy(block,item3);			//左L
        break;
    case 3:
        block_cpy(block,item4);			//右S
        break;
    case 4:
        block_cpy(block,item5);			//左S
        break;
    case 5:
        block_cpy(block,item6);			//山行
        break;
    case 6:
        block_cpy(block,item7);			//长条
        break;
    default:
        break;
    }
}

//计算边界函数
void Widget::GetBorder(int block[4][4],Border &border)
{
    //计算上下左右边界
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(block[i][j]==1)
            {
                border.dbound=i;
                break; //直到计算到最后一行有1
            }
    for(int i=3;i>=0;i--)
        for(int j=0;j<4;j++)
            if(block[i][j]==1)
            {
                border.ubound=i;
                break;
            }
    for(int j=0;j<4;j++)
        for(int i=0;i<4;i++)
            if(block[i][j]==1)
            {
                border.rbound=j;
                break;
            }
    for(int j=3;j>=0;j--)
        for(int i=0;i<4;i++)
            if(block[i][j]==1)
            {
                border.lbound=j;
                break;
            }
}


//初始化函数
void Widget::InitGame()
{
    for(int i=0;i<AREA_ROW;i++)			//将游戏界面中的数组所有值归0
        for(int j=0;j<AREA_COL;j++)
            game_area[i][j]=0;

    speed_ms=800;						//下落时间间隔
    refresh_ms=30;						//刷新时间间隔

    //初始化随机数种子
    srand(time(0));

    //分数清0
    score=0;

    //开始游戏
    StartGame();
}

//重置方块函数
void Widget::ResetBlock()
{
    //产生当前方块
    block_cpy(cur_block,next_block);
    GetBorder(cur_block,cur_border);

    //产生下一个方块
    int block_id=rand()%7;
    CreateBlock(next_block,block_id);

    //设置初始方块坐标,以方块左上角为锚点
    block_point start_point;
    start_point.pos_x=AREA_COL/2-2;
    start_point.pos_y=0;
    block_pos=start_point;
}

//开始游戏函数
void Widget::StartGame()
{
    game_timer=startTimer(speed_ms); //开启游戏timer
    paint_timer=startTimer(refresh_ms); //开启界面刷新timer
    //产生初始下一个方块
    int block_id=rand()%7;
    CreateBlock(next_block,block_id);
    ResetBlock(); //产生方块
}

void Widget::GameOver()
{
    //游戏结束停止计时器
    killTimer(game_timer);
    killTimer(paint_timer);
    QMessageBox::information(this,"failed","game over");

}

//方块旋转函数
void Widget::BlockRotate(int block[4][4])
{
    int temp_block[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            temp_block[3-j][i]=block[i][j];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            block[i][j]=temp_block[i][j];
}

//转换为稳定方块函数
void Widget::ConvertStable(int x,int y)
{
    for(int i=cur_border.ubound;i<=cur_border.dbound;i++)
        for(int j=cur_border.lbound;j<=cur_border.rbound;j++)
            if(cur_block[i][j]==1)
                game_area[y+i][x+j]=2; //x和y别搞反
}

//判断碰撞函数
bool Widget::IsCollide(int x,int y,Direction dir)
{
    //用拷贝的临时方块做判断
    int temp_block[4][4];
    block_cpy(temp_block,cur_block);		//拷贝方块图案
    Border temp_border;
    GetBorder(temp_block,temp_border);		//计算边界
    //先尝试按照某方向走一格
    switch(dir)
    {
    case UP:
        BlockRotate(temp_block);			//旋转
        GetBorder(temp_block,temp_border);  //旋转后要重新计算边界
        break;
    case DOWN:
        y+=1;
        break;
    case LEFT:
        x-=1;
        break;
    case RIGHT:
        x+=1;
        break;
    default:
        break;
    }
    for(int i=temp_border.ubound;i<=temp_border.dbound;i++)
        for(int j=temp_border.lbound;j<=temp_border.rbound;j++)
            if(game_area[y+i][x+j]==2&&temp_block[i][j]==1||x+temp_border.lbound<0||x+temp_border.rbound>AREA_COL-1)
                return true;		//如果未碰撞返回1
    return false;					//碰撞返回0
}

//方块移动函数
void Widget::BlockMove(Direction dir)
{
    switch (dir) {
    case UP:
        if(IsCollide(block_pos.pos_x,block_pos.pos_y,UP))
            break;
        //逆时针旋转90度
        BlockRotate(cur_block);
        //防止旋转后bug,i和j从0到4重新设置方块
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                game_area[block_pos.pos_y+i][block_pos.pos_x+j]=cur_block[i][j];
        //重新计算边界
        GetBorder(cur_block,cur_border);
        break;
    case DOWN:
        //方块到达边界则不再移动
        if(block_pos.pos_y+cur_border.dbound==AREA_ROW-1)
        {
            ConvertStable(block_pos.pos_x,block_pos.pos_y);
            ResetBlock();
            break;
        }
        //碰撞检测，只计算上下左右边界，先尝试走一格，如果碰撞则稳定方块后跳出
        if(IsCollide(block_pos.pos_x,block_pos.pos_y,DOWN))
        {
            //只有最终不能下落才转成稳定方块
            ConvertStable(block_pos.pos_x,block_pos.pos_y);
            ResetBlock();
            break;
        }
        //恢复方块上场景,为了清除移动过程中的方块残留
        for(int j=cur_border.lbound;j<=cur_border.rbound;j++)
            game_area[block_pos.pos_y][block_pos.pos_x+j]=0;
        //没有碰撞则下落一格
        block_pos.pos_y+=1;
        //方块下降一格，拷贝到场景,注意左右边界
        for(int i=0;i<4;i++) //必须是0到4而不是边界索引，考虑到旋转后边界重新计算
            for(int j=cur_border.lbound;j<=cur_border.rbound;j++)
                if(block_pos.pos_y+i<=AREA_ROW-1&&game_area[block_pos.pos_y+i][block_pos.pos_x+j]!=2) //注意场景数组不越界,而且不会擦出稳定的方块
                    game_area[block_pos.pos_y+i][block_pos.pos_x+j]=cur_block[i][j];
        break;
    case LEFT:
        //到左边界或者碰撞不再往左
        if(block_pos.pos_x+cur_border.lbound==0||IsCollide(block_pos.pos_x,block_pos.pos_y,LEFT))
            break;
        //恢复方块右场景,为了清除移动过程中的方块残留
        for(int i=cur_border.ubound;i<=cur_border.dbound;i++)
            game_area[block_pos.pos_y+i][block_pos.pos_x+3]=0;
        block_pos.pos_x-=1;
        //方块左移一格，拷贝到场景
        for(int i=cur_border.ubound;i<=cur_border.dbound;i++)
            for(int j=0;j<4;j++)
                if(block_pos.pos_x+j>=0&&game_area[block_pos.pos_y+i][block_pos.pos_x+j]!=2) //注意场景数组不越界
                    game_area[block_pos.pos_y+i][block_pos.pos_x+j]=cur_block[i][j];
        break;
    case RIGHT:
        if(block_pos.pos_x+cur_border.rbound==AREA_COL-1||IsCollide(block_pos.pos_x,block_pos.pos_y,RIGHT))
            break;
        //恢复方块左场景,为了清除移动过程中的方块残留
        for(int i=cur_border.ubound;i<=cur_border.dbound;i++)
            game_area[block_pos.pos_y+i][block_pos.pos_x]=0;
        block_pos.pos_x+=1;
        //方块右移一格，拷贝到场景
        for(int i=cur_border.ubound;i<=cur_border.dbound;i++)
            for(int j=0;j<4;j++)
                if(block_pos.pos_x+j<=AREA_COL-1&&game_area[block_pos.pos_y+i][block_pos.pos_x+j]!=2) //注意场景数组不越界
                    game_area[block_pos.pos_y+i][block_pos.pos_x+j]=cur_block[i][j];
        break;
    case SPACE: //一次到底
        //一格一格下移，直到不能下移
        while(block_pos.pos_y+cur_border.dbound<AREA_ROW-1&&!IsCollide(block_pos.pos_x,block_pos.pos_y,DOWN))
        {
            //恢复方块上场景,为了清除移动过程中的方块残留
            for(int j=cur_border.lbound;j<=cur_border.rbound;j++)
                game_area[block_pos.pos_y][block_pos.pos_x+j]=0;
            //没有碰撞则下落一格
            block_pos.pos_y+=1;
            //方块下降一格，拷贝到场景,注意左右边界
            for(int i=0;i<4;i++) //必须是0到4
                for(int j=cur_border.lbound;j<=cur_border.rbound;j++)
                    if(block_pos.pos_y+i<=AREA_ROW-1&&game_area[block_pos.pos_y+i][block_pos.pos_x+j]!=2) //注意场景数组不越界,而且不会擦出稳定的方块
                        game_area[block_pos.pos_y+i][block_pos.pos_x+j]=cur_block[i][j];
        }
        ConvertStable(block_pos.pos_x,block_pos.pos_y);
        ResetBlock();
        break;
    default:
        break;
    }
    //处理消行，整个场景上面的行依次下移
    int i=AREA_ROW-1;
    int line_count=0; //记消行数
    while(i>=1)
    {
        bool is_line_full=true;
        for(int j=0;j<AREA_COL;j++)
            if(game_area[i][j]==0)
            {
                is_line_full=false;
                i--;
                break;
            }
        if(is_line_full)
        {
            for(int k=i;k>=1;k--)
                for(int j=0;j<AREA_COL;j++)
                    game_area[k][j]=game_area[k-1][j];
            line_count++;//每次增加消行的行数
        }
    }
    score+=line_count*10; //得分
    //判断游戏是否结束
    for(int j=0;j<AREA_COL;j++)
        if(game_area[0][j]==2) //最顶端也有稳定方块
            GameOver();
}
