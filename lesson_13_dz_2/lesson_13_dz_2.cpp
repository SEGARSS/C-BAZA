﻿//Работа с циклами. Примеры. Цикл Do while. Домашнее задание #5 - Видео №22.

/*Написать программу, 
которая находит сумму всех целых нечетных чисел в диапазоне, 
указанном пользователе.*/


#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	// Если не объявить sum = 0, выдаст ошибку. Да и логично представить из ходя из цикла, что sum обязана в данном решении быть 0.
	int sum = 0;

	// Один из вариантов объявления диапазона чисел, это две переменные объявить но не назначить им значение.
	int nachDiz, consDiz;
	cout << "Введите диапазон чисел" << endl;
	cout << "от - ";
	cin >> nachDiz;
	cout << "до - ";
	cin >> consDiz;
	
	do
	{
		/*Условие не просто, какбы. Когда будет известенн деапазон чисел, который мы введём или ктото другой,
		то начнёт работать данный цикл, он в начеле с помощь if (nachDiz%2!=0) строки, 
		проверит на целостность число и на нечётность. Если условие сойдёть, он сумму данную положит в переменную 
		sum. Пример, диапазон 5 до 10. - 5 целое целое, далее он ложит её в sum строка - sum += nachDiz; и
		прибавит единицу по строчке sum += nachDiz;. Цикол повториться, так как уже 6 меньше 10, 
		цикл пойдёт опять на проверку к строчке if (nachDiz%2!=0) и начнёт уже число 6 проверять.
		в строчку sum += nachDiz; ложат числа не чётные и цельные, остальные не ложит, тобижь проверив диапазон
		от 5 до 10, он в строчку sum += nachDiz положит 5,7,9(Так как они цельные и не чётные)
		потом их сумму сложит и выдаст результат 21*/

		if (nachDiz % 2 != 0)
		{
			sum += nachDiz;
		}
		nachDiz++;
	} while (nachDiz < consDiz);

	cout << "сумма всех нечётных чисел = " << sum;
}
