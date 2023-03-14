#include <iostream>
#include <stack>

void test01()
{
    // 先进后出
    std::stack<int> s;
    // 入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    while (!s.empty())
    {
        std::cout << "栈顶元素：" << s.top() << std::endl;
        s.pop();
    }
    std::cout << "栈的大小：" << s.size() << std::endl;
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
