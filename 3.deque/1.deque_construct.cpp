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
    // 1.第一种构造方式，无参构造
    std::deque<int> d1;
    for (int i = 0; i < 5; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    // 2.第二种构造方式，迭代器构造
    std::deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);

    // 3.第三种构造方式，n个元素赋值
    std::deque<int> d3(5, 10);
    printDeque(d3);

    // 4.第四种构造方式，拷贝构造
    std::deque<int> d4(d3);
    printDeque(d4);
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
