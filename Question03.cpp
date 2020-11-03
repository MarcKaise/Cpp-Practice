#include <iostream>

class Question03
{
public:
    void q01();
    void q02();
    void q03();
};

void Question03::q01()
{
    std::cout << "適当な文字を入力し、その文字コードを表示するプログラム" << std::endl;

    char c[128];
    int i;

    std::cout << "Type 1 character." << std::endl;
    std::cin >> c;
    i = c[0];
    std::cout << "character code is 0x" << std::hex << i << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}

void Question03::q02()
{
    std::cout << "2つの整数を入力し、 整数のままで割り算した結果（あまり切り捨て）と、 浮動小数点数として割り算した結果を比較するプログラム" << std::endl;

    int a, b;
    double c, d;

    std::cout << "Type 2 numbers with space." << std::endl;
    std::cin >> a >> b;
    c = a;
    d = b;
    std::cout << "Int    : " << a << " + " << b << " = " << (a / b) << std::endl;
    std::cout << "Double : " << c << " + " << d << " = " << (c / d) << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}

void Question03::q03()
{
    std::cout << "double → int にキャストすると、値が整数に切り詰められます。 このとき、どのようにして値が切り詰められるのか（切捨てなのか切り上げなのか等）を調べよ。 （正の数だけでなく、負の数も。）" << std::endl;
    double tmp[30] = {0};
    int i = 0;

    for (double d = -1.0; d <= 1.5; d += 0.1)
    {
        tmp[i] = d;
        i++;
    }

    for (i = 0; i < std::end(tmp) - std::begin(tmp); ++i)
    {
        std::cout << "double : " << (double)tmp[i] << ", int : " << (int)tmp[i] << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
}

int main()
{
    Question03 q03;
//    q03.q01();
//    q03.q02();
    q03.q03();
    return 0;
}

