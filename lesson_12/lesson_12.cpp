﻿//Циклы. Цикл while. Что это. Что делает. Пример. Синтаксис. Урок #14 - Видео №19. 


#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	/* К примеру данную надпись - cout << "Текс вывелся на экран" << endl;
	надо вывести 100 раз, нам её вводить руками? нет! Вот для этого и нужны циклы */

	int a = 0;

	while (a < 10) /*Так как тут цифра 10, то и выведиться сообщение ниже прописанное 10 раз, начина с 0.*/
	{
		cout << "Переменная а = " << a << endl;
		a++;
	}
}