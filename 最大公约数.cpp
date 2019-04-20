#include<iostream>
using namespace std;
#include<stdlib.h>
class Number{
    public:
        Number(int n){
            num=n;
        }
        int maxDivisor(Number &no){
        c=(no.num>num)?num:no.num;
        while(num%c!=0||no.num%c!=0){
            c--;
        }
        return c;
        }
        void show(){
            cout<<num<<endl;
        }
    private:
    int num;
    int c;
};

int main()
{
    int n,n1=15,n2=20;
    std::cin>>n;
    for (int i=0;i<n;++i){
        std::cin>>n1>>n2;
        Number no1(n1),no2(n2);
        Number no3=no1.maxDivisor(no2);//zuidagongyueshu
        no3.show();
    }
    system("pause");
    return 0;
}