#include "ui/ui_flight.h"
#include "flight/flightcargolist.h"
#include "flight/flightdelete.h"
#include "flight/flightlist.h"
#include "flight/flightrewrite.h"
#include "flight/flightsearch.h"
#include "flight/flightwrite.h"
#include "flight/flightcargohold.h"
#include "ui/draw_flightmenu.h"

#include <iostream>

void ui_flight() {
  while (true) {
    draw_flight_menu(); // 这个是那个写UI的函数
    int choice;
    if (!(std::cin >> choice)) { // 这个函数是给choice做输入校验的
      std::cin.clear();          // 清除错误状态
      std::cin.ignore(100, '\n');
      continue;
    }
    switch (choice) {
    case 1:
      flightWrite(); // 新建并输入货物数据的函数
      break;
    case 2:
      display_flight(); // 显示货物列表的函数
      break;
    case 3:
      search_flight(); // 搜索货物的函数
      break;
    case 4:
      flight_rewrite(); // 修改货物数据的函数
      break;
    case 5:
      flight_cargo_list(); // 查看航班内货物信息的函数
      break;
    case 6:
      flight_cargo_hold(); // 查看航班内货物占用情况的函数
      break;
    case 7:
      flight_delete(); // 删除货物的函数
      break;
    case 8:
      return; // 退出程序
    default:
      break;
      ;
    }
  }
}
