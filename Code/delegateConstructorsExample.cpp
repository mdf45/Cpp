#include <iostream>
#include <string>

using namespace std;

class A {
	// constructors
public:
	A() {
		this->health = 0;
		this->damage = 0;
	}
public:
	A(int health) : A() {
		this->health = health;
	}
public:
	A(int health, int damage) : A(health) {
		this->damage = damage;
	}
	// setters
public:
	void SetHealth(int health) {
		this->health = health;
	}
public:
	void SetDamage(int damage) {
		this->damage = damage;
	}
	// getters
public:
	int GetHealth() {
		return health;
	}
public:
	int GetDamage() {
		return damage;
	}
	// variables
private:
	int health;
	int damage;
};

int main() {
	setlocale(LC_ALL, "ru");

	A object1;
	A object2(100);
	A object3(100, 38);

	cout << "HP: " << object1.GetHealth() << "\tDMG: " << object1.GetDamage() << endl; // HP: 0   DMG: 0
	cout << "HP: " << object2.GetHealth() << "\tDMG: " << object2.GetDamage() << endl; // HP: 100 DMG: 0
	cout << "HP: " << object3.GetHealth() << "\tDMG: " << object3.GetDamage() << endl; // HP: 100 DMG: 38

	return 0;
}
