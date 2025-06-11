#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    int mas[3][6] =
    {
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
    };

    std::cout << "Массив:" << std::endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 6; ++j)
        std::cout << mas[i][j] << " ";
        std::cout << std::endl;
    }
    int min = mas[0][0];
    int max = mas[0][0];
    int minIndR = 0, minIndC = 0;
    int maxIndR = 0, maxIndC = 0;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            if (mas[i][j] < min) 
            {
                min = mas[i][j];
                minIndR = i;
                minIndC = j;
            }
            if (mas[i][j] > max) 
            {
                max = mas[i][j];
                maxIndR = i;
                maxIndC = j;
            }
        }
    }

    std::cout << "Индекс минимального элемента: " << minIndR << " " << minIndC << std::endl;
    std::cout << "Индекс максимального элемента: " << maxIndR << " " << maxIndC << std::endl;

    return 0;
}