#include <ui/ui.h>
#include <datarw.h>
#include <func.h>

std::vector<Package> list;

int main(){
    dataread();
    ui_init();
    datawrite();
    return 0;
}
