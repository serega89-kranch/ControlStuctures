#include <iostream>

int main()

{
	setlocale(LC_ALL, "");
	int rows;
	std::cout << "введите количество строк в Паскале:";
	std::cin >> rows;
	
	for (int i = 0; i < rows; i++)
	{
		int val = 1;
		std::cout.width(rows - i);
		for (int x = 0; x <= i; x++)
		{
			std::cout << val<< " ";
			val = val * (i - x) / (x + 1);
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
