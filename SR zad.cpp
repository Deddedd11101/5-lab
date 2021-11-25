// SR zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <clocale>
#include <Windows.h>
char l (char x[]);
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char mass[50];
    gets_s(mass);
    l(mass);
}
/*char l(char x[])
{
    int i;
    for (i = 0; i < 50; i++)
    {
        if (x[i] == '?')
        {
            x[i] = '!';
        }
    }
    return  puts(x);
}*/
/*char l(char x[])
{
    int i, n;
    for (i = 0; i < 50; i++)
    {
        if (x[i] == '-') {
             x[i] = ' ';
        }
            
        if (x[i] == '&') 
        {
            x[i] = '&';
            std::cout << "&";
         }
            
    }
    return  puts(x);
}*/
/*char l(char x[])
{
    int i;
    for (i = 0; i <= 50; i++)
    {
        if ((x[i] >= 97) && (x[i] <= 122))
        {
            x[i] = x[i];
        }
        else {
            x[i] = ' ';
        }
    }
    return puts(x);
}*/
/*char  l(char x[])
{
    int i;
    for (i = 0; i <= 50; i++)
    {
        if ((x[i] >= 97) && (x[i] <= 122))
        {
            x[i] = x[i] - 32;
        }
    }
    return  puts(x);
}*/
/*char l(char x[])
{
    int i, n = 0;
    for (i = 0; i < sizeof(x); i++)
    {
        if ((x[i] == 'c') && (x[i + 1] == 'h') && (x[i + 2] == 'i') && (x[i + 3] == 'l') && (x[i + 4] == 'd'))
        {
            x[i + 5] = 'r';
            x[i + 6] = 'e';
            x[i + 7] = 'n';
        }
    }
    return  puts(x);
}*/


