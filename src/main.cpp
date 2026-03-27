#include <ui/ui.h>
#include <datarw.h>
#include <func.h>

std::vector<Package> list; // 存储货物信息的全局变量

int main(){
    dataread();   // 读取保存的数据
    ui_init();    // 初始化UI
    datawrite();  // 保存数据
    return 0;
}
