#include "ui/draw_menu.h"
#include "iostream"

// 这个函数是输出UI的，功能如名字，画出，菜单
void draw_menu() {
  system("clear"); // 这个执行清理屏幕的命令，防止堆积的界面扰乱视野，以下是UI
  std::cout << "欢迎来到究极-星辰-物流秘籍～～禁忌般的管理系统" << std::endl;
  std::cout << "______________________________________" << std::endl;
  std::cout << "现在你可以做的事情....." << std::endl;
  std::cout << "[1] 写入货物数据。" << std::endl;
  std::cout << "[2] 列出所有的货物。" << std::endl;
  std::cout << "[3] 从所有的货物中搜索" << std::endl;
  std::cout << "[4] 改写货物数据" << std::endl;
  std::cout << "[5] 删除货物数据" << std::endl;
  std::cout << "[6] 退出系统" << std::endl;
  std::cout << "_______________________________________" << std::endl;
  std::cout << "输入其他除此之外的其他键无效" << std::endl;
  std::cout << "请输入你的选择：" << std::endl;
}
