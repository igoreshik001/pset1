#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int minutes;//обьявляем переменную минуты
    int bottles = 12;// обьявляем переменную - бутылки/минуту
    
    //ввод, инициализируем переменную минуты
    do
    {
        printf("minutes:");
        minutes=GetInt();
    }
    while (minutes<=0);
    
    printf("%i\n", minutes**bottles); //вывод, количество использованной воды

}
