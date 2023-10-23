# include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Сколько раз вас поприветствовать, дорогой товарищ?");
    int N;
    scanf("%d",&N);

    int i;
    for(i=1;i<=N;i++) {
	printf("Здравствуйте в %d раз!\n",i);
    }

    return 0;
}
