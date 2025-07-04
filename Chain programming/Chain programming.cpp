#include<iostream>
using namespace std;

class MyInt {
	friend ostream& operator<<(ostream& out, MyInt a);
public:
	MyInt() {
		myint = 0;
	}
	//++重载；
	MyInt& operator++() {
		myint++;
		return *this;
	}
	//后置++
	MyInt operator++(int) {
		MyInt temp = *this; // 保存当前状态
		myint++;
		return temp; // 返回之前的状态
	}
	//
	void operator()(MyInt a) {
		cout<< myint + a.myint;
	}
private:
	int myint;
};

ostream& operator<<(ostream& cout, MyInt a) {
	cout << a.myint;
	return cout;
}

int main() {
	MyInt a;
	cout << ++(++a) << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
}
