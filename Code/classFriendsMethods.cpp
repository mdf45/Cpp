class Car;
class BMW;

class BMW {
public:
	void move(Car& car);
};

class Car {
private:
	int speed = 100;
	std::string model = "Audi";
public:
	Car() {

	}
	Car(int speed, std::string model) {
		this->speed = speed;
		this->model = model;
	}

	friend void BMW::move(Car& car);
};

int main() {
	using namespace std;
	setlocale(LC_ALL, "ru");

	Car bmw(200, "BMW");

	BMW m5;

	m5.move(bmw);

	return 0;
}

void BMW::move(Car& car) {
	std::cout << car.speed << "\t" << car.model << std::endl;
}