#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

    int experiencePoints;
    std::cout << "Введите количество очков опыта: ";
    std::cin >> experiencePoints;
    std::cout << "-----Мы считаем-----" << std::endl;

    int level = 1;
    if (experiencePoints >= 5000)
    {
        level += 3;
    }
    else if (experiencePoints >= 2500)
    {
        level += 2;
    }
    else if (experiencePoints >= 1000)
    {
        level += 1;
    }

    cout << "Ваш уровень: " << level << endl;
}