# include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b;
    char answer;
    do {
	printf("Введите a:");
	scanf("%d",&a);
	printf("Введите b:");
	scanf("%d",&b);
	printf("a+b=%d\n",a+b);
	printf("Продолжить работу с программой? (y/n)");__fpurge(stdin);
	scanf("%c",&answer);
    }while(answer == 'y');

    return 0;
}
