#include <datarw.h>
#include <fstream>
#include <func.h>
#include <iostream>

void datawrite() { /*这是一个函数用来写保存的数据的（负责人：张睿洲） */
    std::ofstream file("storage.txt");
    if (!file.is_open()) {
        std::cout << "未找到对应的存储文件（storage.txt）" << std::endl;
        return;
    }
    for (int i = 0; i < list.size(); i++) {
        file << list[i].number << " " << list[i].weight << " " << list[i].size
         << " " << list[i].type << " " << list[i].Name << " " << list[i].area
         << " " << list[i].flight << " " << list[i].departuretime << " "
         << list[i].destnation << " " << list[i].booking << std::endl;
  }
};

void dataread() { /*这是一个函数用来读取保存的数据的 （负责人：张睿洲）*/
  std::ifstream file("storage.txt");
  if (!file.is_open()) {
    std::cout << "未找到对应的存储文件（storage.txt）" << std::endl;
    return;
  }
  list.clear();
  Package tmp;
  while (file >> tmp.number >> tmp.weight >> tmp.size >> tmp.type >> tmp.Name >>
         tmp.area >> tmp.flight >> tmp.departuretime >> tmp.destnation >>
         tmp.booking) {
    list.push_back(tmp);
  }
}
