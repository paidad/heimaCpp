#include<iostream>
#include<string>
using namespace std;

class CPU {
public:
	virtual void calculate() = 0;
};
class VIDEOCARD {
public:
	virtual void display() = 0;
};

class MEMORY {
public:
	virtual void storge() = 0;
};
class CONPUTER {
public:
	CONPUTER() {
		m_cpu->calculate();
		m_mr->storge();
		m_vc->display();
	}
	void work(CPU* cpu,VIDEOCARD* vc,MEMORY* mr) {
		m_cpu = cpu;
		m_vc = vc;
		m_mr = mr;
	}
private:
	CPU* m_cpu;
	VIDEOCARD* m_vc;
	MEMORY* m_mr;
};


////具体实现

class Inter_CPU :public CPU {
public:
	void calculate() {
		cout << "this is Inter_CPU" << endl;
	}
};
class Inter_VIDEOCARD :public VIDEOCARD {
public:
	void display() {
		cout << "this is Inter_VIDEOCARD" << endl;
	}
};
class Inter_MEMORY :public MEMORY {
public:
	void storge() {
		cout << "this is Inter_MEMORY" << endl;
	}
};



int main() {
	CONPUTER com;
	com.work(new Inter_CPU(), new Inter_VIDEOCARD(), new Inter_MEMORY());

	return 0;
}

