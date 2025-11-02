// #include <iostream>
// #include <string>
// using namespace std;

// // 定义一个学生结构体
// struct Student {
//     int id;         // 学号
//     string name;    // 姓名
//     float score;    // 成绩
// };

// int main() {
//     Student students[] = {
//         {101, "张三", 92.5f},
//         {102, "李四", 88.0f},
//         {103, "王五", 95.3f}
//     };
//     int count = sizeof(students) / sizeof(students[0]);  // 计算数组长度

//     for (Student *p= students; p<students+count; p++) {
//         //     // 通过指针访问结构体成员（使用 -> 运算符）
//         cout << "学号：" << p->id << endl;       // 指针访问id
//         cout << "姓名：" << p->name << endl;     // 指针访问name
//         cout << "成绩：" << p->score << endl;    // 指针访问score
//         cout << "---------------------" << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

struct student {
  int num;
  string name;
  float grade;
};


int main() {
// 注意初始化结构体方法
  student students[3] {
    {1, "张三", 55.6},
    {2, "Kusa", 88.9},
    {3,"kda",555.8}
  };
  int count = sizeof(students) / sizeof(students[0]);
  // 注意两种不同的for循环遍历
  for (auto &p : students) {
    cout << p.num << endl;
    cout << p.name << endl;
    cout << p.grade << endl;
  }


  return 0;
}