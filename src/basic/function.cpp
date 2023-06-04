#include <iostream>

// 前方宣言で関数をメイン文の下にかける
void Print(int x);
void Print(double x);

int Add(int x, int y)
{
    return x + y;
}


int main(){
    Print(2);
    Print(2.1);

    // 関数ポインタ
    // 構文 戻り値の型(*変数名)(引数の型)
    int (*pAdd)(int, int) = Add;
    int result = pAdd(5, 4);
    Print(result);

    // autoを使用することでポインタ関数の構文を簡略化できる
    auto pAutoAdd = Add;
    int AutoResult = Add(10, 10);
    Print(AutoResult);

    return 0;
}

void Print(int x)
{
    std::cout << "int: " << x << std::endl;
}

void Print(double x)
{
    std::cout << "overload" <<  "double: " << x << std::endl;
}
