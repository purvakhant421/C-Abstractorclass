#include<iostream>

using namespace std;

class user{
	private:
		int a;
	public:
		int b;
	protected:
		int c;
};
class sub:protected user{
	public:
		void show(){
			c=30;
			cout<<"protected : "<<c<<endl;
		}
};

int main(){
	
	user ok;
	sub obj;
	
	
	
//	ok.a =10;
	ok.b=20;
//	ok.c=30;
	
//	cout<<ok.a<<endl;                        
	cout<<"public : "<<ok.b<<endl;           
//	cout<<ok.c<endl;       
	
	obj.show(); 
	return 0;
}