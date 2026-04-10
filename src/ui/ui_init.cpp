#include "ui/ui_init.h"
#include <cstdlib>
#include <iostream>
#include "ui/ui_cargo.h"
#include "ui/ui_flight.h"

void ui_init() {
    while (true) {
        system("clear");
        std::cout << "欢迎来到究极-星辰-物流秘籍～～禁忌般的管理系统" << std::endl;
        std::cout << "--------------------------------------" << std::endl;
        std::cout << "现在你可以做的事情" << std::endl;
        std::cout << "1. 货物管理" << std::endl;
        std::cout << "2. 航班管理" << std::endl;
        std::cout << "3. 退出系统" << std::endl;
        std::cout << "请输入你的选择：" ;
        int choice = 0;
        std::cin >> choice;
        switch (choice) {
            case 1:
                ui_cargo();
                break;
            case 2:
                ui_flight();
                break;
            case 3:
                return;;
            default:
                break;
        }
    }
}
