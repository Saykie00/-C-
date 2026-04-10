#pragma once
#include <string>
#include <vector>
#include "flight/flight.h"

struct Flight;

struct Package { // 这是货物的数据类型
  int number;    // 货物编号
  double weight; // 货物重量，单位为千克
  // 货物的大小，格式为长，宽，高，数据之间用“X”(大写)隔开，单位为厘米，例如17(长)X17(宽)X17(高)
  std::string size;
  std::string type;   // 货物类型
  std::string Name;   // 货物名字
  Flight* flightPtr = nullptr;
  std::string flight; // 航班号
  std::string area;
  char booking;              // E(经济舱) N（普通舱） V（优先舱）
  double price;
  std::string cname;
  std::string cid;
};

extern std::vector<Package> list;    // 声明存在一个存储货物信息的全局变量
