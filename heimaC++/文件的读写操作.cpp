#include<iostream>
#include<fstream>
using namespace std;
#include<string>
int main() {
	// 1.�������������
	ofstream ofs;
	// 2.���ļ�
	ofs.open("test.txt", ios::out|ios::app);
	// 3.д����
	ofs << "hello world9" << endl;
	ofs << "hello c++" << endl;
	ofs.write("hello c++", 10); // д��10���ַ�
	// 4.�ر��ļ�
	ofs.close();
	// 1.��������������
	ifstream ifs;
	// 2.���ļ�
	ifs.open("test.txt", ios::in);
	// 3.������
	string buf;
	while (getline(ifs, buf)) {
		cout << buf << endl;
	}
	// 4.�ر��ļ�
	ifs.close();
	return 0;
}