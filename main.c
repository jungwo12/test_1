#include<stdio.h>
int main()
{
	char name[10]; 
	int age;
	
	printf("����� �̸��� �Է����ּ��� : ");
	scanf("%s",name);
	
	printf("����� ���̸� �Է��ϼ��� : ");
	scanf("%d",&age);
	
	printf("�ȳ��ϼ��� %s ���̰� %d�� �̱���",name,age);
	
	return 0;
}
