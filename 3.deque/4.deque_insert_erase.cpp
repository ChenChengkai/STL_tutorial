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
    // 尾插
    d1.push_back(10);
    d1.push_back(20);
    // 头插入
    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);

    // 尾删
    d1.pop_back();
    printDeque(d1);
    d1.pop_front();
    printDeque(d1);
}
void test02()
{
    std::deque<int> d1;
    // 尾插
    d1.push_back(10);
    d1.push_back(20);
    // 头插入
    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);

    // insert插入
    d1.insert(d1.begin(), 1000);
    printDeque(d1);
    d1.insert(d1.begin(), 2, 10000);
    printDeque(d1);

    // 按照区间进行插入
    std::deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d1.insert(d1.begin(), d2.begin(), d2.end());
    printDeque(d1);
}
void test03()
{
    std::deque<int> d1;
    // 尾插
    d1.push_back(10);
    d1.push_back(20);
    // 头插
    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);

    std::deque<int>::iterator it = d1.begin();
    it++;
    d1.erase(it);
    printDeque(d1);

    // 按照区间删除
    // d1.erase(d1.begin(), d1.end());
    d1.clear();
    printDeque(d1);
}
int main(int argc, char const *argv[])
{
    test01();
    test02();
    test03();
    return 0;
}
