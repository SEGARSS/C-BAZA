﻿//Конкатенация строк что это. Объединение строк.Тип данных string c++ что это. Урок #64 - Видео №77.


#include <iostream>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    string str1 = "Привет";
    string str2 = "Прогер";
    string str3 = "!!!";
    string result;


    result = str1 + " " + str2 + str3 + str1 + " всегда!";
    cout << result << endl;
    cout << "===============" << endl;
    cout << endl;
    
    // Пример на фио.
    cout << "Пример на фио" << endl;
    setlocale(LC_ALL, "ru");
    string s1 = "Рябков";
    string s2 = "Сергей";
    string s3 = "Олегович";
    string result2;


    result2 = "Фамилия " + s1 + " \tИмя " + s2 + " \tОчество " + s3;/*Мы можем всё это указать сразу вот так - 
    cout << "Фамилия " + s1 + " \tИмя " + s2 + " \tОчество " + s3 << endl; компелятор за нас создаст временную
    переменную и выведит данные на экран.*/
    cout << result2 << endl;
}

/*В данном видео материале, сначала был пример с функции strcat, чтоб работать с такими данными как char[255] = "",
но, уже такая фишка не работает, да и не нужна она. Очень работать со строками применив тип класса #include <string>
а затем через тип данных string по примеру объявления переменных, раболать со строчками в разных примерах.*/