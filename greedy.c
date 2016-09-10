#include <stdio.h>
#include <cs50.h>
int main(void) 
{
    float change;// cymma
    
    // монеты
    int a,c25,c10,c5,c1,c;
    c25=25,c10=10,c5=5,c1=1;
    
    // ввод суммы и первод в копейки
    do
    {
        printf("input number:");
        change=(GetFloat()+0.0001)*100;
    }
    while(change<0);
    
    // перевод в целое число
    a=(int)change;
    
    // подсчет монет
    c=(a/c25)+((a%c25)/10)+(((a%c25)%c10)/5)+((((a%c25)%c10)%c5)/c1);
    
    //вывод монет
    printf("%i\n", c);
}
