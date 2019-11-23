//数组实现
#ifndef STRACK_H
#define  STRACK_H

#define MAXSIZE 10
typedef struct
{
    //数组
    int strack[MAXSIZE];
    int topPoint=-1;//栈顶指针位置
}strackArr;

//判断栈空
bool isEmpty(strackArr &Str);

//判断栈满
bool isFull(strackArr &Str);


#endif
