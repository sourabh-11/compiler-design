#include<stdio.h>

#include<string.h>

int main()
{   int flag  = 0;
	char keyword[32][10]={"auto","char","for"};
	printf("enter the string you want to chek");
	char str[10];
	scanf("%d",&str);

	for(int i=0;i<32;i++){
		if(strcmp(keyword[i],str)==0)
		flag = 1;
	}
	if(flag ==1){
		printf("its keyword");
	}
	else
	printf("nothing");
	return 0;
}
