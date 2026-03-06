#ifdef __cplusplus

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#endif

struct Package{  //这是货物的数据类型
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

    std::vector<Package> list;



int datasearch_bynumber(){
    std::cout<<"请输入要搜索的货物编号"<<std::endl;
    int number;
    std::cin>>number;
    for(int i = 0; i < list.size(); i++){
        if(list[i].number == number){
            std::cout<<"货物编号："<<list[i].number<<std::endl;
            std::cout<<"货物重量："<<list[i].weigh<<std::endl;
            std::cout<<"货物大小："<<list[i].size<<std::endl;
            std::cout<<"货物类型："<<list[i].type<<std::endl;
            std::cout<<"货物名字："<<list[i].Name<<std::endl;
            std::cout<<"货物所在区域："<<list[i].area<<std::endl;
            std::cout<<"货物被分配到的航班号："<<list[i].flight<<std::endl;
            std::cout<<"货物航班起飞时间："<<list[i].departuretime<<std::endl;
            std::cout<<"货物目的地："<<list[i].destnation<<std::endl;
            std::cout<<"货物舱位："<<list[i].booking<<std::endl;
            return 0;
        }
    }
    std::cout<<"未找到该货物"<<std::endl;
    return 0;//  //
}

int datasearch_byname(){
    std::cout<<"请输入要搜索的货物名字"<<std::endl;
    std::string name;
    std::cin>>name;
    for(int i = 0; i < list.size(); i++){
        if(list[i].Name == name){
            std::cout<<"货物编号："<<list[i].number<<std::endl;
            std::cout<<"货物重量："<<list[i].weigh<<std::endl;
            std::cout<<"货物大小："<<list[i].size<<std::endl;
            std::cout<<"货物类型："<<list[i].type<<std::endl;
            std::cout<<"货物名字："<<list[i].Name<<std::endl;
            std::cout<<"货物所在区域："<<list[i].area<<std::endl;
            std::cout<<"货物被分配到的航班号："<<list[i].flight<<std::endl;
            std::cout<<"货物航班起飞时间："<<list[i].departuretime<<std::endl;
            std::cout<<"货物目的地："<<list[i].destnation<<std::endl;
            std::cout<<"货物舱位："<<list[i].booking<<std::endl;
            return 0;
        }
    }
    std::cout<<"未找到该货物"<<std::endl;
    return 0;
}

int datasearch_bydestnation(){
    std::cout<<"请输入要搜索的货物目的地"<<std::endl;
    std::string destnation;
    std::cin>>destnation;
    for(int i = 0; i < list.size(); i++){
        if(list[i].destnation == destnation){
            std::cout<<"货物编号："<<list[i].number<<std::endl;
            std::cout<<"货物重量："<<list[i].weigh<<std::endl;
            std::cout<<"货物大小："<<list[i].size<<std::endl;
            std::cout<<"货物类型："<<list[i].type<<std::endl;
            std::cout<<"货物名字："<<list[i].Name<<std::endl;
            std::cout<<"货物所在区域："<<list[i].area<<std::endl;
            std::cout<<"货物被分配到的航班号："<<list[i].flight<<std::endl;
            std::cout<<"货物航班起飞时间："<<list[i].departuretime<<std::endl;
            std::cout<<"货物目的地："<<list[i].destnation<<std::endl;
            std::cout<<"货物舱位："<<list[i].booking<<std::endl;
            return 0;
        }
    }
    std::cout<<"未找到该货物"<<std::endl;
    return 0;
}

int datasearch(){     /*这是一个函数用来搜索货物的（负责人：张睿洲） */
   std::cout<<"要按照何种方式搜索？"<<std::endl;
   std::cout<<"1.按编号搜索"<<std::endl;
   std::cout<<"2.按名字搜索"<<std::endl;
   std::cout<<"3.按目的地搜索"<<std::endl;
   int choice;
   std::cin>>choice;
   switch(choice){
       case 1:
           datasearch_bynumber();
           break;
       case 2:
           datasearch_byname();
           break;
       case 3:
           datasearch_bydestnation();
           break;
       default:
           std::cout<<"无效的选择"<<std::endl;
           break;
   }
    return 0;
}

int datawrite(){/*这是一个函数用来写保存的数据的（负责人：张睿洲） */
    std::ofstream file("storage.txt");
    for(int i = 0; i < list.size(); i++){
        file<<list[i].number<<" "<<list[i].weigh<<" "<<list[i].size<<" "<<list[i].type<<" "<<list[i].Name<<" "<<list[i].area<<" "<<list[i].flight<<" "<<list[i].departuretime<<" "<<list[i].destnation<<" "<<list[i].booking<<std::endl;
    }

  return 0;
};

int dataread(){ /*这是一个函数用来读取保存的数据的 （负责人：张睿洲）*/
    std::ifstream file("storage.txt");
    Package tmp;
    while(file>>tmp.number>>tmp.weigh>>tmp.size>>tmp.type>>tmp.Name>>tmp.area>>tmp.flight>>tmp.departuretime>>tmp.destnation>>tmp.booking){
        list.push_back(tmp);
    }
    return 0;
}

int packageinput(){               /*这是一个函数用来将货物输入货物类型中（负责人：张睿洲*/
    char i;
    while(true){
    Package tmp;
    while (true) {
        std::cout << "请输入货物编号: ";
        int Number;
        std::cin >> Number;

        bool isDuplicate = false;
        for (const auto& item : list) {
            if (item.number == Number) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) break; // 不重复，跳出 while 循环
        std::cout << "编号重复，请重新输入！" << std::endl;
    }
        std::cout<<"请输入货物重量，单位为千克"<<std::endl;
        std::cin>>tmp.weigh;
        std::cout<<"请输入货物大小，格式为长，宽，高，数据之间用“X”(大写)隔开，单位为厘米，例如17(长)X17(宽)X17(高)"<<std::endl;
        std::cin>>tmp.size;
        std::cout<<"请输入货物类型"<<std::endl;
        std::cin>>tmp.type;
        std::cout<<"请输入货物名字"<<std::endl;
        std::cin>>tmp.Name;
        std::cout<<"请输入货物所在区域，格式为A01,A02...B01,B02...."<<std::endl;
        std::cin>>tmp.area;
        std::cout<<"请输入货物被分配到的航班号"<<std::endl;
        std::cin>>tmp.flight;
        std::cout<<"请输入货物目标地点，使用英文输入"<<std::endl;
        std::cin>>tmp.destnation;
        std::cout<<"请输入货物起飞时间，格式：年-月-日 时:分"<<std::endl;
        std::cin>>tmp.departuretime;
        std::cout<<"请输入货物舱位等级（E:经济舱，N:普通舱，V:优先舱）"<<std::endl;
        std::cin>>tmp.booking;
        list.push_back(tmp);
    std::cout<<"货物信息已经填写完成，要继续输入吗？(输入'y'以继续输入，'n'以退出)"<<std::endl;
    std::cin>>i;
    if ( i == 'n' || i == 'N') break;
       }
}

int datalist(std::vector<Package>& list){ /*显示货物列表*/
    for(int i = 0; i < list.size(); i++){
        std::cout<<"货物编号："<<list[i].number<<std::endl;
        std::cout<<"货物名字："<<list[i].Name<<std::endl;
        std::cout<<"货物所在区域："<<list[i].area<<std::endl;
        std::cout<<"货物被分配到的航班号："<<list[i].flight<<std::endl;
        std::cout<<"货物目标地点："<<list[i].destnation<<std::endl;
        std::cout<<"货物起飞时间："<<list[i].departuretime<<std::endl;
        std::cout<<"货物舱位等级："<<list[i].booking<<std::endl;
        std::cout<<"----------------------------------------"<<std::endl;
    }
}

int start(){ /*这是一个开始函数 （负责人：张睿洲*/
    std::cout<<""<<std::endl;
}
