//链表的写法
//链表需要实现的功能
//1、申请内存空间     并且初始化
//2、链表的增删改查排；
//3、三种链表的书写    单链表  、   双链表    、双向循环链表


//一个完整的链表必须要存在的函数
//申请新节点空间：  以单链表为例
typedef struct node
{
  int data;
  struct node *pNext;
}Node;

Node* createNewNode()
{
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->pNext = NULL;
  return newNode;
}
//销毁链表函数     在不使用时清理内存让出空间
