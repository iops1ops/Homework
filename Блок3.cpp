//#include <iostream>
//#include <cmath>
//#include <fstream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() {
// Exercise 1
    /*cout << "Calculate the interest on the loan amount" << endl;
    cout << "Please enter:" << "\n" << "1. Loan amount(S)" << "\n" << "2. Percent(p)" << "\n" << "3. Time(n)" << endl;
    double S, p, n, m, r, t;
    bool f1 = false;
    while (!f1) {
        if (!(cin >> S >> p >> n)) {
            cin.clear();
            cin.ignore();
            cout << "Please don't use letters" << endl;
        }
        else if (S < 0 || p < 0 || n < 0) {
            cout << "It won't work" << endl;
        }
        else {
            f1 = true;
        }
    }

    r = p / 100;

    t = 12 * (pow((1 + r), n) - 1);
    if (t == 0) {
        cout << "You don't divide by zero" << endl;
    }
    else {
        m = S * r * pow((1 + r), n) / t;
        cout << "Loan amount is " << m << endl;
    }*/
        /*
//Exercise 2
    cout << "Calculate the interest on the loan amount" << endl;
    cout << "Please enter:" << "\n" << "1. Loan amount(S)" << "\n" << "2. Percent(m)" << "\n" << "3. Time(n)" << endl;
    float r, m, S, n;
    double mf, p , t;
    bool f1 = false;
    while (!f1) {
        if (!(cin >> S >> m >> n)) {
            cin.clear();
            cin.ignore();
            cout << "Please don't use letters" << endl;
        }
        else if (S < 0 || m < 0 || n < 0) {
            cout << "It won't work" << endl;
        }
        else {
            f1 = true;
        }
    }
    
    for (p = 0; p <= 100; p += 0.01) {    
        r = p / 100;
        t = 12 * (pow((1 + r), n) - 1);
        mf = (S * r * pow((1 + r), n) / t);
        
        if (abs(m - mf) < 1) {
            break;

        }
    }
    cout << p << endl;

//
*/
//Exercise 3
    /*string gg, line;
    cout << "input line" << endl;
    getline(cin, gg);
    ofstream nn("GGG.txt");
    nn << gg;
    nn.close();
    ifstream in("GGG.txt");
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();*/
        
//

//Exercise 4
    /*cout << "This program will print only the numbers from your input string." << endl;
    string hh, jin;
    cout << "input line" << endl;
    getline(cin, hh);
    ofstream jj("GGG.txt");
    jj << hh;
    jj.close();
    char symbol;
    ifstream of("GGG.txt");
    while  (of.get(symbol)) {
        if ((symbol >= '0' && symbol <= '9')) {
            cout << "Here are your numbers: " << symbol << endl;
        }
    }
    of.close();*/

//

//Exircise 5
    /*cout << "Input string ";
    string my;
    getline(cin, my);
    int gg = my.length();
    for (int i = 0; (i < gg); i++) {
        for (int j = 0; j < (gg - 1); j++) {
            if (tolower(my[j]) > tolower(my[j + 1])) {
                swap(my[j], my[j + 1]);
            }
        }
    }
    for (int i = 0; (i < gg); i++) {
        for (int j = 0; j < (gg - 1); j++) {
            if ((my[j] - my[j + 1]) == 32 and my[j]> my[j+1]) {
                swap(my[j], my[j + 1]);
            }
        }
    }
    cout << "Finish string " << my << endl;
    return 0;*/
//}