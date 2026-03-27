#include "ui/ui.h"
#include <datadelete.h>
#include <datalist.h>
#include <datarewriting.h>
#include <datarw.h>
#include <datasearch.h>
#include <iostream>
#include <packageinput.h>
#include <ui/draw_menu.h>

void ui_init() {
  while (true) {
    draw_menu(); // 这个是那个写UI的函数
    int choice;
    if (!(std::cin >> choice)) { // 这个函数是给choice做输入校验的
      std::cin.clear();          // 清除错误状态
      std::cin.ignore(100, '\n');
      continue;
    }
    if (!(choice >= 1 && choice <= 6)) { // 选择不在1-6范围内，继续循环
      continue;
    }
    switch (choice) {
    case 1:
      packageinput(); // 新建并输入货物数据的函数
      break;
    case 2:
      datalist(); // 显示货物列表的函数
      break;
    case 3:
      datasearch(); // 搜索货物的函数
      break;
    case 4:
      data_rewriting(); // 修改货物数据的函数
      break;
    case 5:
      datadelete(); // 删除货物的函数
      break;
    case 6:
      return; // 退出程序
    }
  }
}
