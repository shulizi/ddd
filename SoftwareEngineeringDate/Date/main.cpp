//
//  main.cpp
//  Date
//
//  Created by 杜李 on 2019/1/3.
//  Copyright © 2019年 杜李. All rights reserved.
//

#include <iostream>
using namespace std;
char *day[7] = {
    "星期一",
    "星期二",
    "星期三",
    "星期四",
    "星期五",
    "星期六",
    "星期日"
};
int month[12] = {
    0,
    31,
    31+28,
    31+28+31,
    31+28+31+30,
    31+28+31+30+31,
    31+28+31+30+31+30,
    31+28+31+30+31+30+31,
    31+28+31+30+31+30+31+31,
    31+28+31+30+31+30+31+31+30,
    31+28+31+30+31+30+31+31+30+31,
    31+28+31+30+31+30+31+31+30+31+30
};
int main()
{
    int total_days;
    int y,m,d;
    
    cout<<"请输入要查询的日期2(年月日)?"<<endl;
    cin>>y>>m>>d;
    
    while(y!=0&&m!=0&&d!=0)
    {
        total_days = (y-1900)*365 + (y-1900)/4 + month[m-1] + d-1;
        if ((y-1900)%4==0 && m<3 && y!=1900)
            --total_days;
        cout<<(day[total_days%7])<<endl;
        
        cout<<"请输入要查询的日期(年月日)?"<<endl;
        cin>>y>>m>>d;
    }
}
