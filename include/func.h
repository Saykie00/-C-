#pragma once
#include <string>
#include <vector>

struct Package { // 这是货物的数据类型
  int number;    // 货物编号
  double weight; // 货物重量，单位为千克
  // 货物的大小，格式为长，宽，高，数据之间用“X”(大写)隔开，单位为厘米，例如17(长)X17(宽)X17(高)
  std::string size;
  std::string type;   // 货物类型
  std::string Name;   // 货物名字
  std::string area;   // 货物所在区域，格式为A01,A02...B01,B02....
  std::string flight; // 货物将被分配的航班号
  std::string departuretime; // 货物航班起飞时间
  std::string destnation;    // 货物目的地
  char booking;              // E(经济舱) N（普通舱） V（优先舱）
};

std::vector<Package> list;
