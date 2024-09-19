//Константы. Ключевое слово const. C++ для начинающих. Урок #6 - Видео №8.

#include<iostream>
using namespace std;

// тип данных переменная;

void main()
{
	setlocale(LC_ALL, "Rus");

	/* Объявление константы, желательно прописывать с большой буквы,
	чтобы мы точно понимали для себя что это константа и она не должна меняться */
	const int COUNT_DAYS_IN_WEEK1 = 7; 
	cout << COUNT_DAYS_IN_WEEK1 <<"\n";


	const int COUNT_DAYS_IN_WEEK = 7;
	/* Новый вид константы const char, которой мы можем указать постоянный символ \n,
	что даст в будущем постоянный отступ на новую строку, тоже самое и с TAB где TAB отступ*/
	const char NEW_LINE = '\n';
	const char TAB = '\t';
	cout << TAB << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;
}