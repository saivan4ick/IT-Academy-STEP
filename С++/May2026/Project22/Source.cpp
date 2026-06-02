#include <iostream>
#include <vector>
using namespace std;
void selectionSort(int massiv[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n - 1; j++) {
			if (massiv[i] < massiv[min]) {
				min = j;
			}
		}
			int kruzhka = massiv[i];
			massiv[i] = massiv[min];
			massiv[min] = kruzhka;
	}
}
//int main() {
//	int number1 = 0; 
//	int number2 = 0;
//	int sum = 0;
//	cout << "Введите два числа";
//	cin >> number1 >> number2;
//	sum = number1 + number2;
//	cout << "Сумма: " << sum << endl;
//}
class Animal {
public:
	virtual string get_voice()
	{
		return "00000";
	}
};
class Cat: public Animal {
	string name;
	string voice;
public:
	Cat() {}
	Cat(string name, string voice) {
		this->name = name;
		this->voice = voice;
	}
	~Cat(){}
	string get_name() { return this->name; }
	void set_name(string new_name) {
		this->name = new_name;
	}
	string get_voice()
	{
		return "mau";
	}
};
class Dog: public Animal {
	string name;
	int age;
	string voice;
public:
	Dog() {}
	~Dog() {}
	Dog(string name, int age) {
		this->name = name;
		this->age = age;
		this->voice = "Гав";
	}
	string get_name_Dog() {
		return this->name; 
	}
	int get_age_Dog() { 
		return this->age;
	}
	string get_voice() { 
	return this->voice; 
	};
	void set_name_Dog(string new_name_Dog) {
		this->name = new_name_Dog;
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	Cat t = Cat("Том", "мяу");
	string a = t.get_name();
	cout << t.get_name() << endl;
	t.set_name("Radik");
	cout << t.get_name() << endl;

	Dog t2 = Dog("Шарик", 4);
	string b = t2.get_name_Dog();
	cout << t2.get_name_Dog() << endl;
	t2.set_name_Dog("Пес");
	cout << t2.get_name_Dog() << t2.get_age_Dog() << endl;


	vector<Animal> vect;
	
		vect.push_back(t);
		vect.push_back(t2);
		cout << " -------\n";
		for (int i = 0; i < vect.size(); i++)
		{
			cout<<i<<") "<<vect[i].get_voice()<<std::endl;
	}
}