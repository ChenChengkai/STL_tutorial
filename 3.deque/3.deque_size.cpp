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
    if (d1.empty())
    {
        std::cout << "d1为空！" << std::endl;
    }
    else
    {
        std::cout << "d1不为空！" << std::endl;
        std::cout << "d1的大小为：" << d1.size() << std::endl;
    }
    // 重新指定大小
    d1.resize(8);
    printDeque(d1);
    d1.resize(10, 2);
    printDeque(d1);
    d1.resize(3);
    printDeque(d1);
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
