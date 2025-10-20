#include <iostream>

// 自定义的字符串连接函数
char* my_strcat(char* dest, const char* src) {
    char *a = dest;
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    

    *dest = '\0';
    return a;
    
    // 在此实现函数逻辑
}

int main() {
    char destination[100] = "Hello, "; // 初始内容
    const char* source = "World!";

    my_strcat(destination, source);

    std::cout << "After concatenation: " << destination << std::endl;

    return 0;
}