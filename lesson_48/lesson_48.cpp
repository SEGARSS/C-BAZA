﻿//new c++ что это. new c++ пример. c++ new delete. delete c++ что это. delete c++ пример. Урок #53 - Видео №65.

#include<iostream>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int *pa = new int;
	*pa = 10;
	cout << *pa << endl;
	delete pa;
}

/*Взять за правила. Всегда после себя подчищать оперативную память командой делит если мы гдето создали данные
и указываем туда ссылкой. По сути это оптимизация приложения, проекта, чтоб работал быстрей, не засорял систему
и отработав тот или иной цикл, подчищал за собой.*/