//#include<iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
////// ������1
////	cout << "������" << endl;
////
////
////// ������ 2
////	double a, a2, a3;
////	bool f1 = 0;
////	cout << "������� �����" << endl;
////	while (f1 != 1) {
////		if (!(cin >> a >> a2)) {
////			cout << "����� ������������ ������" << endl;
////			cin.clear();
////			cin.ignore();
////		}
////		else {
////			f1 = 1;
////		}
////
////	}
////	if (a2 != 0) {
////		a3 = a + a2;
////		cout << a3 << "  " << endl;
////		a3 = a - a2;
////		cout << a3 << "  " << endl;
////		a3 = a * a2;
////		cout << a3 << "  " << endl;
////		a3 = a / a2;
////		cout << a3 << "  " << endl;
////	}
////	else {
////		a3 = a + a2;
////		cout << a3 << "  " << endl;
////		a3 = a - a2;
////		cout << a3 << "  " << endl;
////		a3 = a * a2;
////		cout << a3 << "  " << endl;
////		cout << "������ �� ���� ������" << "  " << endl;
////	}
////
////
//////������� 3
////	double b, c, x;
////	bool f1 = 0;
////	cout << "������� �����" << endl;
////	while (f1 != 1) {
////		if (!(cin >> b >> c)) {
////			cout << "����� ������������ ������" << endl;
////			cin.clear();
////			cin.ignore();
////		}
////		else {
////			f1 = 1;
////		}
////	}
////	if (b != 0) {
////		x = -c / b;
////		cout << x << endl;
////	}
////	else {
////		cout << "��������� �� ����� �������!" << endl;
////	}
////
//////������� 4
//	double b, c, x, a, y, d;
//	bool f1 = 0;
//	cout << "������� ����������" << endl;
//	while (f1 != 1) {
//		if (!(cin >> a >> b >> c)) {
//			cin.clear();
//			cin.ignore();
//			cout << "������� ��������� �� ������" << endl;
//		}
//		else {
//			f1 = 1;
//		}
//	}
//	if (a == 0) {
//		if (b != 0) {
//			x = -c / b;
//			cout << x << endl;
//		}
//		else {
//			cout << "��������� �� ����� �������" << endl;
//		}
//	}
//	else if (b == 0) {
//		if ((- c / a) > 0) {
//			x = pow(-c / a, 0.5);
//			y = -pow(-c / a, 0.5);
//			cout << x << "  " << y << endl;
//		}
//		else {
//			cout << "������ ������� ������" << endl;
//		}
//	}
//	else {
//		d = pow(b, 2) - 4 * a * c;
//		if (d < 0) {
//			cout << "��������� �� ����� ������" << endl;
//		}
//		else if (d == 0) {
//			x = (-b + pow(d, 0.5)) / 2 * a;
//			cout << x << "  " << endl;
//		}
//		else  if (d > 0) {
//			x = (-b + pow(d, 0.5)) / 2 * a;
//			cout << x << "  " << endl;
//			y = (-b - pow(d, 0.5)) / 2 * a;
//			cout << y << "  " << endl;
//		}
//	}
////	
//////������� 4
////	
////
//////#include<iostream>
//////using namespace std;
//////int main() {
//////	setlocale(LC_ALL, "rus");
//////	bool �����, �����, �����;
//////	cout << "�� ����� ���� ��� ����?" << "��/���" << endl;
//////	while (true) {
//////		if (!(cin >> �����)) {
//////			cin.clear();
//////			cin.ignore();
//////			cout << "������� �� ��������� ��������" << endl;
//////		}
//////	}
//////
//////	
//////	return 0;
//////}
////#include <iostream>
////#include <ctime>
////
////int main() {
////    // �������� ������� �����
////    time_t currentTime;
////    struct tm* localTime;
////    currentTime = time(NULL);
////    localTime = localtime(&currentTime);
////
////    // ����������, ���� ��� ����
////    bool isDaytime = (localTime->tm_hour >= 6 && localTime->tm_hour < 18);
////
////    // ��������� ��������� ����� � ����
////    bool isLampOn = false; // �������� �� true, ���� ����� ��������
////    bool areCurtainsOpen = true; // �������� �� false, ���� ����� �������
////
////    // ����������, ������ �� � �������
////    bool isRoomBright = (isDaytime && areCurtainsOpen) || isLampOn;
////
////    // ������� ���������
////    if (isRoomBright) {
////        std::cout << "� ������� ������." << std::endl;
////    }
////    else {
////        std::cout << "� ������� �����." << std::endl;
////    }
////
//    return 0;
//}

