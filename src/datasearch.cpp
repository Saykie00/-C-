#include "datasearch.h"
#include <iostream>
#include <string>
#include <vector>
#include <func.h>


void datasearch_bynumber() {
  std::cout << "请输入要搜索的货物编号" << std::endl;
  int number;
  std::cin >> number;
  for (int i = 0; i < list.size(); i++) {
    if (list[i].number == number) {
      std::cout << "货物编号：" << list[i].number << std::endl;
      std::cout << "货物重量：" << list[i].weight << std::endl;
      std::cout << "货物大小：" << list[i].size << std::endl;
      std::cout << "货物类型：" << list[i].type << std::endl;
      std::cout << "货物名字：" << list[i].Name << std::endl;
      std::cout << "货物所在区域：" << list[i].area << std::endl;
      std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
      std::cout << "货物航班起飞时间：" << list[i].departuretime << std::endl;
      std::cout << "货物目的地：" << list[i].destnation << std::endl;
      std::cout << "货物舱位：" << list[i].booking << std::endl;
    }
  }
  std::cout << "未找到该货物" << std::endl;
}

void datasearch_byname() {
  std::cout << "请输入要搜索的货物名字" << std::endl;
  std::string name;
  std::cin >> name;
  for (int i = 0; i < list.size(); i++) {
    if (list[i].Name == name) {
      std::cout << "货物编号：" << list[i].number << std::endl;
      std::cout << "货物重量：" << list[i].weight << std::endl;
      std::cout << "货物大小：" << list[i].size << std::endl;
      std::cout << "货物类型：" << list[i].type << std::endl;
      std::cout << "货物名字：" << list[i].Name << std::endl;
      std::cout << "货物所在区域：" << list[i].area << std::endl;
      std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
      std::cout << "货物航班起飞时间：" << list[i].departuretime << std::endl;
      std::cout << "货物目的地：" << list[i].destnation << std::endl;
      std::cout << "货物舱位：" << list[i].booking << std::endl;
    }
  }
  std::cout << "未找到该货物" << std::endl;
}

void datasearch_bydestnation() {
  std::cout << "请输入要搜索的货物目的地" << std::endl;
  std::string destnation;
  std::cin >> destnation;
  for (int i = 0; i < list.size(); i++) {
    if (list[i].destnation == destnation) {
      std::cout << "货物编号：" << list[i].number << std::endl;
      std::cout << "货物重量：" << list[i].weight << std::endl;
      std::cout << "货物大小：" << list[i].size << std::endl;
      std::cout << "货物类型：" << list[i].type << std::endl;
      std::cout << "货物名字：" << list[i].Name << std::endl;
      std::cout << "货物所在区域：" << list[i].area << std::endl;
      std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
      std::cout << "货物航班起飞时间：" << list[i].departuretime << std::endl;
      std::cout << "货物目的地：" << list[i].destnation << std::endl;
      std::cout << "货物舱位：" << list[i].booking << std::endl;
    }
  }
  std::cout << "未找到该货物" << std::endl;
}

void datasearch() { /*这是一个函数用来搜索货物的（负责人：张睿洲） */
  std::cout << "要按照何种方式搜索？" << std::endl;
  std::cout << "1.按编号搜索" << std::endl;
  std::cout << "2.按名字搜索" << std::endl;
  std::cout << "3.按目的地搜索" << std::endl;
  int choice;
  std::cin >> choice;
  switch (choice) {
  case 1:
    datasearch_bynumber();
    break;
  case 2:
    datasearch_byname();
    break;
  case 3:
    datasearch_bydestnation();
    break;
  default:
    std::cout << "无效的选择" << std::endl;
    break;
  }
}
