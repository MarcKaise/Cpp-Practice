#include <iostream>
#include <cmath>
#include <string>

class Question04
{
public:
    void q01();
    void q02();
    void q03();
    void q04();
};

void Question04::q01()
{
    int a;
    std::cout << "Question 04_01: ユーザから入力された整数が奇数か偶数か判定するプログラム" << std::endl;
    std::cout << "Type 1 number." << std::endl;
    std::cin >> a;

    if ( (a % 2) == 0 )
    {
        // even
        std::cout << a << " is even." << std::endl;
    }
    else
    {
        // odd
        std::cout << a << " is odd." << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
}

void Question04::q02()
{
    double hight, weight;
    double bmi;
    std::cout << "Question 04_02: 体重と身長を入力し、BMIを求めるプログラム" << std::endl;
    std::cout << "Type hight[cm] and weight[kg] with space." << std::endl;
    std::cin >> hight >> weight;
    hight *= 0.01;  // cm to m
    bmi = weight / (hight * hight);
    std::cout << "BMI = " << bmi << std::endl;

    if (bmi < 19.8)
    {
        std::cout << "やせ型" << std::endl;
    }
    else if (bmi < 24.2)
    {
        std::cout << "普通" << std::endl;
    }
    else if (bmi < 26.4)
    {
        std::cout << "やや肥満（過体重）" << std::endl;
    }
    else if (bmi < 35.0)
    {
        std::cout << "肥満" << std::endl;
    }
    else {
        std::cout << "高度肥満（要治療）" << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
}

void Question04::q03()
{
    int a;
    std::cout << "Question 04_03: switch 文を使って150以下の平方数(4＝2×2、9＝3×3、16＝4×4というように、ある整数の二乗になっている数)を判別するプログラム" << std::endl;
    std::cout << "Type one numbere." << std::endl;
    std::cin >> a;

    switch (a) {
        case 1 * 1:
        case 2 * 2:
        case 3 * 3:
        case 4 * 4:
        case 5 * 5:
        case 6 * 6:
        case 7 * 7:
        case 8 * 8:
        case 9 * 9:
        case 10 * 10:
        case 11 * 11:
        case 12 * 12:
            std::cout << a << "は平方根です" << std::endl;
            break;
        default:
            std::cout << a << "は平方根ではありません" << std::endl;
            break;
    };
    std::cout << "------------------------------------------" << std::endl;
}

void Question04::q04()
{
    int a[3];
    std::cout << "Question 04_04 数値を3つ入力してもらい、 その3つの値の中の最大値、最小値を求めるプログラム" << std::endl;
    std::cout << "Type three numberes." << std::endl;
    std::cin >> a[0] >> a[1] >> a[2];

    std::sort(a, a + 3);

    std::cout << "最大：" << a[2] << "、最小：" << a[0] << std::endl;

    std::cout << "------------------------------------------" << std::endl;
}

int main()
{
    Question04 q4;
    q4.q01();
    q4.q02();
    q4.q03();
    q4.q04();
    return 0;
}

