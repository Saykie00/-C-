#include <func.h>
#include <iostream>
#include <ui.h>



void datalist(std::vector<Package> &list) { /*显示货物列表*/
  int n = 0;
  int m = 3;

    for (int i = n;i < m && i < list.size(); i++) {
    std::cout << "货物编号：" << list[i].number << std::endl;
    std::cout << "货物名字：" << list[i].Name << std::endl;
    std::cout << "货物所在区域：" << list[i].area << std::endl;
    std::cout << "货物被分配到的航班号：" << list[i].flight << std::endl;
    std::cout << "货物目标地点：" << list[i].destnation << std::endl;
    std::cout << "货物起飞时间：" << list[i].departuretime << std::endl;
    std::cout << "货物舱位等级：" << list[i].booking << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    if (i == list.size()){
        std::cout << "已经到底了⸜(* ॑꒳ ॑* )⸝" <<std::endl;
        break;
    }
    if (i == m - 1 && list.size() > m) {
      std::cout << "是否要显示下一页？(输入任意键以继续，'n'以退出)" << std::endl;
      char c;
      std::cin >> c;
      if (c == 'n' || c == 'N')
        return;
      n = m;
      m += 3;
      i = n - 1;
    }
  }
  std::cout << "是否要回到主菜单？(输入任意键以返回)" << std::endl;
  char i;
  std::cin >> i;
    return;
}
