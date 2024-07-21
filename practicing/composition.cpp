#include <iostream>
#include <string>
using namespace std;

class Heart{
private:
	string type;
public:
	Heart(string t): type(t){}
	~Heart(){
		cout << "Heart Stopped Beating" << endl;
	}
	void isBeating(){
		cout << "Heart is beating !"<<endl;
	}
};
class Person{
private:
	string name;
	Heart* heart;
public:
	Person(string n):name(n){
		heart = new Heart("Personal");
	}
	~Person(){
		delete heart;
		cout << "Person is ded"<<endl;
	}
	void getDetails(){
		cout << "Name: " << name << endl;
	}
};
int main(){
	Person* p = new Person("Robot");
	p->getDetails();
	delete p;
	return 0;
}
