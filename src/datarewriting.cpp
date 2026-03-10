#include "datarewriting.h"
#include <func.h>
#include <iostream>


void data_rewriting(int number) {
    std::cout << "请输入需要改写的货物标号"<<std::endl;
    std::cin >> number;
    int it;
    for (int i = 0; i < list.size() ; i++) {
        if (list[i].number == number) {
            it = i;
            std::cout << "已找到货物"<<std::endl;
            std::cout << "[1]货物名称：" << list[i].Name << std::endl;
            std::cout << "[2]货物类型：" << list[i].type << std::endl;
            std::cout << "[3]货物重量：" << list[i].weight << std::endl;
            std::cout << "[4]货物大小：" << list[i].size << std::endl;
            std::cout << "[5]货物所在区域：" << list[i].area << std::endl;
            std::cout << "[6]货物被分配到的航班号：" << list[i].flight << std::endl;
            std::cout << "[7]货物航班起飞时间：" << list[i].departuretime << std::endl;
            std::cout << "[8]货物目的地：" << list[i].destnation << std::endl;
            std::cout << "[9]货物等级：" << list[i].booking << std::endl;
            std::cout << "货物序号为：" << i <<std::endl;
            std::cout << "-----------------------------------" << std::endl;
            std::cout << "注意！改写数据时应该输入序号而不是编号" << std::endl;
            std::cout << "请输入需要修改的货物信息" << std::endl;
        }
        std::cout << "未找到货物，请检查货物编号是否存在" << std::endl;
    }
    int option;
    char stop;
    std::cin >> option;
    while (stop == 'y' || stop == 'Y') {
        switch (option) {
        case 1:
            std::cout << "请输入货物名称" << std::endl;
            std::cin >> list[it].Name;
            if (list[it].Name.empty()) {
                std::cout << "输入为空，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        case 2:
            std::cout << "请输入货物类型" << std::endl;
            std::cin >> list[it].type;
            if (list[it].type.empty()) {
                std::cout << "输入为空，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        case 3:
            std::cout << "请输入货物重量" << std::endl;
            std::cin >> list[it].weight;
            if (list[it].weight <= 0) {
                std::cout << "输入无效，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        case 4:
            std::cout << "请输入货物大小" << std::endl;
            std::cin >> list[it].size;
            if (list[it].size.empty()) {
                std::cout << "输入为空，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        case 5:
            std::cout << "请输入货物所在区域" << std::endl;
            std::cin >> list[it].area;
            if (list[it].area.empty()) {
                std::cout << "输入为空，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        case 6:
            std::cout << "请输入货物被分配到的航班号" << std::endl;
            std::cin >> list[it].flight;
            if (list[it].flight.empty()) {
                std::cout << "输入为空，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        case 7:
            std::cout << "请输入货物航班起飞时间" << std::endl;
            std::cin >> list[it].departuretime;
            if (list[it].departuretime.empty()) {
                std::cout << "输入为空，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        case 8:
            std::cout << "请输入货物目的地" << std::endl;
            std::cin >> list[it].destnation;
            if (list[it].destnation.empty()) {
                std::cout << "输入为空，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        case 9:
            std::cout << "请输入货物等级" << std::endl;
            std::cin >> list[it].booking;
            if (list[it].booking != 'E' && list[it].booking != 'N' && list[it].booking != 'V') {
                std::cout << "输入无效，改写失败" << std::endl;
                std::cout << "请重新输入" << std::endl;
                continue;
            }
            break;
        default:
            std::cout << "无效选项" << std::endl;
            break;
    }
    std::cout << "是否继续改写？(y/n)" << std::endl;
    std::cin >> stop;
    }

}
