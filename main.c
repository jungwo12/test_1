#include<stdio.h>
int main()
{
	char name[10]; 
	int age;
	
	printf("당신의 이름을 입력해주세요 : ");
	scanf("%s",name);
	
	printf("당신의 나이를 입력하세요 : ");
	scanf("%d",&age);
	
	printf("안녕하세요 %s 나이가 %d살 이군요",name,age);
	
	return 0;
}
