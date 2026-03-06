#include <array>
#include <iostream>
#include <vector>
#include <fstream>

struct Package{
    int number;//货物编号
    int weigh;//货物重量，单位为千克
    std::string size;//货物的大小，格式为长，宽，高，数据之间用“X”(大写)隔开，单位为厘米，例如17(长)X17(宽)X17(高)
    std::string type;//货物类型
    std::string Name;//货物名字
    std::string area;//货物所在区域，格式为A01,A02...B01,B02....
    std::string flight;//货物将被分配的航班号
    std::string departuretime;//货物航班起飞时间
    std::string destnation;//货物目的地
    char booking;//E(经济舱) N（普通舱） V（优先舱）
};

int inputcheck(){     /*这是一个函数用来作输入数据校验*/
    
}


int datawrite(){/*这是一个函数用来写保存的数据的 */
    std::ofstream file("storage.txt")
    for()
    
  return 0;
};

int dataread(){
    return 0;
};

int packageinput(){               /*这是一个函数用来将货物输入货物类型中*/
    std::vector<Package> list;
    char i;
    while(true){
    Package tmp;
        std::cout<<"请输入货物编号"<<std::endl;
        std::cin>>tmp.number;
        std::cout<<"请输入货物重量"<<std::endl;
        std::cin>>tmp.weigh;
        std::cout<<"请输入货物大小"<<std::endl;
        std::cin>>tmp.size;
        std::cout<<"请输入货物类型"<<std::endl;
        std::cin>>tmp.type;
        std::cout<<"请输入货物名字"<<std::endl;
        std::cin>>tmp.Name;
        std::cout<<"请输入货物所在区域"<<std::endl;
        std::cin>>tmp.area;
        std::cout<<"请输入货物被分配到航班号"<<std::endl;
        std::cin>>tmp.flight;
        std::cout<<"请输入货物目标地点"<<std::endl;
        std::cin>>tmp.destnation;
        std::cout<<"请输入货物起飞时间"<<std::endl;
        std::cin>>tmp.departuretime;
        std::cout<<"请输入货物舱位等级"<<std::endl;
        std::cin>>tmp.booking;
        list.push_back(tmp);
    std::cout<<"货物信息已经填写完成，要继续输入吗？(输入'y'以继续输入，'n'以退出)"<<std::endl;
    std::cin>>i;
    if ( i == 'n' || i == 'N') break;
       }
}

int start(){
    std::cout<<""<<std::endl;
}

int main(){
    std::printf("这里是春季把鸾携航空航天货舱管理系统");
}
