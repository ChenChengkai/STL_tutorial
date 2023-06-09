#include <iostream>
#include <vector>
#include <algorithm>
void myPrint(int val)
{
    std::cout << val << " ";
}
void test01()
{
    std::vector<int> v;
    // 插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // 第一种遍历方式
    std::vector<int>::iterator itBegin = v.begin(); // 起始迭代器，指向容器中第一个元素
    std::vector<int>::iterator itEnd = v.end();     // 结束迭代器，指向容器中最后一个元素的下一个位置
    while (itBegin != itEnd)
    {
        std::cout << *itBegin << " ";
        itBegin++;
    }
    std::cout << std::endl;

    // 第二种遍历方式
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 第三种遍历方式
    std::for_each(v.begin(), v.end(), myPrint);
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
