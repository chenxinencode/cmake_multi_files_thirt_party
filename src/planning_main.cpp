#include<iostream>
#include"show_result.h"
#include"process.h"
using std::cout,std::endl;

int main()
{
    cout<<"planing start"<<endl;
    Process pro;
    pro.plan_process();
    cout<<"planing end"<<endl;

    cout << "show result: " << endl;
    ShowResult show;
    show.drawResult();
    cout<<"show result end"<<endl;
    return 0;
}