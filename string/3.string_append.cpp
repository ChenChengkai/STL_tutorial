#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    std::string str1 = "我"; // 1. operator+= char* 拼接
    str1 += "爱玩游戏";
    std::cout << "str1=" << str1 << std::endl;

    // 2. operator+= char 拼接
    str1 += ':';
    std::cout << "str1=" << str1 << std::endl;

    // 3. operator+= string 拼接
    std::string str2("三国杀");
    str1 += str2;
    std::cout << "str1=" << str1 << std::endl;

    // 4. append char* 拼接
    std::string str3("I");
    str3.append(" love");
    std::cout << "str3=" << str3 << std::endl;

    // 5. append n,char* 拼接
    str3.append(" gameabc", 5);
    std::cout << "str3=" << str3 << std::endl;

    // 6. append string 拼接
    str3.append(str2);
    std::cout << "str3=" << str3 << std::endl;

    // 7. append string，i,n 拼接
    std::string str4("san guo sha");
    str3.append(str4, 0, 8);
    std::cout << "str3=" << str3 << std::endl;
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
