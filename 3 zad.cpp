// 3 zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	 
	setlocale(0, "");
	char s[] = {"проверка"};
	puts(s);
	const char* ptr_s; 
	ptr_s = "Контрольная строка";
	putchar(*ptr_s + 3);
	putchar('\n');
	puts(ptr_s + 11);

}


