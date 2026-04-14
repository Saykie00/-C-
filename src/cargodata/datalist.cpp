#include "cargodata/func.h"
#include <cargodata/datalist.h>
#include <iomanip>
#include <ios>
#include <iostream>

void datalist() { /*显示货物列表*/
  int n = 0;
  int m = 3;
  if (list.empty()) {
    std::cout << "当前没有货物信息。返回吗？" << std::endl;
    char stop;
    std::cin >> stop;
    if (stop == 'y' || stop == 'Y') {
      return;
    }
  }
  for (int i = n; i < m && i < (int)list.size();
       i++) { // 遍历列表中的货物，每次显示3个
    std::cout << "货物编号：" << list[i].number << std::endl;
    std::cout << "货物名字：" << list[i].Name << std::endl;
    std::cout << std::fixed << "货物重量：" << std::setprecision(2)
              << list[i].weight << std::endl;
    std::cout << "货物类型：" << list[i].type << std::endl;

    std::cout << "货物所在区域：" << list[i].area << std::endl;
    std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
    std::cout << "货物舱位等级：" << list[i].booking << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "货物托运价格："
              << list[i].price << std::endl;
    std::cout << "货物托运人姓名：" << list[i].cname << std::endl;
    std::cout << "货物托运人联系方式：" << list[i].cid << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    if (i == (int)list.size()) {
      std::cout << "已经到底了⸜(* ॑꒳ ॑* )⸝" << std::endl;
      break;
    }
    if (i == m - 1 && (int)list.size() > m) {
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
