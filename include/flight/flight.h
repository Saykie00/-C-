#pragma once
#include "cargodata/func.h"
#include <vector>
#include <string>

struct Package;

struct Flight {
  std::string flight;    // 航班编号
  std::string departure;    // 航班出发地
  std::string destination;    // 航班目的地
  std::string departuretime;  // 航班起飞时间
  double distance;
  std::vector<Package*> packages;
  std::string cargonumber; // 航班内货物编号

};

extern std::vector<Flight> flights;
