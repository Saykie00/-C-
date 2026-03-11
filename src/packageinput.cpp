#include <func.h>
#include <iostream>
#include <ui.h>

void packageinput() { /*这是一个函数用来将货物输入货物类型中*/
  char i;
  while (true) {
    Package tmp;
    while (true) {
      std::cout << "请输入货物编号: ";
      int Number;
      std::cin >> Number;
      bool isDuplicate = false;
      for (int i = 0; i < list.size(); i++) {
        if (list[i].number == Number) {
          std::cout << "编号重复，请重新输入！" << std::endl;
          isDuplicate = true;
          break;
        }
      }
      if (!isDuplicate) {
        tmp.number = Number;
        break;
      }
    }
    std::cout << "请输入货物重量，单位为千克" << std::endl;
    std::cin >> tmp.weight;
    std::cout << "请输入货物大小，格式为长，宽，高，数据之间用“X”(大写)"
                 "隔开，单位为厘米，例如17(长)X17(宽)X17(高)"
              << std::endl;
    std::cin >> tmp.size;
    std::cout << "请输入货物类型" << std::endl;
    std::cin >> tmp.type;
    std::cout << "请输入货物名字" << std::endl;
    std::cin >> tmp.Name;
    std::cout << "请输入货物所在区域，格式为A01,A02...B01,B02...." << std::endl;
    std::cin >> tmp.area;
    std::cout << "请输入货物被分配到的航班号" << std::endl;
    std::cin >> tmp.flight;
    std::cout << "请输入货物目标地点，使用英文输入" << std::endl;
    std::cin >> tmp.destnation;
    std::cout << "请输入货物起飞时间，格式：年-月-日_时:分" << std::endl;
    std::cin >> tmp.departuretime;
    std::cout << "请输入货物舱位等级（E:经济舱，N:普通舱，V:优先舱）"
              << std::endl;
    std::cin >> tmp.booking;
    list.push_back(tmp);
    std::cout
        << "货物信息已经填写完成，要继续输入吗？(输入'y'以继续输入，'n'以退出)"
        << std::endl;
    std::cin >> i;
    if (i == 'n' || i == 'N')
        ui_init();
        break;
  }
}
