﻿//Передача параметров в функцию по ссылке. Разница между ссылкой и указателем. Урок #51 - Видео №62.

#include<iostream>
using namespace std;

/*Указатель в варианте foo2 сразу указывает на данные, минуя адрес где расположенны данные, что в принципе
в некоторых а то и во многих удобнее и быстрее.*/

void foo1(int a)
{
	a = 1;
}

void foo2(int &a)
{
	a = 2;
}

void foo3(int *a)
{
	*a = 3;
}

void main()
{
	setlocale(LC_ALL, "Ru");
	int value = 5;
	cout << "value = " << value << endl << endl;
	cout << "==============" << endl;
	foo1(value);
	cout << "foo1 = " << value << endl << endl;
	cout << "==============" << endl;
	foo2(value);
	cout << "foo2 = " << value << endl << endl;
	cout << "==============" << endl;
	foo3(&value);
	cout << "foo3 = " << value << endl << endl;
	cout << "==============" << endl;

}