#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    int mas[10] = {10,9,8,7,6,5,4,3,2,1};

    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < 10; ++i)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;

    for (int j = 0; j < 10 - 1; j++)
    {
        for (int i = 9; i > j; i--) 
        {
            if (mas[i] < mas[i - 1]) 
            {
                int temp = mas[i];
                mas[i] = mas[i - 1];
                mas[i - 1] = temp;
            }
        }
    }
    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < 10; i++) {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
