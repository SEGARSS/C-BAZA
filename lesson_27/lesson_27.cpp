﻿//Двумерный массив инициализация.Двумерный массив индексы.Синтаксис.Пример.Урок #31 - Видео №41. 

#include<iostream>
#include<ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	/*Метод объявления массива. С помощью константы(неизменная велечина). Где - const int STROKI = 3; - это
	количество строк в массиве, const int KOLONKI = 4; количество колонок. И затем объявляем массив вот так -
	int arr[STROKI][KOLONKI]; Эта запись правильная, и при случаи если у нас много циклов, 
	то не меняем их в каждом, а только в условиях STROKI и KOLONKI.*/

	/*const int STROKI = 3;
	const int KOLONKI = 4;

	int arr[STROKI][KOLONKI];*/

	/*Назначаем данные массиву, к одному из его элементу. ПО данной записи arr[2][3] = 491648; - в 3й строчке,
	и 4той колонке, у нас будет теперь лежать число 491648.*/

	/*Не вкоем случаи, не выходить за пределы массива. К примеру масив нашь 3 строки и 4 столбца, а 
	мы решили присвоить arr[11][11] = 491648; ХАНА ВСЕМУ, и можем не найти ошибку, и программа, сломаеться.*/
	
	/*arr[2][3] = 491648;
	arr[1][1] = 25;

	cout << arr[2][3] << endl;
	cout << arr[1][1] << endl;*/

	const int STROKI = 3;
	const int KOLONKI = 4;

	/*Про заполнениями данных массива. Если уже запись сделать хотябы так - int arr[STROKI][KOLONKI]{}; 
	то благодаря скобкам - {} - масив заполниться одними нулями. */

	/*Заполняем данные массива, присваиваем. Ниже пример, удобный, тобижь три строчки, по 4 столбика.
	Можно заполнить и вот так - int arr[STROKI][KOLONKI]{{418,68,16,5},{45,6,16,98},{28,8,160,87},}; 
	как по мне, в строчку, можно запутаться, и не так понятно, как запись ниже, когда в столбик.*/
	int arr[STROKI][KOLONKI]
	{
		{418,68,16,5},
		{45,6,16,98},
		{28,8,160,87},
	};


}