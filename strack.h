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

//出栈
int pop(strackArr &Str);

//压栈
int push(strackArr &Str,int data);

#endif
/*
链表实现类似于数组实现---若要达成类似于链表实现栈的话需要实现数组空间扩展
1、链表无判满
2、链表判空
3、入栈需要新增节点
4、出栈则需找到pNext->NULL的节点
*/
