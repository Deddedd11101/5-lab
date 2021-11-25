// 2 zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<stdio.h>
#include <iostream>
#include <string.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_CTYPE, "");
	char s[100];
	char s1[100];
	char s2[100];
	char s3[100];
	puts("Введите 1 строку символов:\n");
	gets_s(s);
	puts("Введите 2 строку символов:\n");
	gets_s(s1);
	puts("Введите 3 строку символов:\n");
	gets_s(s2);
	puts("Введите 4 строку символов:\n");
	gets_s(s3);
	puts("\nБыла введена строка:");

	puts(s);
	puts(s1);
	puts(s2);
	puts(s3);
	return 0;
}


