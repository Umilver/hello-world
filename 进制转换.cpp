#include<iostream>
using namespace std;
#include<stdlib.h>
class Number
{
    public:
    Number(int x,int y){
        num=x;
        trans=y;

        j=0;
    }
    Number(int z){
        shown=z;
    }
    int converto(int n){
        trans2=n;
        while(num){
            a[j]=num%trans2;
            num/=trans2;
            j++;
        }
        int q=0,k=1;
        for(num=j-1;num>=0;num--){
            q=q+a[num]*k;
            k=k*10;
        }
        return q;
    }
    void show(){
       cout<<shown<<endl;
    }
    private:
    int trans;
    int trans2;
    int num;
    int j;
    int a[1000];
    int shown;
};
int main()
{
    int n,n1,n2;
    std::cin>>n;
    for(int i=0;i<n;++i){
        std::cin>>n1>>n2;
        Number no1(n1,10);
        Number no3=no1.converto(n2);
        no3.show();
    }
    system("pause");
    return 0;
}