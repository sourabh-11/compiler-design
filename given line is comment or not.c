#include<stdio.h>
int main(){
	int flag;
	char com[30];
	gets(com);
	if(com[0]=='/')
	{
	flag = 1;
	}
	else if(com[1] == '*')
	{
		for(int i =2;i<30;i++){
			if(com[i] == '*'&&com(i+1)=='/'){
				flag =2;break;
			
		}
	}
}
    if(flag == 1){
    	printf("single line comment ");
	}
	else if(flag==2){
		printf("multiple comment");
	}
	else
	print("not comment");
	return 0;
}
