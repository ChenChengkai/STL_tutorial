#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    std::string str1;
    str1 = "hello world"; // 1.利用operator= char* 赋初值
    std::cout << "str1:" << str1 << std::endl;

    std::string str2;
    str2 = str1; // 2.利用operator= string 赋初值
    std::cout << "str2:" << str2 << std::endl;

    std::string str3;
    str3 = 'a'; // 3.利用operator= char 赋初值
    std::cout << "str3:" << str3 << std::endl;

    std::string str4;
    str4.assign("hello assign!"); // 4.利用assign char* 赋初值
    std::cout << "str4:" << str4 << std::endl;

    std::string str5;
    str5.assign("hello assign!", 3); // 5.利用assign char* ,n赋初值,取前n个字符
    std::cout << "str5:" << str5 << std::endl;

    std::string str6;
    str6.assign(str5); // 6.利用assign string赋初值
    std::cout << "str6:" << str6 << std::endl;

    std::string str7;
    str7.assign(3, 'a'); // 7.利用assign n,char赋初值
    std::cout << "str7:" << str7 << std::endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
