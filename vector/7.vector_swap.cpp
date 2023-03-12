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
    std::cout << "交换前：" << std::endl;
    printVector(v1);

    std::vector<int> v2;
    for (int i = 0; i < 5; i++)
    {
        v2.push_back((i + 1) * 20);
    }
    printVector(v2);
    std::cout << "交换后：" << std::endl;
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

// swap用途：巧用swap可以收缩内存空间
void test02()
{
    std::vector<int> v;
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
    }
    std::cout << "v的容量是：" << v.capacity() << std::endl;
    std::cout << "v的大小是：" << v.size() << std::endl;

    std::cout << "重新指定大小为3后：" << std::endl;
    v.resize(3);
    std::cout << "v的容量是：" << v.capacity() << std::endl;
    std::cout << "v的大小是：" << v.size() << std::endl;
    std::cout << "用swap收缩：" << std::endl;
    std::vector<int>(v).swap(v);
    std::cout << "v的容量是：" << v.capacity() << std::endl;
    std::cout << "v的大小是：" << v.size() << std::endl;
}
int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}
