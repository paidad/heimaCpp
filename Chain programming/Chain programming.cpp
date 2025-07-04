#include<iostream>
using namespace std;

class MyInt {
	friend ostream& operator<<(ostream& out, MyInt a);
public:
	MyInt() {
		myint = 0;
	}
	//++���أ�
	MyInt& operator++() {
		myint++;
		return *this;
	}
	//����++
	MyInt operator++(int) {
		MyInt temp = *this; // ���浱ǰ״̬
		myint++;
		return temp; // ����֮ǰ��״̬
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
