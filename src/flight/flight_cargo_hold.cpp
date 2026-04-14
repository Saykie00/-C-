#include "flight/flight.h"
#include "flight/flightcargohold.h"
#include <iostream>
#include <string>

void flight_cargo_hold() {
  while (true) {
    std::cout << "请输入要查看的航班名，输入exit退出" << std::endl;
    for (int i = 0; i < (int)flights.size(); ++i) {
      std::cout << "[" << i + 1 << "]. " << "航班名：" << flights[i].flight
                << std::endl;
      std::cout << "出发地：" << flights[i].departure << " \n目的地："
                << flights[i].destination << std::endl;
      std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
    }
    std::string flight;
    std::cout << "输入：";
    std::cin >> flight;
    if (flight == "exit") {
      return;
    }
    int choice = 0;
    while (true) {
      std::cout << "请输入数字以选择查看区域：\n"
                << "1. A区  2. B区  3. C区  4. D区  5. 退出" << std::endl;
      std::cin >> choice;
      switch (choice) {
      case 1: {
        int foundA = 0;
        for (int i = 0; i < (int)flights.size(); ++i) {
          if (flights[i].flight == flight) {
            for (int j = 1; j <= 99; j++) {
              std::string ft;
              if (j < 10)
                ft = "A0" + std::to_string(j);
              else {
                ft = "A" + std::to_string(j);
              }
              for (int k = 0; k < (int)flights[i].packages.size(); k++) {
                if (flights[i].packages[k]->area == ft)
                  foundA += 1;
              }
            }
          } else if (flights[i].flight != flight) {
            std::cout << "找不到名为" << flight << "的航班，输入任意值退出"
                      << std::endl;
            std::cin >> flight;
            break;
          }
        }
        std::cout << "A01~A99 共有 " << foundA << " 个货物\n"<< "还有" << 99 - foundA << "个空位\n"
                  << "使用率为：" << foundA / 99.0 * 100 << "%" << std::endl;
        break;
      }
      case 2: {
        int foundB = 0;
        for (int i = 0; i < (int)flights.size(); ++i) {
          if (flights[i].flight == flight) {
            for (int j = 1; j <= 99; j++) {
              std::string ft;
              if (j < 10)
                ft = "B0" + std::to_string(j);
              else
                ft = "B" + std::to_string(j);
              for (int k = 0; k < (int)flights[i].packages.size(); k++) {
                if (flights[i].packages[k]->area == ft)
                  foundB += 1;
              }
            }
          } else if (flights[i].flight != flight) {
            std::cout << "找不到名为" << flight << "的航班，输入任意值退出"
                      << std::endl;
            std::cin >> flight;
            break;
          }
        }
        std::cout << "B01~B99 共有 " << foundB << " 个货物\n"
                  << "还有" << 99 - foundB << "个空位\n"
                  << "使用率为：" << foundB / 99.0 * 100 << "%" << std::endl;
        break;
      }
      case 3: {
        int foundC = 0;
        for (int i = 0; i < (int)flights.size(); ++i) {
          if (flights[i].flight == flight) {
            for (int j = 1; j <= 99; j++) {
              std::string ft;
              if (j < 10)
                ft = "C0" + std::to_string(j);
              else
                ft = "C" + std::to_string(j);
              for (int k = 0; k < (int)flights[i].packages.size(); k++) {
                if (flights[i].packages[k]->area == ft)
                  foundC += 1;
              }
            }
          } else if (flights[i].flight != flight) {
            std::cout << "找不到名为" << flight << "的航班，输入任意值退出"
                      << std::endl;
            std::cin >> flight;
            break;
          }
        }
        std::cout << "C01~C99 共有 " << foundC << " 个货物\n"
                  << "还有" << 99 - foundC << "个空位\n"
                  << "使用率为：" << foundC / 99.0 * 100 << "%" << std::endl;
        break;
      }
      case 4: {
        int foundD = 0;
        for (int i = 0; i < (int)flights.size(); ++i) {
          if (flights[i].flight == flight) {
            for (int j = 1; j <= 99; j++) {
              std::string ft;
              if (j < 10)
                ft = "D0" + std::to_string(j);
              else
                ft = "D" + std::to_string(j);
              for (int k = 0; k < (int)flights[i].packages.size(); k++) {
                if (flights[i].packages[k]->area == ft)
                  foundD += 1;
              }
            }
          } else if (flights[i].flight != flight) {
            std::cout << "找不到名为" << flight << "的航班，输入任意值退出"
                      << std::endl;
            std::cin >> flight;
            break;
          }
        }
        std::cout << "D01~D99 共有 " << foundD << " 个货物\n"
                  << "还有" << 99 - foundD << "个空位\n"
                  << "使用率为：" << foundD / 99.0 * 100 << "%" << std::endl;
        break;
      }
      case 5: {
        return;
      }
      }
    }
  }
}
