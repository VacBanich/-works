#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] Выберите перевод\n\n[1] С русского на английский\n[2] С английского на русский\n\n[3] Выход\n[+] Введите значение: ";
	int i, y;
	cin >> i;
	switch (i) {
	case 1: {
		cout << "\n[1] Кот\n[2] Пицца\n[3] Апельсин\n[4] Телефон\n[5] Дерево\n[6] Улица\n[7] Машина\n[8] Мяч\n[9] Сфера\n[10] Танк\n[11] Окно\n[12] Экран\n[13] Вишня\n[14] Велосипед\n[15] Пять\n[+] Выберите слово: ";
		cin >> y;
		switch (y) {
		case 1: {
			cout << "На английском: Cat";
			break;
		}
		case 2: {
			cout << "На английском: Pizza";
			break;
		}
		case 3: {
			cout << "На английском: Orange";
			break;
		}
		case 4: {
			cout << "На английском: Phone";
			break;
		}
		case 5: {
			cout << "На английском: Three";
			break;
		}
		case 6: {
			cout << "На английском: Road";
			break;
		}
		case 7: {
			cout << "На английском: Car";
			break;
		}
		case 8: {
			cout << "На английском: Ball";
			break;
		}
		case 9: {
			cout << "На английском: Sphere";
			break;
		}
		case 10: {
			cout << "На английском: Tank";
			break;
		}
		case 11: {
			cout << "На английском: Window";
			break;
		}
		case 12: {
			cout << "На английском: Screen";
			break;
		}
		case 13: {
			cout << "На английском: Cherry";
			break;
		}
		case 14: {
			cout << "На английском: Bicycle";
			break;
		}
		case 15: {
			cout << "На английском: Five";
			break;
		}
		default: {
			cout << "вы ввели неверное значение. завершение работы.";
			return 0;
		}
		}
		break;
	}
	case 2: {
		cout << "\n[1] Cat\n[2] Pizza\n[3] Orange\n[4] Phone\n[5] Three\n[6] Road\n[7] Car\n[8] Ball\n[9] Sphere\n[10] Tank\n[11] Window\n[12] Screen\n[13] Cherry\n[14] Bicycle\n[15] Five\n[+] Выберите слово: ";
		cin >> y;
		switch (y) {
		case 1: {
			cout << "На русском: Кот";
			break;
		}
		case 2: {
			cout << "На русском: Пицца";
			break;
		}
		case 3: {
			cout << "На русском: Апельсин";
			break;
		}
		case 4: {
			cout << "На русском: Телефон";
			break;
		}
		case 5: {
			cout << "На русском: Дерево";
			break;
		}
		case 6: {
			cout << "На русском: Улица";
			break;
		}
		case 7: {
			cout << "На русском: Машина";
			break;
		}
		case 8: {
			cout << "На русском: Мячь";
			break;
		}
		case 9: {
			cout << "На русском: Сфера";
			break;
		}
		case 10: {
			cout << "На русском: Танк";
			break;
		}
		case 11: {
			cout << "На русском: Окно";
			break;
		}
		case 12: {
			cout << "На русском: Экран";
			break;
		}
		case 13: {
			cout << "На русском: Вишня";
			break;
		}
		case 14: {
			cout << "На русском: Велосипед";
			break;
		}
		case 15: {
			cout << "На русском: пять";
			break;
		}
		default: {
			cout << "вы ввели неверное значение. завершение работы.";
			return 0;
		}
		}
		break;
	}
	default: {
		return 0;
	}
	}

	return 0;
}