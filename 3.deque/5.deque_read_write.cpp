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
    for (int i = 0; i < d1.size(); i++)
    {
        std::cout << d1.at(i) << " " << d1[i] << std::endl;
    }
    std::cout << "第一个元素为：" << d1.front() << std::endl;
    std::cout << "第二个元素为：" << d1.back() << std::endl;
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
