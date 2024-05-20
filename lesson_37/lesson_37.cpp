﻿//Шаблоны функций. Шаблонные функции c++. template typename. template class. Урок #41 - Видео №51

#include<iostream>
using namespace std;

/*Пример шаблона. Команда - template вызов шаблон, затем указываем сам шаблон - <typename T>.
В данном шаблоне typename T - уже заложена работа сразу с переменными int и double, и как в прошлом
уроке, не обезательно дублировать функцию sum (её написание объявление) c указаниме работы с обоими
переменными. 
Такая запись - template <typename T1, typename T2> даёт избежать ошибки, 
вот в такой строчке - cout << sum(5, 4.6) << endl; - тоесть, можно сложить и целу и дробную часть.
Но, выдас всёровно целую часть, почему? потомучто первым стоит typename T1. Если мы напишем
T2 sum(T1 a, T2 b) вместо T1 sum(T1 a, T2 b) - то на выходим получим дробную часть.*/

//template <typename T1, typename T2>
//T1 sum(T1 a, T2 b)
//{
//	return a + b;
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Ru");
//
//	cout << sum(5, 10) << endl;
//	cout << sum(5, 4.6) << endl;
//
//}

/*Реализация через void когда ничего не возвращаем.
Посути тоже самое, просто ещё можно увидить что ему пофиг, шаблону что возвращать, хоть слово.
ТАкже такая заметка, шаблон typename и шаблон class работаю одинаково. ПРосто typename это из языка (С) пришол,
class это уже вывод из С++. Без разницы что использовать. Но, ненадо их смешивать.
Вот так - template <typename T1, class T2> - писать ненадо, выбрать нужно, чтото одно, одну запись и использовать.*/

template <typename T1, typename T2>
void sum(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}

void main()
{
	setlocale(LC_ALL, "Ru");
	sum(2, 4.5);
	sum(2, "параметр");

}