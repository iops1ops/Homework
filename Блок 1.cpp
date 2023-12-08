//#include<iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
////// задача1
////	cout << "НИКИТА" << endl;
////
////
////// задача 2
////	double a, a2, a3;
////	bool f1 = 0;
////	cout << "Введите числа" << endl;
////	while (f1 != 1) {
////		if (!(cin >> a >> a2)) {
////			cout << "Буквы использовать нельзя" << endl;
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
////		cout << "Делить на ноль нельзя" << "  " << endl;
////	}
////
////
//////задание 3
////	double b, c, x;
////	bool f1 = 0;
////	cout << "введите числа" << endl;
////	while (f1 != 1) {
////		if (!(cin >> b >> c)) {
////			cout << "Буквы использовать нельзя" << endl;
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
////		cout << "Уравнение не имеет решений!" << endl;
////	}
////
//////задание 4
//	double b, c, x, a, y, d;
//	bool f1 = 0;
//	cout << "введите переменные" << endl;
//	while (f1 != 1) {
//		if (!(cin >> a >> b >> c)) {
//			cin.clear();
//			cin.ignore();
//			cout << "Буквами уравнение не решить" << endl;
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
//			cout << "Уравнение не имеет решений" << endl;
//		}
//	}
//	else if (b == 0) {
//		if ((- c / a) > 0) {
//			x = pow(-c / a, 0.5);
//			y = -pow(-c / a, 0.5);
//			cout << x << "  " << y << endl;
//		}
//		else {
//			cout << "Нельзя извлечь корень" << endl;
//		}
//	}
//	else {
//		d = pow(b, 2) - 4 * a * c;
//		if (d < 0) {
//			cout << "Уравнение не имеет корней" << endl;
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
//////задание 4
////	
////
//////#include<iostream>
//////using namespace std;
//////int main() {
//////	setlocale(LC_ALL, "rus");
//////	bool Время, Лампа, Шторы;
//////	cout << "На улице день или ночь?" << "Да/Нет" << endl;
//////	while (true) {
//////		if (!(cin >> Время)) {
//////			cin.clear();
//////			cin.ignore();
//////			cout << "Числами не получится ответить" << endl;
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
////    // Получаем текущее время
////    time_t currentTime;
////    struct tm* localTime;
////    currentTime = time(NULL);
////    localTime = localtime(&currentTime);
////
////    // Определяем, день или ночь
////    bool isDaytime = (localTime->tm_hour >= 6 && localTime->tm_hour < 18);
////
////    // Проверяем состояние лампы и штор
////    bool isLampOn = false; // Измените на true, если лампа включена
////    bool areCurtainsOpen = true; // Измените на false, если шторы закрыты
////
////    // Определяем, светло ли в комнате
////    bool isRoomBright = (isDaytime && areCurtainsOpen) || isLampOn;
////
////    // Выводим результат
////    if (isRoomBright) {
////        std::cout << "В комнате светло." << std::endl;
////    }
////    else {
////        std::cout << "В комнате темно." << std::endl;
////    }
////
//    return 0;
//}

