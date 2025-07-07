#include<iostream>
#include<fstream>
using namespace std;
#include<string>
int main() {
	// 1.创建输出流对象
	ofstream ofs;
	// 2.打开文件
	ofs.open("test.txt", ios::out|ios::app);
	// 3.写数据
	ofs << "hello world9" << endl;
	ofs << "hello c++" << endl;
	ofs.write("hello c++", 10); // 写入10个字符
	// 4.关闭文件
	ofs.close();
	// 1.创建输入流对象
	ifstream ifs;
	// 2.打开文件
	ifs.open("test.txt", ios::in);
	// 3.读数据
	string buf;
	while (getline(ifs, buf)) {
		cout << buf << endl;
	}
	// 4.关闭文件
	ifs.close();
	return 0;
}