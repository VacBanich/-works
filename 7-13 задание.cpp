#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int line = 0;
	int line1 = 0;
	int menu1;
	int razmer;
	string simbol;
	int linedlinna;
	int menu2;
	int menu3;
	int shirinapramougolnika;
	int dlinapramougolnika;
	int treugolnik;
	int menu4;
	int menutreugolnika;
	int x;
	cout << "\n\n\t\t\t\t\t\t[1] Квадрат \n";
	cout << "\n\n\t\t\t\t\t\t[2] Линия \n";
	cout << "\n\n\t\t\t\t\t\t[3] Прямоугольник \n";
	cout << "\n\n\t\t\t\t\t\t[4] Треугольник \n";
	cout << "\n\n\t\t\t\t\t\t[5] Решётка \n";
	cout << "\n\n\t\t\t\t\t\t[6] Крестик \n";
	cout << "\n\n\t\t\t\t\t\t[7] плюсик \n";
	cout << "\n\n\t\t\t\t\t\t[-] Выберите фигуру: ";
	cin >> menu2;


	switch (menu2)
	{
	case 1:
		system("CLS");
		cout << "\n\n\t\t\t\t\t\t[1] Заполненный квадрат\n";
		cout << "\n\n\t\t\t\t\t\t[2] Пустой квадрат\n";
		cout << "\n\n\t\t\t\t\t\t[-] Выберите тип квадрата: ";
		cin >> menu3;
		switch (menu3)
		{

		case 1:
			system("CLS");
			cout << "\n\n\t\t\t\t\t\tВыберите размер квадрата: ";
			cin >> razmer;
			cout << "\n\n\t\t\t\t  Выберите какими символами вы хотите вывестии квадрат: ";
			cin >> simbol;
			system("CLS");

			for (int visota = 0; visota < razmer; visota++) {
				for (int shirina = 0; shirina < razmer; shirina++) {
					cout << simbol << " ";
				}
				cout << "\n";
			}
			break;
		case 2:
			system("CLS");
			cout << "\n\n\t\t\t\t\t\tВыберите размер квадрата: ";
			cin >> razmer;
			cout << "\n\n\t\t\t\t  Выберите какими символами вы хотите вывестии квадрат: ";
			cin >> simbol;
			system("CLS");
			for (int visota = 0; visota < razmer; visota++) {
				for (int shirina = 0; shirina < razmer; shirina++) {
					if (visota == 0 || visota == razmer - 1 || shirina == 0 || shirina == razmer - 1) {
						cout << simbol << " ";
					}
					else {
						cout << "  ";
					}

				}
				cout << "\n";
			}


			break;

		}
		break;

	case 2:
		system("CLS");
		cout << "\n\n\t\t\t\t\t\t[1] Горизинтальная линия\n";
		cout << "\n\n\t\t\t\t\t\t[2] Вертикальная линия\n";
		cout << "\n\n\t\t\t\t\t\t[-] Введите ваш выбор: ";
		cin >> menu1;

		cout << "\n\n\t\t\t\t\t\t[-]Ведите длинну линии: ";
		cin >> linedlinna;
		cout << "\n\n\t\t\t\t     [-]Введите знак которым будет начерчена линия: ";
		cin >> simbol;



		switch (menu1)
		{
		case 1:
			system("CLS");
			cout << "\n\n\n\n";
			while (line < linedlinna) {
				cout << simbol;
				line++;
			}
			cout << "\n\n\n\n";

			break;
		case 2:
			system("CLS");

			while (line1 < linedlinna) {
				cout << "\n\t\t\t\t\t\t\t" << simbol;
				line1++;
			}
			break;
		}
		break;
	case 3:
		system("CLS");
		cout << "\n\n\t\t\t\t\t\t[1] Заполненный прямоугольник\n";
		cout << "\n\n\t\t\t\t\t\t[2] Пустой прямоугольник\n";
		cout << "\n\n\t\t\t\t\t\t[-] Выберите тип прямоугольник: ";
		cin >> menu4;
		switch (menu4)
		{
		case 1:
			system("CLS");
			cout << "\n\n\t\t\t\t\t\tВведите длину прямоугольника: ";
			cin >> dlinapramougolnika;
			cout << "\n\n\t\t\t\t\t\tВведите ширину прямоугольника: ";
			cin >> shirinapramougolnika;
			cout << "\n\n\t\t\t\t  Выберите какими символами вы хотите вывестии прямоугольник: ";
			cin >> simbol;
			system("CLS");
			for (int visota = 0; visota < dlinapramougolnika; visota++) {
				for (int shirina = 0; shirina < shirinapramougolnika; shirina++) {
					cout << simbol << " ";
				}
				cout << "\n";
			}
			break;
		case 2:
			system("CLS");
			cout << "\n\n\t\t\t\t\t\tВыберите длину прямоугольника: ";
			cin >> dlinapramougolnika;
			cout << "\n\n\t\t\t\t\t\tВведите ширину прямоугольника: ";
			cin >> shirinapramougolnika;
			cout << "\n\n\t\t\t\t  Выберите какими символами вы хотите вывестии прямоугольник: ";
			cin >> simbol;
			system("CLS");
			for (int visota = 0; visota < dlinapramougolnika; visota++) {
				for (int shirina = 0; shirina < shirinapramougolnika; shirina++) {
					if (visota == 0 || visota == dlinapramougolnika - 1 || shirina == 0 || shirina == shirinapramougolnika - 1) {
						cout << simbol << " ";
					}
					else {
						cout << "  ";
					}

				}
				cout << "\n";
			}
			break;
		}
		break;
		break;
		case 4: {
		system("CLS");
		cout << "\n\n\t\t\t\t\t\t[1] Заполненный треугольник\n";
		cout << "\n\n\t\t\t\t\t\t[2] Пустой треугольник\n";
		cout << "\n\n\t\t\t\t\t\t[-] Выберите тип треугольника: ";

		cin >> menutreugolnika;

		cout << "\n\n\t\t\t\t\t\tВведите размер треугольника: ";

		cin >> treugolnik;

		cout << "\n\n\t\t\t\t  Выберите какими символами вы хотите вывестии треугольник: ";

		cin >> simbol;

		system("CLS");
		switch (menutreugolnika)
		{
		case 1: {

			system("cls");

			for (int i = 0; i < treugolnik / 2 + 1; i++) {
				for (int i2 = 0; i2 < treugolnik; i2++) {
					if (i2 >= treugolnik / 2 - i && i2 <= treugolnik / 2 + i || i == treugolnik / 2)
						cout << simbol << " ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}

		case 2: {
			for (int y = 0; y < treugolnik; y++) {
				for (int x = 0; x < treugolnik; x++) {
					if (x == treugolnik / 2 + y || x == treugolnik / 2 - y || y == treugolnik / 2) {
						cout << simbol << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << "\n";
			}
		}
		}
		}
		case 5: {
			system("cls");
			cout << "[+] Напишите размер решётки: ";
			cin >> x;
			cout << "[+] Выберите каким символом вывести: ";
			char y;
			cin >> y;
			system("cls");
			for (int i = 1; i < x + 1; i++) {
				for (int i2 = 1; i2 < x + 1; i2++) {
					if (i % 2 == 0 || i2 % 2 == 0)
						cout << y << " ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 6: {
			system("cls");
			cout << "[+] Введите размер крестика: ";
			cin >> x;
			cout << "[+] Выберите каким символом вывести: ";
			char y;
			cin >> y;
			system("cls");
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x; i2++) {
					if (i == i2 || i2 == x - i - 1)
						cout << y << " ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 7: {
			system("cls");
			cout << "[+] Размер плюсика: ";
			cin >> x;
			cout << "[+] Выберите каким символом вывести: ";
			char y;
			cin >> y;
			system("cls");
			
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x; i2++) {
					if (i == x / 2 || i2 == x / 2)
						cout << y << " ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}

	}
	return 0;
}