#include <stdio.h>

int main()
{
	char name[20];
	char colour[20];
	
	printf("What is you name?");
	scanf("%s",name);
	printf("What is your favorite colour?");
	scanf("%s",colour);
	printf("%s's favorite colour is %s\n",name,colour);
	getchar();
	return 0;
}