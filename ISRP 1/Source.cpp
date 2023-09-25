#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int Var1, Var2;
	int result;

	cout << "Введите два числа " << endl;
	cout << "Первое число: ";
	cin >> Var1;
	cout << endl;
	cout << "Второе число: ";
	cin >> Var2;
	cout << endl;

	cout << " Выберите операцию : Сложение(1), Вычитание(2), Умножение(3), Деление(4)." << endl;

	int a;
	cin >> a;

	switch (a)
	{
	    case 1:
		   result = Var1 + Var2;
		   cout << " Результат:" << result << endl;
		   break;

		case 2:
			result = Var1 - Var2;
			cout << " Результат:" << result << endl;
			break;

		case 3:
			result = Var1 * Var2;
			cout << " Результат:" << result << endl;
			break;

		case 4:
			if (Var2 == 0)
			{
				cout << " Делить на ноль нельзя." << endl;
				break;
			}
			else
			{
				result = Var1 / Var2;
				cout << " Результат:" << result << endl;
				break;
			}

		default:
			cout << " Некорректный ввод." << endl;
			break;
	}

}

