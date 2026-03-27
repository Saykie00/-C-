#include "datadelete.h"
#include "func.h"
#include <iostream>

void data_delete_bynumber() {
  if (list.empty()) {
    std::cout << "当前没有货物" << std::endl;
    return;
  }
  char choice = 'y';
  while (choice != 'n' && choice != 'N') { // 循环删除，直到用户选择不继续
    int number;
    bool found = false;
    std::cout << "请输入要删除的货物编号" << std::endl;
    std::cin >> number;
    for (int i = 0; i < (int)list.size();
         i++) { // 遍历货物列表，找到编号匹配的货物
      if (list[i].number == number) {
        list.erase(list.begin() + i); // 删除找到的货物
        found = true;
        std::cout << "删除成功" << std::endl;
        break;
      }
    }
    if (!found) { // 未找到编号匹配的货物
      std::cout << "未找到该货物编号" << std::endl;
    }
    std::cout << "是否继续按照编号删除？(Y/n)" << std::endl;
    std::cin >> choice;
  }
  return;
}

void data_delete_byname() {
  if (list.empty()) {
    std::cout << "当前没有货物" << std::endl;
    return;
  }
  int id;
  char choice = 'y';
  while (choice != 'n' && choice != 'N') {
    std::string name;
    bool found = false; // 标记是否找到货物
    int n = 0;          // 记录找到的货物数量
    std::cout << "请输入要删除的货物名称" << std::endl;
    std::cin >> name;
    for (int i = 0; i < (int)list.size(); i++) {
      if (list[i].Name == name) {
        n++;
        std::cout << "##已找到，标号为：[" << i << "]的货物##" << std::endl;
        std::cout << "名称为:" << list[i].Name << std::endl;
        std::cout << "编号为:" << list[i].number << std::endl;
        std::cout << "航班号为:" << list[i].flight << std::endl;
        std::cout << "类型为:" << list[i].type << std::endl;
        std::cout << "目的地为：" << list[i].destnation << std::endl;
        found = true;
      }
    }
    if (!found) {
      std::cout << "未找到该货物名称" << std::endl;
      continue;
    }
    if (n > 1) {
      std::cout << "一共有" << n << "个货物，符合要求" << std::endl;
    }
    std::cout << "输入要删除的货物的标号" << std::endl;
    std::cin >> id;
    if (id < 0 || id >= (int)list.size() ||!(std::cin>>id)) { // 检查标号是否有效
      std::cout << "标号无效,超出范围" << std::endl;
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      continue;
    } else {
      list.erase(list.begin() + id);
      std::cout << "删除成功" << std::endl;
      std::cout << "删除后共有" << list.size() << "个货物" << std::endl;
      std::cout << "是否继续删除？(y/N)" << std::endl;
      std::cin >> choice;
    }
  }
  return;
}

void data_delete_by_area() {
  if (list.empty()) {
    std::cout << "当前没有货物" << std::endl;
    return;
  }
  char choice = 'y';
  while (choice != 'n' && choice != 'N') {
    std::string area;
    bool found = false; // 标记是否找到货物
    int n = 0;          // 记录找到的货物数量
    std::cout << "请输入要删除的货物区域" << area << std::endl;
    std::cin >> area;
    for (int i = 0; i < (int)list.size(); i++) {
      if (list[i].area == area) {
        found = true;
        n++;
        std::cout << "##已找到，货物编号为[" << i << "]##" << std::endl;
        std::cout << "货物区域为:" << list[i].area << std::endl;
        std::cout << "编号为:" << list[i].number << std::endl;
        std::cout << "航班号为:" << list[i].flight << std::endl;
        std::cout << "类型为:" << list[i].type << std::endl;
        std::cout << "目的地为：" << list[i].destnation << std::endl;
      }
    }
    if (found) {
      std::cout << "找到" << n << "个货物" << std::endl;
    } else {
      std::cout << "未找到货物" << std::endl;
    }
    std::cout << "是否删除此区域所有的货物？(y/N)" << std::endl;
    char a = 'N';
    std::cin >> a;
    if (a == 'y' || a == 'Y') {
      for (int i = 0; i < (int)list.size();
           i++) { // 遍历列表，删除所有符合条件的货物
        if (list[i].area == area) {
          list.erase(list.begin() + i);
          i--;
        }
      }
      std::cout << "删除成功" << std::endl;
    } else {
      std::cout << "输入要删除的货物的标号" << std::endl;
      int id;
      if (!(std::cin >> id)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        continue;
      }
      if (id > 0 && id <= (int)list.size()) {
        list.erase(list.begin() + id);
        std::cout << "删除成功" << std::endl;
      } else {
        std::cout << "标号无效,超出范围" << std::endl;
      }
    }
    std::cout << "是否继续删除？(y/N)" << std::endl;
    std::cin >> choice;
  }
  return;
}

void datadelete() {
  char stop = 'y'; // 初始化 stop 为 'y'，表示继续删除
  while (stop != 'n' && stop != 'N') {
    std::cout << "请选择要删除的方式：" << std::endl;
    std::cout << "1.按编号删除" << std::endl;
    std::cout << "2.按名称删除" << std::endl;
    std::cout << "3.按区域删除" << std::endl;
    std::cout << "4.返回上一目录" << std::endl;
    int choice;
    if (!(std::cin >> choice)) {
      std::cout << "输入无效，请重新输入" << std::endl;
      std::cin.clear();
      std::cin.ignore(100, '\n');
      continue; // 继续下一次循环
    }
    switch (choice) {
    case 1:
      data_delete_bynumber(); // 按编号删除的函数
      break;
    case 2:
      data_delete_byname(); // 按名称删除的函数
      break;
    case 3:
      data_delete_by_area(); // 按区域删除的函数
      break;
    case 4:
      return;
    default:
      break;
    }
    std::cout << "是否继续删除？(y/N)" << std::endl;
    std::cin >> stop;
  }
  return;
}
