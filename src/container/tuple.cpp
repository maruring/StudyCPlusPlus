#include <tuple>

// タプルは複数の値をひとまとめにして扱うことができる型です

int main()
{
    std::tuple<std::string, int> person {"Tanaka", 20};

    // 要素参照
    std::cout << std::get<0>(person);

    // std::tie()でタプルの要素を個別の変数にまとめて代入することができる
    std::tuple<std::string, int, std::string> dog("John", 20, "JP");
    std::string name;
    int age;
    std::string from;
    std::tie(name, age, from) = dog;

}