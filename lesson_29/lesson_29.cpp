﻿// Функции c++ примеры. Синтаксис. Объявление, реализация функции. Параметры, аргументы. C++ #33 - Видео №43.

#include<iostream>
using namespace std;

//---------------------------------------------------------------------------------------------------------------
/*
Мы можем создать, любую функцию, и потом везде её использовать. Название тоже можем придумать,
а именно void Pechat() или void NaPechat() и так далее.
Фукции обезательно объявлять в начале самом, ну или там, где хотим чтоб ниже идущие циклы её
могли использовать.
*/
void Pechat() 
{
	cout << "Я функция, меня вызвали!" << endl;
}
//---------------------------------------------------------------------------------------------------------------
/*
Создали функцию, для сложения сумм и затем для вывода этой суммы обратно. Самое главное,
когда будем запрашивать функцию в цикле, в - () скобках указываем то что требуеться. Мы функцию создали указав в ()
(int a, int b) что означает, что мы хотим получить сюда две переменные, а в теле функции, указали что она с ними
должна делать.
*/
int sum(int a, int b) 
{
	int result;
	result = a + b; // оптимизация кода, вместо трёх строк, одна такая - return a +b;
	return result;/*return - значит возвращает, если в теле функции это не прописать, то функция посчитает,
	но не выдаст результат.*/
}
//---------------------------------------------------------------------------------------------------------------
void main()/*Проверяем как работает функция для подсчёта чисел.*/
{
	setlocale(LC_ALL, "ru");

	cout << "Пример вызова функции Pechat:" << endl;
	Pechat();
	Pechat();// если просто один раз запросить функцию. Если пропишем ещё одну ниже, уже два раза выдаст её терминал.
	for (int i = 0; i < 20; i++) // 20 раз вызовим функцию Pechat.
		Pechat();

	cout << endl;

	cout << "Пример вызова функции sum:" << endl;

	int c; // Объявили переменную.
	c = sum(2, 5); // один способ подсчёта и вызова функции и указываем данные.
	cout << "cout << c << endl; - " << c << endl; // выводим результат в таком виде, а ниже вариант другой записи а суть одна и таже.
	cout << "cout << sum(2, 5) << endl; - " << sum(2, 5) << endl;//2 вар.

	cout << endl;

	cout << "Второй метот как можно прописывать коды в данных условиях.:" << endl;
	int v; // Переменная, куда положем данне сложения.
	int q = 11;
	int w = 12;
	v = sum(q, w); //Спомощью нашей объявленной функции sum слаживаем значения (просто вместо цифр, подставили переменные.
	cout << "cout << v << endl; - " << v << endl; // И один и второй вариант их вывода.
	cout << "cout << sum(q, w) << endl; - " << sum(q, w) << endl;
	/* 
	Если в таком варианте, то - v = sum(q, w) строчка будет ненужна.Сразу ложем значения
	в sum и выводем в терминал.
	*/
}
//---------------------------------------------------------------------------------------------------------------