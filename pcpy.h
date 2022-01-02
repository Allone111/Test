#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>



int block(const char* SFile,int Pronum);
int check_arg(const char* SFile,int arg_num,int Pronum);
int procreate(const char* SFile,const char* DFile,int Pronum,int block);

