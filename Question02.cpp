#include <iostream>

class Question02
{
public:
    void q01();
    void q02();
    void q03();
    void q04();
    void q05();
};

void Question02::q01()
{
    int a, b;
    std::cout << "Question 02_01: 2つの整数を入力し、 その整数の四則演算(＋, －, ×, ÷)結果を表示するプログラム" << std::endl;
    std::cout << "Type 2 numbers with space." << std::endl;
    std::cin >> a >> b;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}

void Question02::q02()
{
    double a, b;
    std::cout << "Question 02_02: 前問の「整数の四則演算」の double を用いた物" << std::endl;
    std::cout << "Type 2 numbers with space." << std::endl;
    std::cin >> a >> b;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    short c, d;
    std::cout << "Question 02_02: 前問の「整数の四則演算」の short を用いた物" << std::endl;
    std::cout << "Type 2 numbers with space." << std::endl;
    std::cin >> c >> d;
    std::cout << "c + d = " << c + d << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "c * d = " << c * d << std::endl;
    std::cout << "c / d = " << c / d << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}

void Question02::q03()
{
    std::cout << "Question 02_01: 複素数 x + iy の逆数を求めるプログラム" << std::endl;
    double x, y, tmp;
    std::cout << "Type x." << std::endl;
    std::cin >> x;
    std::cout << "Type y." << std::endl;
    std::cin >> y;
    tmp = x * x + y * y;
    std::cout << "Ans. = " << x / tmp << " - i ( " << y / tmp << " )" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}

void Question02::q04()
{
    double r;
    std::cout << "Question 02_01: 半径を入力し、その半径の円の面積を求めるプログラム" << std::endl;
    std::cout << "Type the number of radius." << std::endl;
    std::cin >> r;
    std::cout << "Ans. = " << r * r * 3.141592653589793238462643383279 << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}

void Question02::q05()
{
    double hight, weight;
    std::cout << "Question 02_05: 体重と身長を入力し、BMIを求めるプログラム" << std::endl;
    std::cout << "Type hight[cm] and weight[kg] with space." << std::endl;
    std::cin >> hight >> weight;
    hight *= 0.01;  // cm to m
    std::cout << "BMI = " << weight / (hight * hight) << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}

int main()
{
    Question02 q02;
//    q02.q01();
//    q02.q02();
//    q02.q03();
//    q02.q04();
    q02.q05();
    return 0;
}

