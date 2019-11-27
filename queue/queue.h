#ifndef QUEUE_H
#define  QUEUE_H

#define MAXSIZE 10

typedef struct queue {
  int data;
  struct queue *nextPoint;//指向下一个节点
}QUE;




#endif
