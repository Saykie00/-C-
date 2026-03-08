#include <func.h>
#include <iostream>

int datalist(std::vector<Package> &list) { /*显示货物列表*/
  for (int i = 0; i < list.size(); i++) {
    std::cout << "货物编号：" << list[i].number << std::endl;
    std::cout << "货物名字：" << list[i].Name << std::endl;
    std::cout << "货物所在区域：" << list[i].area << std::endl;
    std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
    std::cout << "货物目标地点：" << list[i].destnation << std::endl;
    std::cout << "货物起飞时间：" << list[i].departuretime << std::endl;
    std::cout << "货物舱位等级：" << list[i].booking << std::endl;
    std::cout << "----------------------------------------" << std::endl;
  }
}
