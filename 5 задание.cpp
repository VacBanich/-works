#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] �������� �������\n\n[1] � �������� �� ����������\n[2] � ����������� �� �������\n\n[3] �����\n[+] ������� ��������: ";
	int i, y;
	cin >> i;
	switch (i) {
	case 1: {
		cout << "\n[1] ���\n[2] �����\n[3] ��������\n[4] �������\n[5] ������\n[6] �����\n[7] ������\n[8] ���\n[9] �����\n[10] ����\n[11] ����\n[12] �����\n[13] �����\n[14] ���������\n[15] ����\n[+] �������� �����: ";
		cin >> y;
		switch (y) {
		case 1: {
			cout << "�� ����������: Cat";
			break;
		}
		case 2: {
			cout << "�� ����������: Pizza";
			break;
		}
		case 3: {
			cout << "�� ����������: Orange";
			break;
		}
		case 4: {
			cout << "�� ����������: Phone";
			break;
		}
		case 5: {
			cout << "�� ����������: Three";
			break;
		}
		case 6: {
			cout << "�� ����������: Road";
			break;
		}
		case 7: {
			cout << "�� ����������: Car";
			break;
		}
		case 8: {
			cout << "�� ����������: Ball";
			break;
		}
		case 9: {
			cout << "�� ����������: Sphere";
			break;
		}
		case 10: {
			cout << "�� ����������: Tank";
			break;
		}
		case 11: {
			cout << "�� ����������: Window";
			break;
		}
		case 12: {
			cout << "�� ����������: Screen";
			break;
		}
		case 13: {
			cout << "�� ����������: Cherry";
			break;
		}
		case 14: {
			cout << "�� ����������: Bicycle";
			break;
		}
		case 15: {
			cout << "�� ����������: Five";
			break;
		}
		default: {
			cout << "�� ����� �������� ��������. ���������� ������.";
			return 0;
		}
		}
		break;
	}
	case 2: {
		cout << "\n[1] Cat\n[2] Pizza\n[3] Orange\n[4] Phone\n[5] Three\n[6] Road\n[7] Car\n[8] Ball\n[9] Sphere\n[10] Tank\n[11] Window\n[12] Screen\n[13] Cherry\n[14] Bicycle\n[15] Five\n[+] �������� �����: ";
		cin >> y;
		switch (y) {
		case 1: {
			cout << "�� �������: ���";
			break;
		}
		case 2: {
			cout << "�� �������: �����";
			break;
		}
		case 3: {
			cout << "�� �������: ��������";
			break;
		}
		case 4: {
			cout << "�� �������: �������";
			break;
		}
		case 5: {
			cout << "�� �������: ������";
			break;
		}
		case 6: {
			cout << "�� �������: �����";
			break;
		}
		case 7: {
			cout << "�� �������: ������";
			break;
		}
		case 8: {
			cout << "�� �������: ����";
			break;
		}
		case 9: {
			cout << "�� �������: �����";
			break;
		}
		case 10: {
			cout << "�� �������: ����";
			break;
		}
		case 11: {
			cout << "�� �������: ����";
			break;
		}
		case 12: {
			cout << "�� �������: �����";
			break;
		}
		case 13: {
			cout << "�� �������: �����";
			break;
		}
		case 14: {
			cout << "�� �������: ���������";
			break;
		}
		case 15: {
			cout << "�� �������: ����";
			break;
		}
		default: {
			cout << "�� ����� �������� ��������. ���������� ������.";
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