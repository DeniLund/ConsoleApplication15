// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>	

int main()
{
	int a = 0;
    const int b = 20;
    setlocale(LC_CTYPE, "rus");

    std::cout << "Четные:";
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)

            std::cout << i << '\n';
    }
    std::cout << '\n';
    std::cout << "Нечетные:";
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
            std::cout << i << '\n';
    }
 
}