//栈--遵循先进后出原则
//数组实现
#include "stdio.h"
#include "strack.h"

bool isEmpty(strackArr &Str)
{
  if(Str.topPoint == -1)
  {
    return true;
  }
  return false;
}

bool isFull(strackArr &Str)
{
  if(Str.topPoint == MAXSIZE)
  {
    return true;
  }
  return false;
}

//压栈
int push(strackArr &Str,int data)
{
  bool judgeStrack = isFull();
  if(judgeStrack)
  {
    return 0;
  }
  Str.strack[++Str.topPoint] = data;
  return data;
}

//出栈
int pop(strackArr &Str)
{
  bool judgeStrack = isEmpty();
  if(judgeStrack)
  {
    return 0;
  }
  int data = Str.strack[Str.topPoint];
  printf("栈顶元素为%d",data);
  Str.strack[Str.topPoint] = 0;
  Str.topPoint--;
  return data;
}
