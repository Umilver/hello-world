#include<iostream>
using namespace std;

class number
{
	public:
		number()
		{
			flag=1;
		}
		void numin(int num);
		int  judge();
		int judge2(int xx);
		static int counter; 
		//void in();
	private:
		int _num;
		int flag;
		int flag2;
};
/*void number::in(){
	cout<<"     XXXXXXXXXXXXXXXXXXX"<<endl;
	cout<<"     X  Prime Numbers  X"<<endl;
	cout<<"     XXXXXXXXXXXXXXXXXXX"<<endl<<endl; 
}*/
void number::numin(int num){
	_num=num;
}
int  number::judge(){
	for(int i=2;i<_num;i++){
		if(_num%i!=0){
			
		}
		else if(_num%i==0){
			flag=0;
			break;
		} 
	}
	if(flag==1){
		flag2=1;
	//	cout<<_num;
		return 1;
	}
	else if(flag==0){
	//	cout<<_num<<"false"<<endl;
		return 0;
	}
}

int number::judge2(int xx){
	flag2=xx;
	if(flag2==1){
		int a1=_num/100;
		int a2=(_num/10)%10;
		int a3=_num%10;
		
		int b1,b2,b3;
		b1=a1+a2+a3;
		b2=a1*a2*a3;
		b3=a1*a1+a2*a2+a3*a3;
		if(b2==0){
			flag2=0;
		}
		if(flag2==1){
		for(int m1=2;m1<b1;m1++){
			if(b1%m1==0){
				flag2=0;
				break;
			}
		} }
		if(flag2==1){
		for(int m2=2;m2<b2;m2++){
			if(b2%m2==0){
				flag2=0;
				break;
			}
		}
		}
		if(flag2==1){
		for(int m3=2;m3<b3;m3++){
			if(b3%m3==0){
				flag2=0;
				break;
			}
		}
		}	
	if(flag2==1){
		cout<<"AAAAAAAAAAAAAAAA"<<_num<<endl;
		counter++;
		return _num;
		cout<<endl;
	}
	else if(flag2==0){
	//	cout<<"false"<<endl;
		return 0;
	}
	}
}
int  number::counter=0;
int main()
{
	//number in;
	//in.in();
	number *p1=new number[900];
	number summ;
	int sum1=0;
	int max=0;
	for(int j=100,k=0;j<1000;j++,k++){
		int xx,numbers=0;
		p1[k].numin(j);	
		xx=p1[k].judge();
		numbers=p1[k].judge2(xx);
		sum1=sum1+numbers;
		if(numbers!=0){
		max=numbers;
		}
	}
	cout<<"the time of numbers is "<<number::counter<<endl;
	cout<<"the sum of numbers is "<<sum1<<endl;
	cout<<"the max of numbers is "<<max;
	delete []p1;
	getchar(); 
	return 0;
}
