#include <stdio.h>
#include <cs50.h>
int main(void) 
{
    int column;// столбцы
    int stairs = 2;// ступени
    int offset; //смещение ступеней
    
    // ввод пользователя, количество столбцов
    do
    {
        printf("input number from 1 to 23\n");
        column=GetInt();
    }
    while (column<0 || column>23);
    
    offset = column-1;// инициализируем количество пробелов на смещение
    
    // цикл столбцов
    for (int i=0; i<column; i++)
    {
        //цикл вывода пробелов
        for (int k=0; k<offset; k++)
            printf(" ");
            
        //цикл вывода ступеней
        for (int j=0; j<stairs; j++)
            printf("#");
            
        stairs++;// + ступень
        offset--;// - пробел
        printf("\n");// снос строки
        
    }
    
}
