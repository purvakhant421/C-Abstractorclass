#include<iostream>

using namespace std;


class Parent {
	public:
   virtual void childdetails(){
   	cout<<"parent detail"<<endl;	
	}
};
class child : public Parent {
	public:
	 void childdetails(){
	 	cout<<"child detail"<<endl;
	 }
	
};
int main(){
	child ans;
	Parent ok;
	Parent *obj;
	obj=&ans;
	obj->childdetails();
	
	return 0;
}