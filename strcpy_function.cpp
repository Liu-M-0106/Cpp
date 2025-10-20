#include <iostream>

// 自定义的字符串复制函数
char* my_strcpy(char* dest, const char* src) {
    // 使用一个指针遍历源字符串
    char* original_dest = dest; // 保存目标字符串的起始地址

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // 在目标字符串末尾添加结束符

    return original_dest;
}

int main() {
    const char* source = "Hello, World!";
    char destination[50]; // 确保目标有足够的空间

    my_strcpy(destination, source);

    std::cout << "Source: " << source << std::endl;
    std::cout << "Destination: " << destination << std::endl;

    return 0;
}