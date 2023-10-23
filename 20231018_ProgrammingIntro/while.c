# include <stdio.h>

int main(int argc, char *argv[])
{
    printf("While с предусловием:\n");
    int i=0;
    while(i<10){
	i+=3;
	printf("%d-e повторение (итерация)\n",i);
    }
    
    
    printf("While с постусловием:\n");
    i=0;
    do{
	i+=3;
	printf("%d-e повторение (итерация)\n",i);
    }while(i<10);

    
    return 0;
}
