#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int Var1, Var2;
	int result;

	cout << "������� ��� ����� " << endl;
	cout << "������ �����: ";
	cin >> Var1;
	cout << endl;
	cout << "������ �����: ";
	cin >> Var2;
	cout << endl;

	cout << " �������� �������� : ��������(1), ���������(2), ���������(3), �������(4)." << endl;

	int a;
	cin >> a;

	switch (a)
	{
	    case 1:
		   result = Var1 + Var2;
		   cout << " ���������:" << result << endl;
		   break;

		case 2:
			result = Var1 - Var2;
			cout << " ���������:" << result << endl;
			break;

		case 3:
			result = Var1 * Var2;
			cout << " ���������:" << result << endl;
			break;

		case 4:
			if (Var2 == 0)
			{
				cout << " ������ �� ���� ������." << endl;
				break;
			}
			else
			{
				result = Var1 / Var2;
				cout << " ���������:" << result << endl;
				break;
			}

		default:
			cout << " ������������ ����." << endl;
			break;
	}

}

