﻿//Условный тернарный оператор что это. Как работает. Как использовать. C ++ Для начинающих. Урок #69 - Видео 82

#include<iostream>
using namespace std;

//-------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");

	int a = 5;
	
	cout << "Введите значение переменной (а): ";
	cin >> a;

	cout << "================================================================" << endl;
	cout << "Вариант записи цикла if else." << endl;

	if (a < 10)
	{
		cout << "переменная - (a) = " << a << ", она менше 10" << endl;
	}
	else if(a > 10)
	{
		cout << "переменная - (a) = " << a << " она больше 10" << endl;
	}
	else
	{
		cout << "переменная - (a) = " << a << " она равна 10" << endl;
	}

	cout << "================================================================" << endl;
	cout << "Другой вариант записи окнструкции if else." << endl;
	cout << "Таойже функцианал через использования знаков (?)(:)" << endl;
	a < 10 ? cout << "переменная - (a) меньше 10." << endl : (a > 10 ? cout << "переменная - (a) больше 10." << endl : cout << "переменная - (a) равна 10." << endl);
	cout << "================================================================" << endl;
	cout << "Бобавляем условие, что если (а) меньше 10, то прибавляем +5, если меньше то отнимаем 4, а если равна 10 то выводим сообщение." << endl;
	a < 10 ? cout << "переменная - (a) = " << a << " она меньше 10 " << ", делаем выражение " << a << " + 5 = " << a + 5 << endl :
	a > 10 ? cout << "переменная - (a) = " << a << " она больше 10 " << ", делаем выражение " << a << " - 4 = " << a - 4 << endl :
	cout << "переменная - (a) = " << a << " она равна 10" << endl;
	cout << "================================================================" << endl;
	cout << "Приминения другова примера." << endl;

	cout << "Введите логи и пароль через пробел: ";
	string login;
	string pass;

	cin >> login >> pass;

	cout << ( (login == "user1" && pass == "1234") ? "good" : "bad") << endl;

	return 0;
}
//-------------------------------------------------------------------------------------------------------
/*
Тернарный аператор, в данном уроке разбирает упрощённый вариант работы с if else.
Тобижь, мы можем рабоать через знак (?): а именно, указываем любое выражение присваивая ему знак (?) - (a < 10)?
а после знака и далее если это так, выводим то что требуеться, и если же это оказываеться ложью, то 
прописываем знак (:) и указываем что в таком случаи выводить. Если грубо if заменяем на знак (?), а else заменяем на (:).
*/