//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//	//地址早绑定
//	/*void speak() {
//		cout << "Animal speak" << endl;		
//	}*/
//	//地址晚绑定
//	virtual void speak() {
//		cout << "Animal speak" << endl;
//	}
//};
//
//class Cat :public Animal {
//public:
//	void speak() {
//		cout << "cat speak" << endl;
//
//	}
//};
//
//void setSpeak(Animal &animal) {
//	animal.speak();
//}
//
//int main() {
//	Cat cat;
//	setSpeak(cat);
//}