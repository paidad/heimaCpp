#include<iostream>

using namespace std;
#include<string>

class CPU {
	public:
	virtual void calculate() {
		cout << "CPU calculating..." << endl;
	}
	virtual ~CPU() {
		cout << "CPU destroyed." << endl;
	}
};
class VideoCard {
	public:
	virtual void display() {
		cout << "VideoCard displaying..." << endl;
	}
};



class Computer {
	private:
	CPU *cpu;
	VideoCard *videoCard;
	public:
	Computer(CPU *cpu, VideoCard *videoCard) {
		this->cpu = cpu;
		this->videoCard = videoCard;
	}
	void work() {
		cpu->calculate();
		videoCard->display();
		delete cpu;
	}
};


class Inter_CPU:public CPU {
public:
		virtual void calculate() {
		cout << "Inter CPU calculating..." << endl;
		}
		~Inter_CPU() {
			cout << "Inter CPU destroyed." << endl;
		}

};

int main() {
	CPU *cpu = new Inter_CPU();
	VideoCard *videoCard = new VideoCard();
	Computer computer(cpu, videoCard);
	computer.work();
	return 0;
}