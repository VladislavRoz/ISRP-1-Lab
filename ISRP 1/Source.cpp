#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int Var1, Var2;
	int Var3;

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
		   Var3 = Var1 + Var2;
		   cout << " Результат:" << Var3 << endl;
		   break;

		case 2:
			Var3 = Var1 - Var2;
			cout << " Результат:" << Var3 << endl;
			break;

		case 3:
			Var3 = Var1 * Var2;
			cout << " Результат:" << Var3 << endl;
			break;

		case 4:
			if (Var2 == 0)
			{
				cout << " Делить на ноль нельзя." << endl;
				break;
			}
			else
			{
				Var3 = Var1 / Var2;
				cout << " Результат:" << Var3 << endl;
				break;
			}

		default:
			cout << " Некорректный ввод." << endl;
			break;
	}

	for (;;)
	{
		int Var4;
		cout << " Введите число:";
		cin >> Var4;

		cout << " Выберите операцию : Сложение(1), Вычитание(2), Умножение(3), Деление(4)." << endl;

		int b;
		cin >> b;
		switch (b)
		{
		  case 1:
			  Var4 = Var3 + Var4;
			  cout << " Результат:" << Var4 << endl;
			  break;

		  case 2:
			  Var4 = Var3 - Var4;
			  cout << " Результат:" << Var4 << endl;
			  break;

		  case 3:
			  Var4 = Var3 * Var4;
			  cout << " Результат:" << Var4 << endl;
			  break;

		  case 4:
			if (Var2 == 0)
			{
				cout << " Делить на ноль нельзя." << endl;
				break;
			}
			else
			{
				Var4 = Var3 / Var4;
				cout << " Результат:" << Var4 << endl;
				break;
			}

		  default:
			  cout << " Некорректный ввод." << endl;
			  break;
		}
	}
}

