#include "ui/draw_flightmenu.h"
#include <iostream>
#include <cstdlib>

void draw_flight_menu() {
    system("clear"); // 这个执行清理屏幕的命令，防止堆积的界面扰乱视野，以下是UI
    std::cout << "欢迎来到究极-星辰-物流秘籍～～禁忌般的管理系统" << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "现在你可以做的事情....." << std::endl;
    std::cout << "[1] 写入航班数据。" << std::endl;
    std::cout << "[2] 列出所有的航班。" << std::endl;
    std::cout << "[3] 从所有的航班中搜索" << std::endl;
    std::cout << "[4] 改写航班数据" << std::endl;
    std::cout << "[5] 查看航班内货物信息" << std::endl;
    std::cout << "[6] 删除航班数据" << std::endl;
    std::cout << "[7] 返回" << std::endl;
    std::cout << "_______________________________________" << std::endl;
    std::cout << "输入其他除此之外的其他键无效" << std::endl;
    std::cout << "请输入你的选择：" ;
}
