#include <iostream>

int main()
{
    int x = 5;
    // ポインタの場合は型の横に*をつける。
    // 変数からポインタを得るには変数の左側に&をつける
    int* p = &x;
    // ポインタ変数から値を取る場合は変数の左側にアスタリスクをつける
    int y = *p;
    std::cout << x << " " << p << " " << y << std::endl;


    // constポインタ
    int xx = 1000;
    // * の前に const を付けると、ポインタが指し示す値を書き換えることができなくなる
    const int* pp = &xx;
    // ポインタ変数pの値を書換え不可
    // *p = 500; ←エラーになる

    // * の後に const を付けると、ポインタ自身を書き換えるができなくなる
    int* const q = &xx;
    // ポインタ変数のポインタが書換不可
    // q = 20; ←　エラーになる


    // 参照
    // ポインタに似ている
    int xxx = 500;
    int& r = xxx;

    // xとrが変化する
    r = 200;
    std::cout << xxx << " " << r << std::endl;

    return 0;
}