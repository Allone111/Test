#include"pcpy.h"


int check_arg(const char* SFile,int arg_num,int pronum)
{ 
	//源文件是否存在？
	if(access(SFile,F_OK)!=0)
	{
		perror("Check_Arg error");
		exit(-1);
	}
	//参数数量是否满足
	if(arg_num<3)
	{
		printf("Check_Arg error:参数数量异常！");
		exit(-1);
	}
        //进程数量是否溢出
	if(pronum <= 0 || pronum >= 100 )
	{
		printf("Check_Arg error:进程数量要大于0 ，小于100.\n");

	}
	return 0;
}








