#include <iostream>
#include <array>

int main(){
    // 配列
    int x[5] = {0,1,2,3,4};

    // 初期化のバリエーション
    // 宣言と同時に代入する場合は要素数の指定いらない
    int y[] = {0,5,8};

    // 要素数だけ指定すると、要素数が0が入る
    int z[5] = {};
    std::cout << z[2] << std::endl;

    // 配列とポインタ
    // 配列はいくつかの例外を除いて常にポインタ型に暗黙変換される
    int* p = x; //配列xの先頭のポインタを取得できる &x[0] とも書ける
    std::cout << p << "    " << *p << std::endl;
    std::cout << p+1 << "    " << *(p+1) << std::endl;

    // より高機能な配列はstd::arrayを使用する
    std::array<int, 5>arrayx = {0,1,2,3,4};
    auto size = arrayx.size(); //要素数を取得できる
    std::cout << size << std::endl;
}

// 関数に配列を渡す場合は、ポインタ型として解釈される
// 以下2つの関数は全く同じになる
// PointArray1の引数となる配列の要素数の情報が落ちる
void PrintArray1(const int x[5]) {
    static_assert(sizeof(x)==sizeof(int*), "");
    for (int i = 0; i < 5; ++i) {
        std::cout << x[i] << std::endl;
    }
}

void PrintArray2(const int* x) {
    for (int i = 0; i < 5; ++i) {
        std::cout << x[i] << std::endl;
    }
}

// 関数に配列を渡すときは、配列先頭のポインタと要素数をセットで渡す
void PrintArray3(const int* x, std::size_t num)
{
    for (std::size_t i=0; i < num; i++)
    {
        std::cout << x[i] << std::endl;
    }

}
