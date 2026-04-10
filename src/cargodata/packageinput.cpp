#include <cargodata/func.h>
#include <flight/flight.h>
#include <iostream>

void packageinput() { /*这是一个函数用来将货物输入货物类型中*/
  if (flights.empty()) {
    std::cout << "没有可用的航班，请先添加航班。" << std::endl;
    char a;
    std::cin >> a;
    return;
  }
  Package tmp = {};
  while (true) {
    int opt = 999;
    system("clear");
    std::cout << "请选择要输入的货物信息项：" << std::endl;
    std::cout << "1. 货物编号" << tmp.number << std::endl;
    std::cout << "2. 货物重量" << tmp.weight << std::endl;
    std::cout << "3. 货物大小" << tmp.size << std::endl;
    std::cout << "4. 货物类型" << tmp.type << std::endl;
    std::cout << "5. 货物名字" << tmp.Name << std::endl;
    std::cout << "6. 货物所在区域" << tmp.area << std::endl;
    std::cout << "7. 货物航班号" << tmp.flight << std::endl;
    std::cout << "8. 货物舱位等级" << tmp.booking << std::endl;
    std::cout << "9. 货物托运人姓名" << tmp.cname << std::endl;
    std::cout << "10. 货物托运人联系方式" << tmp.cid << std::endl;
    std::cout << "11. 货物信息填写完成，保存退出" << std::endl;
    std::cout << "12. 直接退出" << std::endl;
    std::cout << "请输入选项: ";
    std::cin >> opt;
    switch (opt) {
    case 1:
      while (true) {
        std::cout << "请输入货物编号: ";
        int Number;
        std::cin >> Number;
        bool isDuplicate = false;
        for (int i = 0; i < (int)list.size(); i++) {
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
      break;
    case 2:
      std::cout << "请输入货物重量，单位为千克" << std::endl;
      std::cin >> tmp.weight;
      break;
    case 3:
      std::cout << "请输入货物大小，格式为长，宽，高，数据之间用“X”(大写)"
                   "隔开，单位为厘米，例如17(长)X17(宽)X17(高)"
                << std::endl;
      std::cin >> tmp.size;
      break;
    case 4:
      std::cout << "请输入货物类型" << std::endl;
      std::cin >> tmp.type;
      break;
    case 5:
      std::cout << "请输入货物名字" << std::endl;
      std::cin >> tmp.Name;
      break;
    case 6:
      std::cout << "请输入货物所在区域，格式为A01,A02...B01,B02....最大为99"
                << std::endl;
      std::cin >> tmp.area;
      if (tmp.area[0] < 'A' || tmp.area[0] > 'Z') {
        std::cout << "输入格式错误，请重新输入" << std::endl;
        continue;
      } else if (tmp.area.length() > 3) {
        std::cout << "输入格式错误，请重新输入" << std::endl;
        continue;
      }
      break;
    case 7:
      int index;
      std::cout << "当前可用的航班： " << std::endl;
      for (int i = 0; i < (int)flights.size(); i++) {
        std::cout << "[" << i << "]" << ": " << flights[i].flight << std::endl;
      }
      std::cout << "请输入航班号" << std::endl;
      std::cin >> index;
      if (index < 0 || index >= (int)flights.size()) {
        std::cout << "输入错误，请重新输入" << std::endl;
        continue;
      }
      tmp.flight = flights[index].flight;
      tmp.flightPtr = &flights[index];
      break;
    case 8:
      std::cout << "请输入货物舱位等级（E:经济舱，N:普通舱，V:优先舱）"
                << std::endl;
      std::cin >> tmp.booking;
      if (tmp.booking == 'v' || tmp.booking == 'V') {
        tmp.price = tmp.weight * 12.5;
      } else if (tmp.booking == 'n' || tmp.booking == 'N') {
        tmp.price = tmp.weight * 8;
      } else if (tmp.booking == 'e' || tmp.booking == 'E') {
        tmp.price = tmp.weight * 6;
      }
      break;
    case 9:
      std::cout << "请输入货物托运人姓名" << std::endl;
      std::cin >> tmp.cname;
      break;
    case 10:
      std::cout << "请输入货物托运人联系方式" << std::endl;
      std::cin >> tmp.cid;
      break;
    case 11: {
      list.push_back(tmp);
      Package &realPkg = list.back();
      if (realPkg.flightPtr != nullptr) {
        realPkg.flightPtr->packages.push_back(&realPkg);
      }
      return;
    }
    case 12:
      return;
    }
  }
}
