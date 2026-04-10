#include "flight/flightrewrite.h"
#include "flight/flight.h"
#include <iostream>

void flight_rewrite_bydeparture() {
    while (true) {
        bool found = false;
        bool multiple = false;
        std::cout << "输入出发地： ";
        std::string departure;
        std::cin >> departure;
        int it = 0 ;
        for (int i = 0, f = 0; i < (int)flights.size(); i++) {
            if (flights[i].departure == departure) {
                f=f+1;
                found = true;
            }else if (f == f+1 && f > 1) {
                std::cout <<"-----------\n"<< "找到多个航班，此航班索引为：" << i << std::endl;
                std::cout << "航班号：" << flights[i].flight << std::endl;
                std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
                std::cout << "出发地：" << flights[i].departure << std::endl;
                std::cout << "目的地：" << flights[i].destination << std::endl;
                std::cout << "距离：" << flights[i].distance << "\n" << "-------------" <<std::endl;
                multiple = true;
            }else if (f==1) {
                std::cout << "航班号：" << flights[i].flight << std::endl;
                std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
                std::cout << "出发地：" << flights[i].departure << std::endl;
                std::cout << "目的地：" << flights[i].destination << std::endl;
                std::cout << "距离：" << flights[i].distance << "\n" << "-------------" <<std::endl;
            }
        }
        if (!found) {
            std::cout << "没有找到航班。" << std::endl;
            std::cout << "输入任意值返回" << std::endl;
            int option = 0;
            std::cin >> option;
            return;
        }else if (multiple) {
            std::cout << "输入航班索引选择航班：" << std::endl;
            std::cin >> it;
            if (it < 0 || it >= (int)flights.size()) {
                std::cout << "无效的航班索引。" << std::endl;
                continue;
            }
        }
        int option = 0;
        std::cout << "选择要做出的选择：" << std::endl;
        std::cout << "1. 修改航班号" << std::endl;
        std::cout << "2. 修改起飞时间" << std::endl;
        std::cout << "3. 修改出发地" << std::endl;
        std::cout << "4. 修改目的地" << std::endl;
        std::cout << "5. 修改距离" << std::endl;
        std::cout << "6. 返回" << std::endl;
        std::cin >> option;
        switch (option) {
            case 1:
                std::cout << "原航班号为：" <<flights[it].flight << std::endl;
                std::cout << "新航班号为：";
                std::cin >> flights[it].flight;
                break;
            case 2:
                std::cout << "原起飞时间为：" << flights[it].departuretime << std::endl;
                std::cout << "新起飞时间为：";
                std::cin >> flights[it].departuretime;
                break;
            case 3:
                std::cout << "原出发地为：" << flights[it].departure << std::endl;
                std::cout << "新出发地为：";
                std::cin >> flights[it].departure;
                break;
            case 4:
                std::cout << "原目的地为：" << flights[it].destination << std::endl;
                std::cout << "新目的地为：";
                std::cin >> flights[it].destination;
                break;
            case 5:
                std::cout << "原距离为：" << flights[it].distance << std::endl;
                std::cout << "新距离为：";
                if(!(std::cin >> flights[it].distance)) {
                    std::cin.clear();
                    std::cin.ignore(100000, '\n');
                    std::cout << "输入无效，请重新输入。" << std::endl;
                }
                break;
            case 6:
                return;
            default:
                break;
        }
    }
}

void flight_rewrite_bydestination() {
   while (true){
       bool found = false;
       bool multiple = false;
       std::cout << "输入目的地： ";
       std::string destination;
       std::cin >> destination;
       int it = 0 ;
       for (int i = 0, f = 0; i < (int)flights.size(); i++) {
           if (flights[i].destination == destination) {
               f=f+1;
               found = true;
           }else if (f == f+1 && f > 1) {
               std::cout <<"-----------\n"<< "找到多个航班，此航班索引为：" << i << std::endl;
               std::cout << "航班号：" << flights[i].flight << std::endl;
               std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
               std::cout << "出发地：" << flights[i].departure << std::endl;
               std::cout << "目的地：" << flights[i].destination << std::endl;
               std::cout << "距离：" << flights[i].distance << "\n" << "-------------" <<std::endl;
               multiple = true;
           }else if (f==1) {
               std::cout << "航班号：" << flights[i].flight << std::endl;
               std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
               std::cout << "出发地：" << flights[i].departure << std::endl;
               std::cout << "目的地：" << flights[i].destination << std::endl;
               std::cout << "距离：" << flights[i].distance << "\n" << "-------------" <<std::endl;
           }
       }
       if (!found) {
           std::cout << "没有找到航班。" << std::endl;
           std::cout << "输入任意值返回" << std::endl;
           int option = 0;
           std::cin >> option;
           return;
       }else if (multiple) {
           std::cout << "输入航班索引选择航班：" << std::endl;
           std::cin >> it;
           if (it < 0 || it >= (int)flights.size()) {
               std::cout << "无效的航班索引。" << std::endl;
               continue;
           }
       }
       int option = 0;
       std::cout << "选择要做出的选择：" << std::endl;
       std::cout << "1. 修改航班号" << std::endl;
       std::cout << "2. 修改起飞时间" << std::endl;
       std::cout << "3. 修改出发地" << std::endl;
       std::cout << "4. 修改目的地" << std::endl;
       std::cout << "5. 修改距离" << std::endl;
       std::cout << "6. 返回" << std::endl;
       std::cin >> option;
       switch (option) {
           case 1:
               std::cout << "原航班号为：" <<flights[it].flight << std::endl;
               std::cout << "新航班号为：";
               std::cin >> flights[it].flight;
               break;
           case 2:
               std::cout << "原起飞时间为：" << flights[it].departuretime << std::endl;
               std::cout << "新起飞时间为：";
               std::cin >> flights[it].departuretime;
               break;
           case 3:
               std::cout << "原出发地为：" << flights[it].departure << std::endl;
               std::cout << "新出发地为：";
               std::cin >> flights[it].departure;
               break;
           case 4:
               std::cout << "原目的地为：" << flights[it].destination << std::endl;
               std::cout << "新目的地为：";
               std::cin >> flights[it].destination;
               break;
           case 5:
               std::cout << "原距离为：" << flights[it].distance << std::endl;
               std::cout << "新距离为：";
               if(!(std::cin >> flights[it].distance)) {
                   std::cin.clear();
                   std::cin.ignore(100000, '\n');
                   std::cout << "输入无效，请重新输入。" << std::endl;
               }
               break;
           case 6:
               return;
           default:
               break;
       }
   }
   }

void flight_rewrite_byflight() {
    while (true){
        bool found = false;
        bool multiple = false;
        std::cout << "输入航班号： ";
        std::string flight;
        std::cin >> flight;
        int it = 0 ;
        for (int i = 0, f = 0; i < (int)flights.size(); i++) {
            if (flights[i].flight == flight) {
                f=f+1;
                found = true;
            }else if (f == f+1 && f > 1) {
                std::cout <<"-----------\n"<< "找到多个航班，此航班索引为：" << i << std::endl;
                std::cout << "航班号：" << flights[i].flight << std::endl;
                std::cout << "出发地：" << flights[i].departure << std::endl;
                std::cout << "目的地：" << flights[i].destination << std::endl;
                std::cout << "距离：" << flights[i].distance << "\n" << "-------------" <<std::endl;
                multiple = true;
            }else if (f==1) {
                std::cout << "航班号：" << flights[i].flight << std::endl;
                std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
                std::cout << "出发地：" << flights[i].departure << std::endl;
                std::cout << "目的地：" << flights[i].destination << std::endl;
                std::cout << "距离：" << flights[i].distance << "\n" << "-------------" <<std::endl;
            }
        }
        if (!found) {
            std::cout << "没有找到航班。" << std::endl;
            std::cout << "输入任意值返回" << std::endl;
            int option = 0;
            std::cin >> option;
            return;
        }else if (multiple) {
            std::cout << "输入航班索引选择航班：" << std::endl;
            std::cin >> it;
            if (it < 0 || it >= (int)flights.size()) {
                std::cout << "无效的航班索引。" << std::endl;
                continue;
            }
        }
        int option = 0;
        std::cout << "选择要做出的选择：" << std::endl;
        std::cout << "1. 修改航班号" << std::endl;
        std::cout << "2. 修改起飞时间" << std::endl;
        std::cout << "3. 修改出发地" << std::endl;
        std::cout << "4. 修改目的地" << std::endl;
        std::cout << "5. 修改距离" << std::endl;
        std::cout << "6. 返回" << std::endl;
        std::cout << "请输入选择：" ;
        std::cin >> option;
        switch (option) {
            case 1:
                std::cout << "原航班号为：" <<flights[it].flight << std::endl;
                std::cout << "新航班号为：";
                std::cin >> flights[it].flight;
                break;
            case 2:
                std::cout << "原起飞时间为：" << flights[it].departuretime << std::endl;
                std::cout << "新起飞时间为：";
                std::cin >> flights[it].departuretime;
                break;
            case 3:
                std::cout << "原出发地为：" << flights[it].departure << std::endl;
                std::cout << "新出发地为：";
                std::cin >> flights[it].departure;
                break;
            case 4:
                std::cout << "原目的地为：" << flights[it].destination << std::endl;
                std::cout << "新目的地为：";
                std::cin >> flights[it].destination;
                break;
            case 5:
                std::cout << "原距离为：" << flights[it].distance << std::endl;
                std::cout << "新距离为：";
                if(!(std::cin >> flights[it].distance)) {
                    std::cin.clear();
                    std::cin.ignore(100000, '\n');
                    std::cout << "输入无效，请重新输入。" << std::endl;
                }
                break;
            case 6:
                return;
            default:
                break;
        }
    }
}

void flight_rewrite() {
    while (true) {
        int choice = 0;
        std::cout << "要依照什么来修改？：" << std::endl;
        std::cout << "1. 航班号" << std::endl;
        std::cout << "2. 起飞时间" << std::endl;
        std::cout << "3. 出发地" << std::endl;
        std::cout << "4. 返回" << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1:
                flight_rewrite_byflight();
                break;
            case 2:
                flight_rewrite_bydeparture();
                break;
            case 3:
                flight_rewrite_bydestination();
                break;
            case 4:
                return;
            default:
                break;
        }
    }
}
