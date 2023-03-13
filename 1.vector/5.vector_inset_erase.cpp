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
    printVector(v1);

    // 尾删
    v1.pop_back();
    printVector(v1);

    // 插入 第一参数是迭代器
    v1.insert(v1.begin(), 100);
    printVector(v1);
    // 插入 第一参数是迭代器,插入n个元素
    v1.insert(v1.begin(), 2, 1000);
    printVector(v1);

    // 删除
    v1.erase(v1.begin());
    printVector(v1);

    // 删除
    // v1.erase(v1.begin(), v1.end());
    v1.clear();
    printVector(v1);
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
