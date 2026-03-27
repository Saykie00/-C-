#include "datarewriting.h"
#include <func.h>
#include <iostream>

void data_rewriting() {
  int number;
  bool found = false;
  int it;
  while (!found) {
    std::cout << "请输入需要改写的货物编号" << std::endl;
    if (!(std::cin >> number)) { // 用户输入货物编号
        std::cin.clear();
        std::cin.ignore(100000000000, '\n');
      continue;
    }
    for (int i = 0; i < (int)list.size(); i++) {
      if (list[i].number == number) {
        it = i;
        found = true;
        std::cout << "已找到货物" << std::endl;
        std::cout << "[1]货物名称：" << list[i].Name << std::endl;
        std::cout << "[2]货物类型：" << list[i].type << std::endl;
        std::cout << "[3]货物重量：" << list[i].weight << std::endl;
        std::cout << "[4]货物大小：" << list[i].size << std::endl;
        std::cout << "[5]货物所在区域：" << list[i].area << std::endl;
        std::cout << "[6]货物被分配到的航班号：" << list[i].flight << std::endl;
        std::cout << "[7]货物航班起飞时间：" << list[i].departuretime
                  << std::endl;
        std::cout << "[8]货物目的地：" << list[i].destnation << std::endl;
        std::cout << "[9]货物等级：" << list[i].booking << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "请输入需要修改的货物信息" << std::endl;
        break;
      } // 找到货物后跳出循环
    }
    if (!found) {
      std::cout << "未找到货物，请检查货物编号是否存在(((ﾟДﾟ;)))"
                << std::endl; // 如果遍历整个数据结构后没有找到，直接返回
      std::cout << "是否重新输入？(y/n)" << std::endl;
      char stop;
      std::cin >> stop;
      if (stop == 'n' || stop == 'N') {
        return;
      }
      continue;
    }
  }
  int option;
  char stop = 'y';
  while (stop == 'y' || stop == 'Y') {
    std::cout << "[1]名称 [2]类型 [3]重量 [4]大小 [5]区域 [6]航班 [7]时间 "
                 "[8]目的地 [9]货物等级"
              << std::endl;
    if (!(std::cin >> option)) {
      std::cout << "输入错误，请重新输入(((ﾟДﾟ;)))" << std::endl;
      std::cin.clear();
      std::cin.ignore(100, '\n');
      continue;
    }
    switch (option) { // 根据用户选择修改货物信息
    case 1:
      std::cout << "请输入货物名称" << std::endl;
      std::cout << "当前名称：" << list[it].Name << std::endl;
      std::cin >> list[it].Name;
      if (list[it].Name.empty()) {
        std::cout << "输入为空，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      for (int i = 0; i < (int)list.size(); i++) {
        if (list[i].Name == list[it].Name) {
          std::cout << "货物名字相同" << std::endl;
          std::cout << "请重新输入" << std::endl;
          list[it].Name.clear();
          continue;
        }
      }
      break;
    case 2:
      std::cout << "请输入货物类型" << std::endl;
      std::cout << "当前类型：" << list[it].type << std::endl;
      std::cin >> list[it].type;
      if (list[it].type.empty()) {
        std::cout << "输入为空，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      break;
    case 3:
      std::cout << "请输入货物重量" << std::endl;
      std::cout << "当前重量：" << list[it].weight << std::endl;
      std::cin >> list[it].weight;
      if (list[it].weight <= 0) {
        std::cout << "输入无效，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      break;
    case 4:
      std::cout << "请输入货物大小" << std::endl;
      std::cout << "当前大小：" << list[it].size << std::endl;
      std::cin >> list[it].size;
      if (list[it].size.empty()) {
        std::cout << "输入为空，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      break;
    case 5:
      std::cout << "请输入货物所在区域" << std::endl;
      std::cout << "当前区域：" << list[it].area << std::endl;
      std::cin >> list[it].area;
      if (list[it].area.empty()) {
        std::cout << "输入为空，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      break;
    case 6:
      std::cout << "请输入货物被分配到的航班号" << std::endl;
      std::cout << "当前航班号：" << list[it].flight << std::endl;
      std::cin >> list[it].flight;
      if (list[it].flight.empty()) {
        std::cout << "输入为空，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      break;
    case 7:
      std::cout << "请输入货物航班起飞时间" << std::endl;
      std::cout << "当前起飞时间：" << list[it].departuretime << std::endl;
      std::cin >> list[it].departuretime;
      if (list[it].departuretime.empty()) {
        std::cout << "输入为空，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      break;
    case 8:
      std::cout << "请输入货物目的地" << std::endl;
      std::cout << "当前目的地：" << list[it].destnation << std::endl;
      std::cin >> list[it].destnation;
      if (list[it].destnation.empty()) {
        std::cout << "输入为空，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      break;
    case 9:
      std::cout << "请输入货物等级" << std::endl;
      std::cout << "当前等级：" << list[it].booking << std::endl;
      std::cin >> list[it].booking;
      if (list[it].booking != 'E' && list[it].booking != 'N' &&
          list[it].booking != 'V') {
        std::cout << "输入无效，改写失败" << std::endl;
        std::cout << "请重新输入" << std::endl;
        continue;
      }
      break;
    default:
      std::cout << "无效选项" << std::endl;
      break;
    }
    std::cout << "是否继续该信息的改写？(Y/N)" << std::endl;
    std::cin >> stop;
    if (stop == 'n' || stop == 'N') {
      return;
    }
  }
}
