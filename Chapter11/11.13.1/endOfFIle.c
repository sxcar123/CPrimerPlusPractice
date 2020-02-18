//endOfFile.c查看标准输出（stdout）中的EOF和EOF的ascii码
#include<stdio.h>
int main(void)
{
	char endOfFile;
	endOfFile=getchar();//键盘上按下ctrl+D（表示标准输入（stdin）中的EOF字符）
	printf("以字符形式输出EOF:%c\nEOF的ascii码:%d",endOfFile,endOfFile);
	return 0;
}
