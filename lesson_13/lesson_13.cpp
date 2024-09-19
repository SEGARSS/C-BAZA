// Цикл do while.Что это.Что делает.Пример.Синтаксис. Урок #15 - Видео №20.

#include<iostream>
using namespace std;

//Цикл do while

void main()
{
	setlocale(LC_ALL, "ru");

	int a = 0;

	cout << "Пример когда цикл while" << endl;
	while (a < 10) 
	{
		cout << "Переменная а = " << a << endl;
		a++;
	}

	cout << endl;

	// Суть того, что данный цикл do while покажет 10 при данном уловии b < 10. 
	int b = 10;

	cout << "Пример когда цикл do while" << endl;
	do
	{
		cout << "Переменная b = " << b << endl;
		b++;
	}while (b < 10);	
}
