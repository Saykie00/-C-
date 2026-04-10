#include "flight/flightdelete.h"
#include "flight/flight.h"
#include <iostream>

void flight_delete_bydeparture() {
    while (true) {
        bool found = false;
        bool multiple = false;
        std::string departure;
        std::cout << "输入出发地：" << std::endl;
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
        char option = 'c';
        std::cout << "是否删除此航班？(y/N)" << std::endl;
        std::cin >> option;
        if (option == 'y' || option == 'Y') {
            flights.erase(flights.begin() + it);
        }else
            return;
    }
}

void flight_delete_bydestination() {
    while (true) {
        bool found = false;
        bool multiple = false;
        std::string departure;
        std::cout << "输入目的地：" << std::endl;
        std::cin >> departure;
        int it = 0 ;
        for (int i = 0, f = 0; i < (int)flights.size(); i++) {
            if (flights[i].destination == departure) {
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
        char option = 'c';
        std::cout << "是否删除此航班？(y/N)" << std::endl;
        std::cin >> option;
        if (option == 'y' || option == 'Y') {
            flights.erase(flights.begin() + it);
        }else
            return;
    }
}

void flight_delete_byflight() {
    while (true) {
        bool found = false;
        bool multiple = false;
        std::string departure;
        std::cout << "输入航班号：" << std::endl;
        std::cin >> departure;
        int it = 0 ;
        for (int i = 0, f = 0; i < (int)flights.size(); i++) {
            if (flights[i].flight == departure) {
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
        char option = 'c';
        std::cout << "是否删除此航班？(y/N)" << std::endl;
        std::cin >> option;
        if (option == 'y' || option == 'Y') {
            flights.erase(flights.begin() + it);
        }else
            return;
    }
}

void flight_delete() {
    while (true) {
        int choice = 0;
        std::cout << "依据什么来删除？" << std::endl;
        std::cout << "1. 航班号" << std::endl;
        std::cout << "2. 出发地" << std::endl;
        std::cout << "3. 目的地" << std::endl;
        std::cout << "4. 返回" << std::endl;
        std::cout << "请输入选择：" ;
        std::cin >> choice;
        switch (choice) {
            case 1:
                flight_delete_byflight();
                break;
            case 2:
                flight_delete_bydeparture();
                break;
            case 3:
                flight_delete_bydestination();
                break;
            case 4:
                return;
            default:
                break;
        }
    }
}
