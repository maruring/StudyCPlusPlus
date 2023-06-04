#include <utility>
#include <tuple>

//　ペア
// ペアは2つの値をひとまとめにして扱うことができる型です。 
// 要素数が2つのタプルと同じように扱うことができます。

int main()
{
    std::pair<std::string, int>person {"Bob", 20};

    //要素参照
    std::get<0>(person);
    std::cout << person.first << std::endl;

    // std::tie() を使うとペアの要素を個別の変数にまとめて代入することができます。
    std::string name;
    int age;
    std::tie(name, age) = person;
}