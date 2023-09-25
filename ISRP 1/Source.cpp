#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int Var1, Var2;
	int Var3;
	int Var3sqrt; 

	cout << "Введите два числа " << endl;
	cout << "Первое число: ";
	cin >> Var1;
	cout << endl;
	cout << "Второе число: ";
	cin >> Var2;
	cout << endl;

	cout << " Выберите операцию : Сложение(1), Вычитание(2), Умножение(3), Деление(4),Возведение в степень(5),Извлечение корня(6)." << endl;

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

		case 5:
			Var3 = pow(Var1, Var2);
			cout << " Результат:" << Var3 << endl;
			break;

		case 6:
			Var3 = sqrt(Var1);
			Var3sqrt = sqrt(Var2);
			cout << "Корень из первого числа:" << Var3;
			cout << "\t Корень из второго числа:" << Var3sqrt << endl;
			break;

		default:
			cout << " Некорректный ввод." << endl;
			break;
	}

	for (;;)
	{
		int Var4;
		int Var5;
		cout << " Введите число:";
		cin >> Var4;

		cout << " Выберите операцию : Сложение(1), Вычитание(2), Умножение(3), Деление(4),Возведение в степень(5),Извлечение корня(6)." << endl;

		int b;
		cin >> b;
		switch (b)
		{
		  case 1:
			  Var5 = Var3 + Var4;
			  cout << " Результат:" << Var5 << endl;
			  break;

		  case 2:
			  Var5 = Var3 - Var4;
			  cout << " Результат:" << Var5 << endl;
			  break;

		  case 3:
			  Var5 = Var3 * Var4;
			  cout << " Результат:" << Var5 << endl;
			  break;

		  case 4:
			if (Var4 == 0)
			{
				cout << " Делить на ноль нельзя." << endl;
				break;
			}
			else
			{
				Var5 = Var3 / Var4;
				cout << " Результат:" << Var4 << endl;
				break;
			}

		  case 5:
			  Var5 = pow(Var3, Var4);
			  cout << " Результат:" << Var3 << endl;
			  break;

		  case 6:
			  Var5 = sqrt(Var4);
			  cout << "Корень из числа:" << Var5 << endl;
			  break;

		  default:
			  cout << " Некорректный ввод." << endl;
			  break;
		}
	}
}

