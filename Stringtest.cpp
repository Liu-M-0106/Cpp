#include <iostream>
#include <string>
#include <algorithm>
#include<cctype>

int main() {

// 字符串输入
    // std::string input;
    // std::cout << "请输入一个字符串：";
    // std::cin >> input; // 读取直到第一个空白字符
    // std::cout << "您输入的字符串是：" << input << std::endl;
    // 
    // // 读取整行输入，包括空格
    // std::cin.ignore(); // 清除输入缓冲区中的换行符  
    // std::cout << "请输入一行字符串（可以包含空格）：";
    // std::getline(std::cin, input); // 读取整行输入  
    // std::cout << "您输入的整行字符串是：" << input << std::endl;


// find查找字符串
    // std::string text = "The quick brown fox jumps over the lazy dog.";
    // std::string word = "fox";
    // size_t found = text.find(word);
    // if (found != std::string::npos) {
    //     std::cout << "找到字符串 \"" << word << "\" 在位置 " << found << std::endl;
    // } else {
    //     std::cout << "未找到字符串 \"" << word << "\"" << std::endl;
    // }

// 字符串长度
    // std::string str = "hello world";
    // std::cout << "字符串长度为：" << str.length() << std::endl;  
    // size_t length = str.size(); // 或者使用 str.length()
    // std::cout << "字符串长度为：" << length << std::endl;

// 使用索引访问单个字符
    // std::string str = "ABCDE";
    // // 正向索引
    // for (size_t i = 0; i < str.length(); ++i) {
    //     std::cout << "字符 " << i << ": " << str[i] << std::endl;
    // }
    // //反向遍历
    // for(int i = str.length() - 1; i >= 0 ; i --){
    //     std::cout << "下标为 " << i << "的字符为" << str[i] << std::endl;
    // }

// 转换大小写
    std::string str = "Hello World!";
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    std::cout << "转换后的字符串是：" << str << std::endl;

    return 0;
}