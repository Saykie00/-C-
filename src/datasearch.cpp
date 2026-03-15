#include <datasearch.h>
#include <iostream>
#include <string>
#include <vector>
#include <func.h>


void datasearch_bynumber() {
    char choice = 'Y';
    while (choice != 'N' && choice != 'n') {
        bool found = false;
        std::cout << "请输入要搜索的货物编号" << std::endl;
        int number;
        std::cin >> number;
        for (int i = 0; i < (int)list.size(); i++) {
            if (list[i].number == number) {
                std::cout << "货物编号：" << list[i].number << std::endl;
                std::cout << "货物重量：" << list[i].weight << std::endl;
                std::cout << "货物大小：" << list[i].size << std::endl;
                std::cout << "货物类型：" << list[i].type << std::endl;
                std::cout << "货物名字：" << list[i].Name << std::endl;
                std::cout << "货物所在区域：" << list[i].area << std::endl;
                std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
                std::cout << "货物航班起飞时间：" << list[i].departuretime << std::endl;
                std::cout << "货物目的地：" << list[i].destnation << std::endl;
                std::cout << "货物舱位：" << list[i].booking << std::endl;
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "未找到该货物(((ﾟДﾟ;)))" << std::endl;
        }
        std::cout << "是否继续按编号寻找？（Y/N）" << std::endl;
        std::cin >> choice;
    }
    return;
  }

void datasearch_byname() {
    char choice = '0';
    while (choice != 'N' && choice != 'n') {
        bool found = false;
        std::cout << "请输入要搜索的货物名字" << std::endl;
        std::string name;
        std::cin >> name;
        int n = 0;
        for (int i = 0; i < (int)list.size(); i++) {
            if (list[i].Name == name) {
                std::cout << "货物序号: " << i << std::endl;
                std::cout << "货物编号：" << list[i].number << std::endl;
                std::cout << "货物重量：" << list[i].weight << std::endl;
                std::cout << "货物大小：" << list[i].size << std::endl;
                std::cout << "货物类型：" << list[i].type << std::endl;
                std::cout << "货物名字：" << list[i].Name << std::endl;
                std::cout << "货物所在区域：" << list[i].area << std::endl;
                std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
                std::cout << "货物航班起飞时间：" << list[i].departuretime << std::endl;
                std::cout << "货物目的地：" << list[i].destnation << std::endl;
                std::cout << "货物舱位：" << list[i].booking << std::endl;
                found = true;
                n++;
            }
        }
        if (!found) {
            std::cout << "未找到货物(((ﾟДﾟ;)))" << std::endl;
        }
        if (n > 0) {
            std::cout << "共找到" << n << "个货物" << std::endl;
        }
        std::cout << "是否要继续查找匹配名字的货物？（Y/N）" <<std::endl;
        std::cin >> choice;
    }
    return;
}

void datasearch_bydestnation() {
    char choice = '0';
    while (choice != 'n' && choice != 'N') {
        bool found = false;
        int n = 0;
        std::cout << "请输入要搜索的货物目的地" << std::endl;
        std::string destnation;
        std::cin >> destnation;
        for (int i = 0; i < (int)list.size(); i++) {
            if (list[i].destnation == destnation) {
                std::cout << "货物编号：" << list[i].number << std::endl;
                std::cout << "货物重量：" << list[i].weight << std::endl;
                std::cout << "货物大小：" << list[i].size << std::endl;
                std::cout << "货物类型：" << list[i].type << std::endl;
                std::cout << "货物名字：" << list[i].Name << std::endl;
                std::cout << "货物所在区域：" << list[i].area << std::endl;
                std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
                std::cout << "货物航班起飞时间：" << list[i].departuretime << std::endl;
                std::cout << "货物目的地：" << list[i].destnation << std::endl;
                std::cout << "货物舱位：" << list[i].booking << std::endl;
                found = true;
                n++;
            }
        }
        if (!found) {
            std::cout << "未找到货物(((ﾟДﾟ;)))" << std::endl;
        } else {
            std::cout << "找到" << n << "件货物" << std::endl;
        }
        std::cout << "是否继续按照目的地寻找货物？(Y/N)" << std::endl;
        std::cin >> choice;
    }
    return;
  }

void datasearch() { /*这是一个函数用来搜索货物的（负责人：张睿洲） */
    std::string stop = "0";
    while(stop != "1" && stop != "2" && stop != "3" && stop != "y" && stop != "Y" && stop != "n" && stop != "N") {
        std::cout << "要按照何种方式搜索？" << std::endl;
        std::cout << "1.按编号搜索" << std::endl;
        std::cout << "2.按名字搜索" << std::endl;
        std::cout << "3.按目的地搜索" << std::endl;
        std::cout << "按任意键（上面的数字除外）以退出" <<std::endl;
        std::cout << "请输入搜索方式前的序号以开始搜索" <<std::endl;
        int choice;
        if (!(std::cin >> choice)) {
            std::cout << "输入错误，请重新输入(((ﾟДﾟ;)))" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
            continue;
        }
        switch (choice) {
        case 1:
          datasearch_bynumber();
          break;
        case 2:
          datasearch_byname();
          break;
        case 3:
          datasearch_bydestnation();
          break;
        default:
          std::cout << "输入错误，请重新输入(((ﾟДﾟ;)))" << std::endl;
          break;
        }
        std::cout << "是否继续搜索？(输入'y'或'Y'以继续，任意键退出，（ '1' '2' '3' 除外))" << std::endl;
        std::cin >> stop;
    }
    return;
}
