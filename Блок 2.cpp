/*#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
//	double V, S, P, R, r, h, l;
//	P = 3.14;
//	bool f1 = 0;
//	cout << "���� ����� ������. ���������� ������� �����." << endl;
//	while (!(cin >> V)) {
//		if (!(cin >> r >> R >> h >> l)) {
//			cin.clear();
//			cin.ignore();
//			cout << "������� ������ �� ��������" << endl;
//		}
//		else if (r == 0 || R == 0 || h == 0 || l == 0) {
//			cout << "� ������ �� ����� ���� ������� ������������" << endl;
//		}
//		else if (r > R) {
//			cout << "��� ��� ���������� �� �����" << endl;
//		} 
//		else if (r < 0 || R < 0 || h < 0 || l < 0) {
//				cout << "�� ��� ��� �������" << endl;
//		}
//	
//		break;
//	}
//	V = 1 / 3 * P * h * (pow(R, 2) + r * R + pow(r, 2));
//	S = P * (pow(R, 2) + (R + r) * l + pow(r, 2));
//	cout << "�����" << "  " << V << endl;
//	cout << "�������" << "  " << S << endl;


////    const double P = 3.14;
////    double V, S, R, r, h, l;
////    bool f1 = false;
////    cout << "���� ����� ������. ���������� ������� �����." << endl;
////    while (!f1) {
////        if (!(cin >> r >> R >> h >> l)) {
////            cin.clear();
////            cin.ignore();
////            cout << "������� ������ �� ��������" << endl;
////        }
////        else if (r <= 0 || R <= 0 || h <= 0 || l <= 0) {
////            cout << "������ ���" << endl;
////        }
////        else if (r > R) {
////            cout << "��� ��� ���������� �� �����" << endl;
////        }
////        else {
////            f1 = true;
////        }
////    }
////    V = (1.0 / 3) * P * h * (pow(R, 2) + r * R + pow(r, 2));
////    S = P * (pow(R, 2) + (R + r) * l + pow(r, 2));
////    cout << "�����" << "  " << V << endl;
////    cout << "�������" << "  " << S << endl;

// ������� 2

    //double x, a, w;
    //bool f1 = false;
    //cout << "����� ������� ���������" << endl;
    //while (!f1) {
    //    if (!(cin >> x >> a)) {
    //        cin.clear();
    //        cin.ignore();
    //        cout << "����� ������" << endl;
    //    }
    //    if (abs(x) == 0) {
    //        cout << "�� �������� ��� ���" << endl;
    //    }
    //    else if ((a - pow(x, 2)) <= 0) {
    //        cout << "�� �������� ��� ���" << endl;
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
    
    // ������� 3

    //double x, y, z, b;
    //bool f1 = false;
   //cout << "�������� �������" << endl;
    //while (!f1) {
    //    if (!(cin >> b >> x >> y)) {
    //        cin.clear();
    //        cin.ignore();
    //        cout << "����� ������" << endl;
    //    }
    //    else if ((b - y) <= 0 || (b - x) <= 0) {
    //        cout << "�� ��������" << endl;
    //    }
    //    else {
    //        f1 = true;
    //    }
    //}
    //z = log(b - y) * sqrt(b - x);
    //cout << z << endl;

// ������� 4

    //cout << "������� ������ 10 �����" << endl;
    //int x;
    //bool f1 = false;
    //while (!f1) {
    //    if (!(cin >> x)) {
    //        cin.clear();
    //        cin.ignore();
    //        cout << "����� ������������ �������� ������������������" << endl;
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
    
// ������� 5
    
    double z, y;
    bool f1 = false;
    cout << "������������� ���������" << endl;
    while (!f1) {
        if (!(cin >> z)) {
            cin.clear();
            cin.ignore();
            cout << "����� ������������ �������� ������������������" << endl;
        }
        else {
            f1 = true;
        }
    }

    for (double x = z; x <= z + 8; x += 0.5) {
        if (x == 1) {
            cout << "������ ������ �� ����" << endl;
        }
        else {
            y = (pow(x, 2) - 2 * x + 2) / (x - 1);
            cout << x << "  " << y << endl;
        }
       
    }
    return 0;
}   */

