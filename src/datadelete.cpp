#include "datadelete.h"
#include <iostream>
#include "func.h"


void data_delete_bynumber(int number) {
    std::cout << "请输入要删除的货物编号" << number << std::endl;
    std::cin >> number;
    for (int i = 0; i < list.size(); i++) {
        if (list[i].number == number) {
            list.erase(list.begin() + i);
            break;
        }
        else if (i == list.size() - 1) {
            std::cout << "未找到该货物编号" << std::endl;
        }
    }
}

void data_delete_byname(std::string name) {
    int id;
    int i;
    std::cout << "请输入要删除的货物名称" << name << std::endl;
    std::cin >> name;
    for (i = 0; i < list.size(); i++) {
        if (list[i].Name == name) {
            std::cout<<"已找到，第"<<i<<"个货物，名称为:"<<list[i].Name<<" "<<"编号为:"<<list[i].number<<" "<<"航班号为:"<<list[i].flight<<" "<<"类型为:"<<list[i].type<<" "<<"目的地为："<<list[i].destnation<<std::endl;
        }
        else if (i == list.size() - 1) {
            std::cout << "未找到该货物名称" << std::endl;
        }
    }
    std::cout << "输入要删除的货物的标号" << std::endl;
    std::cin >> id;
    list.erase(list.begin() + id);
}

void data_delete_by_area(std::string area) {
    std::cout << "请输入要删除的货物区域" << area << std::endl;
    std::cin >> area;
    for (int i = 0; i < list.size(); i++) {
        if (list[i].area == area) {
            std::cout<<"已找到，第"<<i<<"个货物，货物区域为:"<<list[i].area<<" "<<"编号为:"<<list[i].number<<" "<<"航班号为:"<<list[i].flight<<" "<<"类型为:"<<list[i].type<<" "<<"目的地为："<<list[i].destnation<<std::endl;
        }
        else if (i == list.size() - 1) {
            std::cout << "未找到该货物区域" << std::endl;
        }
    }
    std::cout<< "是否删除此区域所有的货物？(y/N)" << std::endl;
    char a;
    std::cin >> a;
    if (a == 'y' || a == 'Y') {
        for (int i = 0; i < list.size(); i++) {
            if (list[i].area == area) {
                list.erase(list.begin() + i);
                i--;
            }
        }
    }
    else {
        std::cout << "输入要删除的货物的标号" << std::endl;
        int id;
        std::cin >> id;
        list.erase(list.begin() + id);
    }
}
