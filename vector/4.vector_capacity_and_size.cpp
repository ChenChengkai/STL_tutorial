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
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    if (v1.empty())
    {
        std::cout << "v1为空！" << std::endl;
    }
    else
    {
        std::cout << "v1不为空！" << std::endl;
        std::cout << "v1的容量为：" << v1.capacity() << std::endl;
        std::cout << "v1的大小为：" << v1.size() << std::endl;
    }

    // 重新指定大小
    v1.resize(15);
    printVector(v1); // 如果指定比之前长了，需要用0填充，也可以将0改为其他数值
    std::cout << "v1的容量为：" << v1.capacity() << std::endl;
    std::cout << "v1的大小为：" << v1.size() << std::endl;
    v1.resize(5);
    printVector(v1); // 如果比之前短了，则删除多余的
    std::cout << "v1的容量为：" << v1.capacity() << std::endl;
    std::cout << "v1的大小为：" << v1.size() << std::endl;
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
