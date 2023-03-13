#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// find and rfind
void test01()
{
    std::string str1("abcdefgde");
    int pos = str1.find("de");
    if (pos == -1)
    {
        std::cout << "未找到字符串" << std::endl;
    }
    else
    {
        std::cout << "pos=" << pos << std::endl;
    }
    // find是从左往右查，rfind是从右往左查
    pos = str1.rfind("de");
    if (pos == -1)
    {
        std::cout << "未找到字符串" << std::endl;
    }
    else
    {
        std::cout << "pos=" << pos << std::endl;
    }
}
// replace
void test02()
{
    std::string str1("abcdefgde");
    str1.replace(1, 3, "1234"); // 把bcd替换为1234
    std::cout << "str1:" << str1 << std::endl;
}

int main(int argc, char const *argv[])
{
    std::cout << "test 01: string find and rfind" << std::endl;
    test01();
    std::cout << "test 02: string repace" << std::endl;
    test02();
    return 0;
}
