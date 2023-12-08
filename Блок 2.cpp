/*#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
//	double V, S, P, R, r, h, l;
//	P = 3.14;
//	bool f1 = 0;
//	cout << "Ищем объём конуса. Пожалуйста введите числа." << endl;
//	while (!(cin >> V)) {
//		if (!(cin >> r >> R >> h >> l)) {
//			cin.clear();
//			cin.ignore();
//			cout << "Буквами задача не решается" << endl;
//		}
//		else if (r == 0 || R == 0 || h == 0 || l == 0) {
//			cout << "У конуса не может быть нулевых составляющих" << endl;
//		}
//		else if (r > R) {
//			cout << "Это уже получается не конус" << endl;
//		} 
//		else if (r < 0 || R < 0 || h < 0 || l < 0) {
//				cout << "Ну это уже слишком" << endl;
//		}
//	
//		break;
//	}
//	V = 1 / 3 * P * h * (pow(R, 2) + r * R + pow(r, 2));
//	S = P * (pow(R, 2) + (R + r) * l + pow(r, 2));
//	cout << "Объём" << "  " << V << endl;
//	cout << "Площадь" << "  " << S << endl;


////    const double P = 3.14;
////    double V, S, R, r, h, l;
////    bool f1 = false;
////    cout << "Ищем объём конуса. Пожалуйста введите числа." << endl;
////    while (!f1) {
////        if (!(cin >> r >> R >> h >> l)) {
////            cin.clear();
////            cin.ignore();
////            cout << "Буквами задача не решается" << endl;
////        }
////        else if (r <= 0 || R <= 0 || h <= 0 || l <= 0) {
////            cout << "Нельзя так" << endl;
////        }
////        else if (r > R) {
////            cout << "Это уже получается не конус" << endl;
////        }
////        else {
////            f1 = true;
////        }
////    }
////    V = (1.0 / 3) * P * h * (pow(R, 2) + r * R + pow(r, 2));
////    S = P * (pow(R, 2) + (R + r) * l + pow(r, 2));
////    cout << "Объём" << "  " << V << endl;
////    cout << "Площадь" << "  " << S << endl;

// Задание 2

    //double x, a, w;
    //bool f1 = false;
    //cout << "Решим Систему уравнений" << endl;
    //while (!f1) {
    //    if (!(cin >> x >> a)) {
    //        cin.clear();
    //        cin.ignore();
    //        cout << "Буквы нельзя" << endl;
    //    }
    //    if (abs(x) == 0) {
    //        cout << "Не подходит под ОДЗ" << endl;
    //    }
    //    else if ((a - pow(x, 2)) <= 0) {
    //        cout << "Не подходит под ОДЗ" << endl;
    //    }
    //    else {
    //        f1 = true;
    //    }
    //}
    //if (abs(x) < 1) {
    //    w = a * log(abs(x));
    //    cout << w << endl;
    //}
    //else if (abs(x) > 0) {
    //    w = sqrt(a - pow(x, 2));
    //    cout << w << endl;
    //}
    
    // Задание 3

    //double x, y, z, b;
    //bool f1 = false;
   //cout << "Вычислим функцию" << endl;
    //while (!f1) {
    //    if (!(cin >> b >> x >> y)) {
    //        cin.clear();
    //        cin.ignore();
    //        cout << "Буквы нельзя" << endl;
    //    }
    //    else if ((b - y) <= 0 || (b - x) <= 0) {
    //        cout << "Не решается" << endl;
    //    }
    //    else {
    //        f1 = true;
    //    }
    //}
    //z = log(b - y) * sqrt(b - x);
    //cout << z << endl;

// Задание 4

    //cout << "Выведем подряд 10 чисел" << endl;
    //int x;
    //bool f1 = false;
    //while (!f1) {
    //    if (!(cin >> x)) {
    //        cin.clear();
    //        cin.ignore();
    //        cout << "Нужно использовать числовую последовательность" << endl;
    //    }
    //    else {
    //        f1 = true;
    //    }
    //}
    //if (x < 0) {
    //    x = 0;
    //}
    //for (double i = x; i < x + 10; i++) {
    //    cout << i+1 << endl;
    //}
    
// Задание 5
    
    double z, y;
    bool f1 = false;
    cout << "Протабулируем уравнение" << endl;
    while (!f1) {
        if (!(cin >> z)) {
            cin.clear();
            cin.ignore();
            cout << "Нужно использовать числовую последовательность" << endl;
        }
        else {
            f1 = true;
        }
    }

    for (double x = z; x <= z + 8; x += 0.5) {
        if (x == 1) {
            cout << "Нельзя делить на ноль" << endl;
        }
        else {
            y = (pow(x, 2) - 2 * x + 2) / (x - 1);
            cout << x << "  " << y << endl;
        }
       
    }
    return 0;
}   */

