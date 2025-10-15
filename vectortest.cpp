#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    
// push_back, pop_back, insert, erase, clear等操作
    // std::vector<int> vec;
    // // 使用push_back添加元素
    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);
    // std::cout << "After push_back: ";
    // for(auto num : vec) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl; // 输出: 10 20 30 
    // // 使用pop_back移除最后一个元素
    // vec.pop_back();
    // std::cout << "After pop_back: ";
    // for(auto num : vec) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl; // 输出: 10 20 
    // // 在第二个位置插入25
    // vec.insert(vec.begin() + 1, 25);
    // std::cout << "After insert: ";
    // for(auto num : vec) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl; // 输出: 10 25 20 
    // // 删除第二个元素（25）
    // vec.erase(vec.begin() + 1);
    // std::cout << "After erase: ";
    // for(auto num : vec) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl; // 输出: 10 20 
    // // 清空向量
    // vec.clear();
    // std::cout << "After clear, size: " << vec.size() << std::endl; // 输出: 0
    

// operator[]和at()访问元素
    // std::vector<std::string> fruits = {"Apple", "Banana", "Cherry"};
    // // 使用operator[]访问元素
    // std::cout << "First fruit: " << fruits[0] << std::endl; // 输出: Apple
    // // 使用at()访问元素
    // try {
    //     std::cout << "Second fruit: " << fruits.at(1) << std::endl; // 输出: Banana
    //     std::cout << "Invalid fruit: " << fruits.at(5) << std::endl; // 抛出异常
    // }
    // catch(const std::out_of_range& e) {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }
    // // try-catch块捕获异常，防止程序崩溃
    // // const std::out_of_range& e = std::out_of_range("Index out of range");
    // // cerr 
    // // 使用front()和back()
    // std::cout << "Front: " << fruits.front() << std::endl; // 输出: Apple
    // std::cout << "Back: " << fruits.back() << std::endl;   // 输出: Cherry

// for循环遍历及迭代器
//     std::cout << "Vector Iteration Examples:" << std::endl;
// 
//     // 创建一个整数向量
//    std::vector<int> numbers = {1, 2, 3, 4, 5};
    // 
//     // 使用范围 for 循环
//     std::cout << "Using range-based for loop: ";
//     for(auto num : numbers) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;
    // 
//     // 使用传统 for 循环
//     std::cout << "Using traditional for loop: ";
//     for(size_t i = 0; i < numbers.size(); ++i) {
//         std::cout << numbers[i] << " ";
//     }
//     std::cout << std::endl;
    // 
//     // 使用迭代器
//     std::cout << "Using iterators: ";
//     for(auto it = numbers.begin(); it != numbers.end(); ++it) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;

// 创建矩阵
    // std::vector<std::vector<int>> matrix(3, std::vector<int>(3, 0));
    // 
    // 
    // // 填充矩阵
    // for(auto &row : matrix) {
    //     for(auto &elem : row) {
    //         elem = 1; // 将每个元素设置为1
    //     }
    // }
    // // 打印矩阵
    // std::cout << "Matrix:" << std::endl;
    // for(const auto &row : matrix) {
    //     for(const auto &elem : row) {
    //         std::cout << elem << " ";
    //     }
    //     std::cout << std::endl;
    // }

// 使用sort对向量进行排序
    std::vector<int> vec = {5, 3, 8, 6, 2};
    std::cout << "Before sort: ";
    for(auto num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::sort(vec.begin(), vec.end());
    std::cout << "After sort: ";
    for(auto num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 传入lambda表达式进行自定义排序
    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b; // 降序排序
    });
    std::cout << "After custom sort: ";
    for(auto num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
// 使用reverse对向量进行反转
    std::reverse(vec.begin(), vec.end());
    std::cout << "After reverse: ";
    for(auto num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}