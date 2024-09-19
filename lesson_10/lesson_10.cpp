﻿//If else. Конструкция логического выбора if. Лесенка if - else if. Примеры использования. Урок #12 - Видео №15.
// Напишите программу, проверяющую число, введенное с клавиатуры на четность. Домашнее задание. C++ #2 - Видео №16. 
#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");

    cout << "Пример просто реализации функции if else" << endl;
    cout << "По условию введённое число больше 5" << endl;
    int a;
    cout << "Введите число ";
    cin >> a;

	if (a > 5)
	{
		cout << "Ваше число больше 5-ти" << endl;
	}
	else if (a == 5) /* добавили условие, чтобы сравнивало условие с 5йкой, тоесть если введём число 5, то оно пойдёт в это условие.*/
	{
		cout << "Ваше число равно 5-ти" << endl;
	}
	else
	{
		cout << "Ваше число меньше 5-ти" << endl;
	}

    cout << endl;

    // переменная bool - может принимать два значения в себя (true и false)
    cout << "Пример реализации переменной bool" << endl;
    bool isRain = true; // Указали в переменную что идёт дождь, правда. И на оборот можно

    if (isRain)
    {
        cout << "Идёт дождь, нам нужен зонт!" << endl;
    }
    else
    {
        cout << "Дождя нет, зон не нужен!" << endl;
    }

    cout << endl;

    cout << "Программа, проверяет число, введенное с клавиатуры на четность." << endl;
    cout << "Введите число ";
    int che;
    cin >> che;

    if (che % 2 == 0) /*Если в данной строчки вместо знака (%) поставить знак (/), тогда считает не правильно.
        Это скорей всего связанно, если прописываем в условиях. Также, в данном примере, можно и условие написать
        (che % 2).
        */
    {
        cout << "Ведённое число - " << che << " Чётное" << endl;
    }
    else
    {
        cout << "Введённое число - " << che << " Не чётное" << endl;
    }
}

