﻿// Switch. Что это. Пример. Синтаксис. Оператор множественного выбора. Урок #13 - Видео №17.

#include<iostream>
using namespace std;

// операторы множественного выбора switch

void main()
{
	setlocale(LC_ALL, "Rus");

	int a;
	cin >> a;

	switch (a) // сюда ниже мы помещаем варианты case.
	{
	case 1:
	{ /* Данные скобка{} - посути не нужны,
	  это для того, чтоб просто не запутались,
	  но их в условиях case можно не ставить. */
		cout << "Вы ввели 1" << endl;
	}
	break;
	case 2:
	{
		cout << "Вы ввели 2" << endl;
	}
	break;
	default:
		cout << "Я незнаю этого числа!" << endl;
		/* Данный блок в принципе не нужен и всёже, мы указали два case1,2 и если введём при запуске число 3
		то паападём в блок default , так как case 3 мы не указали. */
		break;
		/* Он ставить для того,
		что стопорнуть.Если условие выполнилось,
		чтоб он дальше никуда не шёл и не проверял другие условия.*/
	}
}
