#include "flight/flight.h"
#include "flight/flightwrite.h"
#include <iostream>

void flightWrite() {
  Flight tmp = {};
  while (true) {
    int choice = 0;
    system("clear");
    std::cout << "请选择要输入的信息：" << std::endl;
    std::cout << "1. 航班号  " << tmp.flight << std::endl;
    std::cout << "2. 起飞时间" << tmp.departuretime << std::endl;
    std::cout << "3. 出发地  " << tmp.departure << std::endl;
    std::cout << "4. 目的地  " << tmp.destination << std::endl;
    std::cout << "5. 距离    " << tmp.distance << std::endl;
    std::cout << "6. 保存" << std::endl;
    std::cout << "7. 不保存直接退出" << std::endl;
    std::cin >> choice;
    switch (choice){
    case 1:
      std::cout << "输入航班号： " << std::endl;
      std::cin >> tmp.flight;
      break;
    case 2:
      std::cout << "输入起飞时间： " << std::endl;
      std::cin >> tmp.departuretime;
      break;
    case 3:
      std::cout << "输入出发地： " << std::endl;
      std::cin >> tmp.departure;
      break;
    case 4:
      std::cout << "输入目的地： " << std::endl;
      std::cin >> tmp.destination;
      break;
    case 5:
      std::cout << "输入距离： " << std::endl;
      if (!(std::cin >> tmp.distance)) {
        std::cin.clear();
        std::cin.ignore(1000000, '\n');
        std::cout << "请输入有效值" << std::endl;
        continue;
      }
      break;
    case 6:
        flights.push_back(tmp);
        return;
    case 7:   //不保存直接退出
        return;
    default:
      continue;
    }
  }
}
