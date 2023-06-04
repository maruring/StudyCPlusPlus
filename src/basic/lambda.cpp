#include <iostream>
#include <functional>

/*ラムダ式
簡潔に関数オブジェクトを記述するための式
ラムダ式で生成される関数オブジェクトは auto で保持することが出来る。

構文↓↓
auto 変数名 = [ キャプチャ ]( 引数リスト ) -> 戻り値の型 { 処理内容 };

コピーキャプチャ
キャプチャ内の引数の値をコピーして使用する

参照キャプチャ
キャプチャ内の引数を参照して使用する
*/

int Add(int x, int y)
{
    return x+y;
}

int main(){
    int init = 10;

    // ラムダ式を定義
    auto f = [init](int x, int y){std::cout << init+x+y << std::endl;};
    auto g = [&init](int x, int y){std::cout << init+x+y << std::endl;};

    init = 4;

    // コピーキャプチャなので、ラムダ式を定義したinitの値が入る
    f(2,4);

    // 参照キャプチャなので、最新のinitの値が入る
    g(2,4);

    auto h = [](int x, int y){return x*y;};
    std::cout << h(10,10) << std::endl;

    // std::functionを使えば関数やラムダ式などを格納、コピー、呼び出しができる
    //　Add関数をf_Addに格納
    std::function<int(int, int)> f_Add = Add;
    std::cout << f_Add(15,2) << std::endl;

}
