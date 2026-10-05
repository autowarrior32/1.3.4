#include <iostream>
#include <string>
#include <windows.h>

void SimpleText(void);

std::string verb(int inp);


int one{}, two{};


/* Функция переводит число в слова 
* verb1 - 1
* verb2 - 10
* verb3 - 100
* verb4 - -
*/
std::string verb (int inp)
{
	std::string	num[] = { "","один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
	std::string	num0[] = { "десять","одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "патьнядцать", "шестьнадцать", "семьнадцать", "восемьнадцать", "девятьнадцать" };
	std::string	num1[] = { "", "","двадцать", "тридцать", "сорок", "петьдесят", "шестьдесять", "семьдесят", "восемьдесят", "девяносто" };
	std::string	num3[] = { "минус " };

	std::string out{""};

	if (inp == 0)
	{
		return "нуль";
	}

	if (inp == 100)
	{
		return "сто";
	}

	if (inp == -100)
	{
		return "минус сто";
	}

	if (inp < 0)
	{
		out += num3[0];
		inp = -inp;
	}

	if (inp >10 && inp <20) 
	{
		out += num0[inp - 10];
	}
	else 
	{
		int out10 = inp / 10;
		int out1 = inp % 10;

		if (out10 > 0)
		{
			out += num1[out10];

			if (out1 > 0)
			{
				out += " ";
			}
		}

		if (out1 > 0) 
		{
			out += num[out1];
		
		}

	}

	return (out);
}



int main(int argc, char** argv)
{

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);


	std::cout << "Введите целое число: ";
	std::cin >> one;
	std::cout << std::endl;
	std::cout << "Введите целое число: ";
	std::cin >> two;
	std::cout << std::endl;

	if (((one < -100) || (one > 100)) || ((two < -100) || (two > 100)))
	{
		std::cout << "Ошибка! Одно из чисел вне диапазона!";
	}

	if (one > two)
	{
		std::cout << verb(one) << " больше " << verb(two);
	
	}
	else if (one == two) 
	{
		std::cout << verb(one) << " равно " << verb(two);
	}
	else {
		std::cout << verb(one) << " мельше " << verb(two);
	}

}