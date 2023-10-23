# include <stdio.h>

int main(int argc, char *argv[])
{
    //Запросить имя
    printf("Введите ваше имя: ");

    //Получить имя с клавиатуры
    char user_name[50];
    scanf("%s",user_name);

    //Запросить возраст
    printf("Укажите ваш возраст: ");

    //Получение возраста с клавиатуры
    int age;
    scanf("%d",&age);

    //Возраст >= 18 ?
    if(age >= 18) {//Да
	//Вывод приветствия
	printf("Здравствуйте, %s!\n",user_name);
    }else{ //Нет
	//Вывод сообщения
	printf("Простите, но вы слишком молоды.\n");
    }
    
    return 0;
}
