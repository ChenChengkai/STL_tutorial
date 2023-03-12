#include <iostream>
#include <vector>

void printVector(std::vector<int> &v)
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// vector容器构造
void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 5; i++)
    {
        v1.push_back((i + 1) * 10);
    }
    // 遍历
    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1.at(i) << " ";
    }
    std::cout << std::endl;

    // 获取第一个元素为：
    std::cout << v1.front() << std::endl;
    // 获取最后一个元素为：
    std::cout << v1.back() << std::endl;
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
