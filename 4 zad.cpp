// 4 zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <clocale>
#include <Windows.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s[50], s1[50], s2[50];
    s[0] = 0;
    printf("Введите первую строку: ");
    gets_s(s1);
    printf("Введите вторую строку: ");
    gets_s(s2);
    strcpy_s(s, s1);
    strcat_s(s, s2);
    printf("Результат 1: ");
    puts(s);
    strcpy_s(s, s2);
    strcat_s(s, s1);
    printf("Результат 2: ");
    puts(s);
    return 0;
}

