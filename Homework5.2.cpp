#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	int mas[10] = { 1,2,3,4,5,6,7,8,9,10 };

	std::cout << "Массив:";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << mas[i] << " ";
	}
	std::cout << std::endl;
    
    int min = mas[0];
    int max = mas[0];

     for (int i = 1; i < 10; i++) 
     {
        if (mas[i] < min)
        {
            min = mas[i];
        }
        if (mas[i] > max)
        {
            max = mas[i];
        }
     }

    std::cout << "Минимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;

    return 0;
}