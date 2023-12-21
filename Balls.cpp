//#include <iostream>
//using namespace std;
//bool Checking(int* balls, int countBalls)
//{
//    for (int i = 0; i < countBalls; ++i)
//    {
//        if (balls[i] == (i + 1))
//        {
//            return true;
//        }
//    }
//    return false;
//}
//void Swap(int* balls, int firstIndex, int secondIndex)
//{
//    int buffer = balls[firstIndex];
//    balls[firstIndex] = balls[secondIndex];
//    balls[secondIndex] = buffer;
//}
//bool Searching(int* balls, int countBalls)
//{
//    int firstIndex = countBalls - 2;
//    while (firstIndex >= 0 && balls[firstIndex] >= balls[firstIndex + 1])
//    {
//        firstIndex--;
//    }
//    if (firstIndex == -1)
//    {
//        return false;
//    }
//    int secondIndex = countBalls - 1;
//    while (balls[firstIndex] >= balls[secondIndex])
//    {
//        secondIndex--;
//    }
//    Swap(balls, firstIndex, secondIndex);
//    int dopFirst = firstIndex + 1;
//    int dopSecond = countBalls - 1;
//    while (dopFirst < dopSecond)
//    {
//        Swap(balls, dopFirst++, dopSecond--);
//    }
//    return true;
//}
//int main() {
//    int count = 1;
//    int countBalls;
//    cout << "Enter bolls: "; cin >> countBalls;
//    int* balls = new int[countBalls];
//    for (int i = 1; i <= countBalls; i++)
//    {
//        balls[i - 1] = i;
//    }
//    while (Searching(balls, countBalls))
//    {
//        if (Checking(balls, countBalls))
//        {
//            count++;
//        }
//    }
//    cout << "Situation times: " << count << endl;
//    return 0;
//}