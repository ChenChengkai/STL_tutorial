#include <iostream>
#include <vector>
#include <algorithm>
// 容器嵌套容器

void test01()
{
    std::vector<std::vector<int>> v;
    // 创建小容器
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;
    std::vector<int> v4;
    // 向小容器中添加数据
    for (int i = 0; i < 4; i++)
    {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
    }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    for (std::vector<std::vector<int>>::iterator it = v.begin(); it != v.end(); it++)
    {
        //*it的类型是std::vector<int>
        for (std::vector<int>::iterator vit = it->begin(); vit != it->end(); vit++)
        {
            //*vit的类型是int
            std::cout << *vit << " ";
        }
        std::cout << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
