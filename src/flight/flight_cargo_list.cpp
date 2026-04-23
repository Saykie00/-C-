#include "flight/flight.h"
#include "flight/flightcargolist.h"
#include <iostream>


void flight_cargo_list() {
    while (true) {
        if (flights.empty()) {
            std::cout << "没有航班，输入任意值返回" << std::endl;
            int choice;
            std::cin >> choice;
            return;;
        }
        std::cout << "当前航班：" << std::endl;
        for (int i = 0; i < (int)flights.size(); ++i) {
            std::cout << "[" << i << "]: " << flights[i].flight << std::endl;
        }
        std::cout << "输入航班编号查看航班货物：" << std::endl;
        int it;
        if (!(std::cin >> it)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        if (it < 0 || it >= (int)flights.size()) {
            std::cout << "无效的航班编号，输入任意值重新输入" ;
            int choice;
            std::cin >> choice;
            continue;
        }else if (flights[it].packages.empty()) {
            std::cout << "该航班没有货物,输入任意值返回:";
            int choice;
            std::cin >> choice;
            return;
        }
        std::cout << "航班货物：" << std::endl;
        for (int i = 0; i < (int)flights[it].packages.size(); ++i) {
            std::cout << "找到货物\n" << "--------------------------" << std::endl;
            std::cout << "[" << i+1 << "]: " << "货物编号：" << flights[it].packages[i]->number << std::endl;
            std::cout << "[" << i+1 << "]: " << "货物名称：" << flights[it].packages[i]->Name << std::endl;
            std::cout << "[" << i+1 << "]: " << "货物区域：" << flights[it].packages[i]->area << std::endl;
            std::cout << "[" << i+1 << "]: " << "托运人名称：" << flights[it].packages[i]->cname << std::endl;
            std::cout << "[" << i+1 << "]: " << "托运人联系方式：" << flights[it].packages[i]->cid << std::endl;
            std::cout << "[" << i+1 << "]: " << "货物价格：" << flights[it].packages[i]->price << std::endl;
            if (i == (int)flights[it].packages.size() - 1) {
                double b = 0;
                for (int j = 0; j < (int)flights[it].packages.size(); ++j) {
                    b += flights[it].packages[j]->price;
                }
                std::cout << "航班货物总运费为:" << b << std::endl;
            }
            std::cout << "--------------------------" << std::endl;

        }
        std::cout << "输入任意值返回" << std::endl;
        int choice;
        std::cin >> choice;
        return;
    }
}
