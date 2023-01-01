#include <iostream>
#include "Calculate.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
	while (true)
	{
        int operation = 0, numOne = 0, numTwo=0;

        cout << "Выберете номер операции:"<<endl;
        cout << "1. Сложение двух чисел (операция под номером 1)" << endl;
        cout << "2. Вычитание двух чисел (операция под номером 2)" << endl;
        cout << "3. Умножение двух чисел (операция под номером 3)" << endl;
        cout << "4. Деление первого числа на второе (операция под номером 4)" << endl;
        cout << "5. Факториал двух чисел (операция под номером 5)" << endl;
        cout << "6. Возведение числа в степень второго числа (операция под номером 6)" << endl;
        cout << "7. Выход из программы (операция под номером 7)" << endl;
        cin >> operation;

        if (operation <=0 || operation >= 7)
        {
            break;
        }

        cout << "Введите два числа: " << endl;
        cin >> numOne;
        cin >> numTwo;
        switch (operation)
        {
        case 1:
            cout << "Сумма двух чисел равна: " << Sum(numOne, numTwo) << endl;
            break;
        case 2:
            cout << "Разница двух чисел равна: " << Subtraction(numOne, numTwo) << endl;
            break;
        case 3:
            cout << "Умножение двух чисел равна: " << Multiplication(numOne, numTwo) << endl;
            break;
        case 4:
            if (numTwo == 0)
            {
                cout << "Второе число не может быть равным нулю!" << endl;
                break;
            }

            cout << "Деление двух чисел равна: " << Division(numOne, numTwo) << endl;
            break;
        case 5:
            cout << "Факториал двух чисел равна: " << Factorial(numOne)<<" "<< Factorial(numTwo) << endl;
            break;
        case 6:
            cout << "Возведение числа в степень равна: " << Power(numOne, numTwo) << endl;
            break;

        default:
            
            break;
        }
	}
}