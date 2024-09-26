﻿//Вывод массива. Массивы и циклы. Цикл с массивом. Array c++. C++ для начинающих. Урок #27 - Видео 35.

#include<iostream>
using namespace std;


	/*
	size это мы указываем размер масива. И тут его и можем менять.
	Почему использовали const ? это не изменная значение, тобы мы случайно
	гдето не изменили масив и не заметили где.

	Если мы бы сразу указали размер масива, в место size поставили бы в скобках - [15] к примеру,
	То если у нас будет много циклов, то везде придёться менять в ручную, а так, мы только поменяем 
	size. Тоесть если щас size = 5, то к примеру поменяли на 555, и в каждом цикле где звучит size
	станет значение масивая 555 элементов.
	*/


void main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE1 = 5;
	int arr1[SIZE1]{ 55,3,36,98,74 };

	for (int i = 0; i < SIZE1; i++)
	{
		cout << arr1[i] << endl;

	}
	cout << endl << endl;

	cout << "Пример где два цикла for, а значение меняем только у SIZE2, и видим что в обоих циклах он меняется." << endl;
	const int SIZE2 = 10;
	int arr2[SIZE2];

	cout << endl << endl;

	cout << "Первый цикл for." << endl;

	for (int i = 0; i < SIZE2; i++)
	{
		arr2[i] = i;
	}

	for (int i = 0; i < SIZE2; i++)
	{
		cout << arr2[i] << endl;
	}

	cout << endl << endl;

	cout << "Второй цикл for." << endl;

	for (int i = 0; i < SIZE2; i++)
	{
		arr2[i] = i;
	}

	for (int i = 0; i < SIZE2; i++)
	{
		cout << arr2[i] << endl;
	}	
}