#include <iostream>
using namespace std;

void removeText() {
	system("cls");
}
void changeColourBackground() {
	system("color 90");
}
void changeColourText() {
	system("color 03");
}
void showSizeInt() {
	cout << "Тип данных INT - " << sizeof(int) << "б";
}
void showSizeChar() {
	cout << "Тип данных CHAR - " << sizeof(char) << "б";
}
void showSizeDouble() {
	cout << "Тип данных DOUBLE - " << sizeof(double) << "б";
}
void showSizeFloat() {
	cout << "Тип данных FLOAT - " << sizeof(float) << "б";
}
void showSizeBool() {
	cout << "Тип данных BOOL - " << sizeof(bool) << "б";
}
void showMessage() {
	cout << "Привет я функция!";
}
void showSquare() {
	cout << "##########\n##########\n##########\n##########\n##########\n";
}
void showError() {
	cout << "Вы ввели неверное значение.";
}

int main() {
	setlocale(0, "");
	cout << "[1] Очищение консоли\n[2] Изменить цвет фона консоли\n[3] Изменить цвет текста консоли \n[4] Вывести размер типа данных INT\n[5] Вывести размер типа данных CHAR\n[6] Вывести размер типа данных DOUBLE\n[7] Вывести размер типа данных FLOAT\n[8] Вывести размер типа данных BOOL\n[9] Вывести \"Привет я функция!\"\n[10] Вывести квадрат 5х5\n\n[+] Введите ваш выбор: ";
	int x;
	cin >> x;
	system("cls");
	switch (x) {
	case 1: {
		removeText();
		break;
	}
	case 2: {
		changeColourBackground();
		break;
	}
	case 3: {
		changeColourText();
		break;
	}
	case 4: {
		showSizeInt();
		break;
	}
	case 5: {
		showSizeChar();
		break;
	}
	case 6: {
		showSizeDouble();
		break;
	}
	case 7: {
		showSizeFloat();
		break;
	}
	case 8: {
		showSizeBool();
		break;
	}
	case 9: {
		showMessage();
		break;
	}
	case 10: {
		showSquare();
		break;
	}
	default: {
		showError();
		break;
	}
	}
	return 0;
}