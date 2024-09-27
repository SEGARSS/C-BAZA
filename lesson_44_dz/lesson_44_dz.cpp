﻿//Напишите функцию, меняющую местами значения переменных с помощью указателей. С++ для начинающих ДЗ#9 - Видео №60
//Пересмотри урок 49, в конце объяснение домашки.

/*
Напишите функцию, 
меняющую местами значения переменных с помощью указателей.
*/

#include<iostream>
using namespace std;

void Swap(int *pa, int *pb)
{
	/*Чтобы не потерять данные из pa мы её пересохранили в переменной temp. 
	После этого спокойно затираем данные в ра подсунув туда данные из pb (*pa = *pb)
	и помещаем также потом в переменную temp.
	В итогде получим рузультат, где сначада выдаст temp = *pa; а потом *pb = temp;
	Таким образом поменяли местами.*/
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void main()
{
	int var1 = 5, var2 = 6;
	cout << "var1: - " << var1 << endl;
	cout << "var2: - " << var2 << endl;
	cout << "====================" << endl;
	
	Swap(&var1, &var2);
	cout << "var1: - " << var1 << endl;
	cout << "var2: - " << var2 << endl;
	cout << "====================" << endl;
}