#include <iostream>
#include <deque>
#include <algorithm>
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
    d1.push_back(5);
    d1.push_back(50);
    d1.push_back(1);
    d1.push_front(100);
    d1.push_front(8);
    d1.push_front(40);
    printDeque(d1);
    // 默认升序
    std::sort(d1.begin(), d1.end(), [](int a, int b)
              { return a > b; });
    printDeque(d1);
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
