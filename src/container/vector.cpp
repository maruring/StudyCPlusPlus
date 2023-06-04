#include <vector>

// ベクタ　→　便利な動的配列クラス
// 配列サイズを自由に増減できる。を参照・代入することはもちろん、サイズ情報等の取得やデータの挿入削除なども可能

int main()
{
    std::vector<int>x = {0,1,2,3,4};
    std::cout << x.size() << std::endl;
    
    // 末尾に挿入可能(サイズが変化する)
    x.emplace_back(6);
    std::cout << x.size() << std::endl;

    // 末尾から要素を削除
    x.pop_back();

    // 配列の先頭のポインタを取得
    auto px = x.data();
    auto num = *px;
    std::cout << num << std::endl;
}