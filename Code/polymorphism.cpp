#include<iostream>

class A {
public:
	A(int speed)
	{
		this->speed = speed;
	}

	virtual int GetSpeed() {
		return speed;
	}

	virtual void SetSpeed(int speed) {
		this->speed = speed;
	}

protected:
	int speed;
};

class B : public A {
public:
	B(int speed) : A(speed)
	{

	}
	int GetSpeed() override {
		return speed * 1000;
	}

	void SetSpeed(int speed) override {
		this->speed = speed * 1000;
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	A* Aptr = &B(50);

	std::cout << Aptr->GetSpeed() << std::endl; // 50000

	return 0;
}