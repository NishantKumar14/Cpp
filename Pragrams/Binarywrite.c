#include <stdio.h>
void main()
{ 
	int i,ch,chr,cnt=0;
	char str[]={"Hi..Welcome to the world of C programming"};
	FILE *fp=fopen("D:\\binary.bin","wb+");
	if(fp!=NULL) 
	{
	for(i=0;str[i]!='\0';i++)
	fputc(str[i],fp); 
	}
	else
	printf("Error !!! Opening file");
	
}
