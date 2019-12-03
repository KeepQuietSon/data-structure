//队列先进先出
//类似于栈
//链式实现
#include <stdio.h>
#include "queue.h"

//创建新节点
QUE* createNewQueNode()
{
  QUE *newNode = (QUE*)malloc(sizeof(QUE));
  if(newNode != NULL)
  {
    newNode->nextPoint = NULL;
    return newNode;
  }
  else{
    //申请失败
    printf("newNode malloc failed!");
    //这里可以添加异常处理
  }
}

//尾插法
void addQue(QUE* newNode)
{
  QUE* createNewNode = createNewNode();

  while (newNode->nextPoint != NULL) {
    /* code */
    newNode = newNode->nextPoint;
  }
  newNode->nextPoint = createNewNode;
}

 //删除节点
 QUE* delNode(QUE *NodeHead) {
   /*队列先进先出
   即删除首节点*/
   QUE *Node = NodeHead->nextPoint;
   NodeHead->nextPoint =NULL;
   free(NodeHead);
   return Node; 
 }
