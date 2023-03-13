#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    std::string s1; // 1.默认构造
    const char *str = "hello world!";
    std::string s2(str); // 2.字符串初始化
    std::cout << s2 << std::endl;
    std::string s3(s2); // 3.拷贝构造
    std::cout << s3 << std::endl;
    std::string s4(10, 'a'); // 4.n个字符初始化
    std::cout << s4 << std::endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
