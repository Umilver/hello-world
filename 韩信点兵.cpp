#include<iostream>
using namespace std;
#include<stdlib.h>
class HanXin{
    public:
    HanXin(){
        l1=0;
        l2=0;
        l3=0;
    }
    int line3(int n1){
        l1=n1;
    }
    int line5(int n2){
        l2=n2;
    }
    int line7(int n3){
        l3=n3;
    }
    void showMany();
    private:
    int l1,l2,l3;
};

void HanXin::showMany(){
    int i=10;
    while(i<=100){
        if(i%3==l1&&i%5==l2&&i%7==l3){
            cout<<i<<endl;
            break;
        }
        i++;
    }
    if(i==101){
        cout<<"Impossible"<<endl;
    }
}
int main()
{
    int n,n1,n2,n3;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>n1>>n2>>n3;
        HanXin hx;
        hx.line3(n1);
        hx.line5(n2);
        hx.line7(n3);
        hx.showMany();
    }
    system("pause");
    return 0;
}