#include <iostream>
#include <deque>

void printDeque(const std::deque<int> &d)
{
    for (std::deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void test01()
{
    std::deque<int> d1;
    for (int i = 0; i < 5; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);
    // 第一种赋值操作：operator=
    std::deque<int> d2;
    d2 = d1;
    printDeque(d2);

    // 第二种赋值方式：assign,迭代器
    std::deque<int> d3;
    d3.assign(d1.begin(), d1.end());
    printDeque(d3);

    // 第三种赋值方式 n个元素赋初值
    std::deque<int> d4;
    d4.assign(5, 6);
    printDeque(d4);
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
