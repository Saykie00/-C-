#include "flight/flight.h"
#include "flight/flightsearch.h"
#include <iostream>

void search_flight_by_departure() {
  while (true) {
    bool found = false;
    std::cout << "输入出发地： ";
    std::string flight;
    std::cin >> flight;
    int f = 0;
    for (int i = 0; i < (int)flights.size(); i++) {
      if (flights[i].departure == flight) {
        f = f + 1;
        found = true;
      } else if (f == f + 1 && f > 1) {
        std::cout << "-----------\n"
                  << "找到多个航班，此航班索引为：" << i << std::endl;
        std::cout << "航班号：" << flights[i].flight << std::endl;
        std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
        std::cout << "出发地：" << flights[i].departure << std::endl;
        std::cout << "目的地：" << flights[i].destination << std::endl;
        std::cout << "距离：" << flights[i].distance << "\n"
                  << "-------------" << std::endl;
      } else if (f == 1) {
        std::cout << "航班号：" << flights[i].flight << std::endl;
        std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
        std::cout << "出发地：" << flights[i].departure << std::endl;
        std::cout << "目的地：" << flights[i].destination << std::endl;
        std::cout << "距离：" << flights[i].distance << "\n"
                  << "-------------" << std::endl;
      }
    }
    if (!found) {
      std::cout << "没有找到航班。" << std::endl;
      std::cout << "输入任意值返回" << std::endl;
      int option = 0;
      std::cin >> option;
      return;
    } else if (found) {
      std::cout << "找到" << f << "条航班" << std::endl;
      std::cout << "输入任意值返回" << std::endl;
      int option = 0;
      std::cin >> option;
      return;
    }
  }
}

void search_flight_by_destination() {
  while (true) {
    bool found = false;
    std::cout << "输入目的地： ";
    std::string flight;
    std::cin >> flight;
    int f = 0;
    for (int i = 0; i < (int)flights.size(); i++) {
      if (flights[i].destination == flight) {
        f = f + 1;
        found = true;
      } else if (f == f + 1 && f > 1) {
        std::cout << "-----------\n"
                  << "找到多个航班，此航班索引为：" << i << std::endl;
        std::cout << "航班号：" << flights[i].flight << std::endl;
        std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
        std::cout << "出发地：" << flights[i].departure << std::endl;
        std::cout << "目的地：" << flights[i].destination << std::endl;
        std::cout << "距离：" << flights[i].distance << "\n"
                  << "-------------" << std::endl;
      } else if (f == 1) {
        std::cout << "航班号：" << flights[i].flight << std::endl;
        std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
        std::cout << "出发地：" << flights[i].departure << std::endl;
        std::cout << "目的地：" << flights[i].destination << std::endl;
        std::cout << "距离：" << flights[i].distance << "\n"
                  << "-------------" << std::endl;
      }
    }
    if (!found) {
      std::cout << "没有找到航班。" << std::endl;
      std::cout << "输入任意值返回" << std::endl;
      int option = 0;
      std::cin >> option;
      return;
    } else if (found) {
      std::cout << "找到" << f << "条航班" << std::endl;
      std::cout << "输入任意值返回" << std::endl;
      int option = 0;
      std::cin >> option;
      return;
    }
  }
}

void search_flight_by_flight() {
  while (true) {
    bool found = false;
    std::cout << "输入航班号： ";
    std::string flight;
    std::cin >> flight;
    int f = 0;
    for (int i = 0; i < (int)flights.size(); i++) {
      if (flights[i].flight == flight) {
        f = f + 1;
        found = true;
      } else if (f == f + 1 && f > 1) {
        std::cout << "-----------\n"
                  << "找到多个航班，此航班索引为：" << i << std::endl;
        std::cout << "航班号：" << flights[i].flight << std::endl;
        std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
        std::cout << "出发地：" << flights[i].departure << std::endl;
        std::cout << "目的地：" << flights[i].destination << std::endl;
        std::cout << "距离：" << flights[i].distance << "\n"
                  << "-------------" << std::endl;
      } else if (f == 1) {
        std::cout << "航班号：" << flights[i].flight << std::endl;
        std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
        std::cout << "出发地：" << flights[i].departure << std::endl;
        std::cout << "目的地：" << flights[i].destination << std::endl;
        std::cout << "距离：" << flights[i].distance << "\n"
                  << "-------------" << std::endl;
      }
    }
    if (!found) {
      std::cout << "没有找到航班。" << std::endl;
      std::cout << "输入任意值返回" << std::endl;
      int option = 0;
      std::cin >> option;
      return;
    } else if (found) {
      std::cout << "找到" << f << "条航班" << std::endl;
      std::cout << "输入任意值返回" << std::endl;
      int option = 0;
      std::cin >> option;
      return;
    }
  }
}

void search_flight() {
  while (true) {
    int choice = 0;
    std::cout << "从什么找：" << std::endl;
    std::cout << "1. 航班号" << std::endl;
    std::cout << "2. 出发地" << std::endl;
    std::cout << "3. 目的地" << std::endl;
    std::cout << "4. 返回" << std::endl;
    std::cin >> choice;
    switch (choice) {
    case 1:
      search_flight_by_flight();
      break;
    case 2:
      search_flight_by_departure();
      break;
    case 3:
      search_flight_by_destination();
      break;
    case 4:
      return;
    default:
      break;
    }
  }
}
