﻿//Что такое ascii символы. ascii что это такое? Таблица ascii c++. C ++ Для начинающих. Урок #62 - Видео №74.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << sizeof(char) << endl;
	
	for (int i = 0; i <= 255; i++)
	{
		cout << "code = " << i << "\t" << "char = " << (char)i << endl;
	}
}
/*Суть урока в том что мы можем посмотреть что может хранить в себе тип данных char.
А именно вывести его в таблицу ascii, где нужно просто понимать что после 127 строчки в таблице, храняться
символы национальных регионнов. А до 127 строчки, цимволы англиские.*/