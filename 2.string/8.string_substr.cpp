#include <iostream>
#include <fstream>
#include <string>

void test01()
{
    // 使用方式
    std::string str = "abcdef";
    std::string subStr = str.substr(1, 3);
    std::cout << "subStr:" << subStr << std::endl;

    // 应用：获取邮件作者名称
    std::string email = "cck@gmail.com";

    int pos = email.find("@");
    std::string name = email.substr(0, pos);
    std::cout << "name:" << name << std::endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
