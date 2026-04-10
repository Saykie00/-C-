#include <cargodata/datarw.h>
#include <fstream>
#include <cargodata/func.h>
#include "flight/flight.h"
#include <iostream>

void datawrite() { /*这是一个函数用来写保存的数据的 */
  std::ofstream file("storage.txt");
  if (!file.is_open()) {
    std::cout << "未找到对应的存储文件（storage.txt）" << std::endl;
    std::cout << "请在运行目录新建文本文件'storage.txt'" << std::endl;
    return;
  }
  for (int i = 0; i < (int)list.size(); i++) {
    file << list[i].number << " " << list[i].weight << " " << list[i].size
         << " " << list[i].type << " " << list[i].Name << " " << list[i].area << " "
         << list[i].flight << " " << list[i].booking << " " << list[i].price << " "
         << list[i].cname << " " << list[i].cid << std::endl;
  }
};

void dataread() { /*这是一个函数用来读取保存的数据的 */
  std::ifstream file("storage.txt");
  if (!file.is_open()) {
    std::cout << "未找到对应的存储文件（storage.txt）" << std::endl;
    return;
  }
  list.clear();
  Package tmp;
  while (file >> tmp.number >> tmp.weight >> tmp.size >> tmp.type >> tmp.Name >>
         tmp.area >> tmp.flight >> tmp.booking >> tmp.price >> tmp.cname >> tmp.cid) {
    for (int i = 0; i < (int)flights.size(); i++) {
      if (flights[i].flight == tmp.flight) {
        tmp.flightPtr = &flights[i];
        break;
      }
    }
    list.push_back(tmp);
    Package& realPkg = list.back();
    if (realPkg.flightPtr != nullptr) {
      realPkg.flightPtr->packages.push_back(&realPkg);
      realPkg.flightPtr->cargonumber += std::to_string(realPkg.number);
    }
  }
}
