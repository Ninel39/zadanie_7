// zadanie_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int num;
        cout << "Введите число";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            cout << i << endl;
    }
}