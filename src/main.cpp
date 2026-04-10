#include <ui/ui_init.h>
#include "flight/flightrw.h"
#include <cargodata/datarw.h>
#include <cargodata/func.h>

std::vector<Package> list; // 存储货物信息的全局变量
std::vector<Flight> flights;

int main(){
    flightread(); // 读取保存的航班信息
    dataread();   // 读取保存货物的数据
    ui_init();    // 初始化UI
    datawrite();  // 保存货物数据
    flightwrite();// 保存航班信息
    return 0;
}
