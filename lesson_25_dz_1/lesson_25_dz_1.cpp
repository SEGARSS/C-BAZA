﻿//Заполнить массив случайными числами. Генератор уникальных случайных чисел. rand. srand ДЗ #7 - Видео 38. 

/*
Заполнить массив случайными числами Размер массива 10 и случайные числа до 20.
И чтобы числа не повторялись.
*/

#include<iostream>
/*Библиотека ctime для времени. В данном случаи чтоб числа стали случайными, а не псевдо случайными.
Тоесть, случайны числа, благодаря данной библиотеке, случайно прыгают из за подчёта времени, время всегда меняеться,
поэтому и числа меняються, становяться случайными.*/
#include<ctime> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));// Данную функция, дублировать ненужну, её один раз написал и достаточно, как перевод на язык.

	int const SIZE = 10; //Размер константы SEZI
	int arr[SIZE];// Задаём SEZI как велечену массива по условию 10.
	bool alreadyThere; // Переменная означает, уже сдесь (перевод)

	for (int i = 0; i < SIZE; )//ТУт i будет идти до 10, так как задали условие, масив = 10. 
	{
		alreadyThere = false;//Мы предпологаем сразу, что такой переменной нет заранее.
		int newRanomValue = rand() % 20; //Переменная называеть (новое слу. знач) Ограничение на случайные числа до 20.
		for (int j = 0; j < i; j++) // Проверка нашего масива, на наличие уже одинаковых элементо.
		{
			/*ПРоверят, есть ли уже в масиве такая переменная, тоесть, j это
			уже весь масив на момент проверки, и он смотрит с сравнивает(проверяет newRanomValue)
			с полученной новой переменное, присутствует ли такая уже в масиве. с если да, то становиться true, то значит
			мы не должны добавлять её в масив. Поэтому сработает break, ниже мы по циклу не идём, и начинаем цикл
			for заново.
			Если ещё проще. arr[j] == newRanomValue, тоесть, по счётчику j в цикле for, это переберание всех элементов
			всех элментов уже присутствующих в масиве, и сравнивает их сразу с новой, рандомной переменной.
			Если в масиве к примеру попалась 5, и новая случайная переменная тоже 5, то и вышло условие 
			arr[j] == newRanomValue. А значит, ниже по циклам мы не идём, начинаеться break. И прыгаем обратно в самое
			Начало циклов, чтобы получить новую переменную.*/
			if (arr[j] == newRanomValue) 
			{
				alreadyThere = true;
				break;
			}
		}
		/*Когда мы проверяем, что не должно быть равно true, тоесть, выше условие проверило, что такая переменная
		уже присутствует в масиве, и присвоило значение true. И дойдят до цикла где условие не должно быть равно true
		условие цикло отрабатываться не будет, данная переменная не войдёт в масив, и мы прыгни на самое начало цикла,
		для получения новой переменной.*/
		if (alreadyThere!= true)
		{
			arr[i] = newRanomValue;//в нашь масив попадает переменная, сгенерированная случайно.
			/*Мы убрали i++ из цикла for, чтобы счётки не перехидил на поиск нового элемента, если есть уже одинаковое
			число, а поставили выраженние i++, после того как прошла проверка на одинакове число в масиве и добавили
			1.*/
			i++;
		}
	}
	for (int i = 0; i < SIZE; i++) // выводить на терминал данные
	{
		cout << arr[i] << endl;
	}
}
/*Подытожить. Цикл for со значение i, должен крутить условие до 10, это его основная задача, чтоб не уйти в бесконечность.
А цикл for со значением j проверяет уже элементы попавшие в сам масив, проверяет для того, что там не стало одинаковых
элементов.*/