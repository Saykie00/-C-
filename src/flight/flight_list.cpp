#include "flight/flightlist.h"
#include <iostream>
#include "flight/flight.h"


void display_flight() {
    int n = 0;
    int m = 3;
    if (flights.empty()) {
      std::cout << "当前没有航班信息,返回吗？" << std::endl;
      char stop;
      std::cin >> stop;
      if (stop == 'y' || stop == 'Y') {
        return;
      }
    }
    for (int i = n; i < m && i < (int)flights.size();
         i++) { // 遍历列表中的货物，每次显示3个
      std::cout << "航班号：" << flights[i].flight << std::endl;
      std::cout << "起飞时间：" << flights[i].departuretime << std::endl;
      std::cout << "航班出发地：" << flights[i].departure << std::endl;
      std::cout << "航班目的地：" << flights[i].destination << std::endl;
      std::cout << "航班路程：" << flights[i].distance << std::endl;
      std::cout << "---------------------------------" << std::endl;
      if (i == (int)flights.size()) {
        std::cout << "已经到底了⸜(* ॑꒳ ॑* )⸝" << std::endl;
        break;
      }
      if (i == m - 1 && (int)flights.size() > m) {
        std::cout << "是否要显示下一页？(输入任意键以继续，'n'以退出)"
                  << std::endl;
        char c;
        std::cin >> c;
        if (c == 'n' || c == 'N')
          return;
        n = m;
        m += 3;
        i = n - 1;
      }
    }
    std::cout << "是否要回到主菜单？(输入任意值以返回)" << std::endl;
    char i;
    std::cin >> i;
    return;
}
