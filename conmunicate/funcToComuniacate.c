#include <stdio.h>
//进程间通信的方式：
/*
1、管道                              使用方式
           -------匿名管道  pipe   int pipe(int fd[2]);    // 返回值：若成功返回0，失败返回-1
           pipe(fd);//fd为文件描述符
           ------命名管道  FIFO    int mkfifo(const char *pathname, mode_t mode);
           fd = open(“FIFO”，mode)
2、消息队列：
3、信号量：
4、共享内存：

*/
