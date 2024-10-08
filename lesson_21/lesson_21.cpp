﻿// Что такое массив. Примеры. Теория. Array. Одномерный массив. Синтаксис. C++. Урок #25. Видео - 33.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	/*Масив может только из адних данных, тоесть либо цело численный int или дробный dooble и так далее.
	Масив не может состоять и из int и из dooble, только чтото одно.*/

	int arr[4] = 
	{1,2,10,4}; // объявляем масив.

	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " "; // Если вместо arr[i] написать просто i, то мы получим на экран индесы массива а не данные в этих индексах.
	}

	cout << endl;

	// Залаживыаем в масив данные.
	/*Масив, не важно из скольки элементов состоит, в данном примере из 4х элементов. Но, индекс масива а именно
	его номерация в нутри начинаеться с нуля. Тобиж, 4 элемента масива это = 0,1,2,3 = 4 элемента.
	И под каждый элемент мы присвоили значение. В каком порядке объявлять элементы масива (а точнее его индексы)
	не имеет значение. Хоть первый будет arr[3] = 1, хоть последний, разницы нет.*/
	arr[0] = 5;
	arr[1] = 7; 
	arr[2] = 10;
	arr[3] = 1;

	/*Если мы попросим компелятор выдать нам элемент масива, который мы ничего не присваивали и не объявлял,
	к примеру cout << arr[10] << endl; выдаст мусор(рандомное и не понеятное число)*/

	cout << arr[3] << endl; // Обращение к индексу, чтоб посмотреть что там лежит.
}