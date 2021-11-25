// 5 zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <string.h>


int main(void)
{ 
    int MAX =10;

    char str[10];
    fgets(str, MAX-1, stdin);
    printf("%d\n", strlen(str));
    puts(str);
}
