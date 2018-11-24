#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
	int age;
	char*name;
public:
	Person(int n = 1, char *na = (char*)"Zhuli");
	~Person();
	void Print();
	void Print()const;
	void ModifyAge();
};
Person::Person(int n, char*na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
Person::~Person()
{
	delete[]name;
}
void Person::Print()
{
	cout << "age:" << age << " name: " << name << endl;
	cout << "This is general Print()." << endl;
}
void Person::Print()const
{
	cout << "age:" << age << " name: " << name << endl;
	cout << "This is const Print()." << endl;
}
void Person::ModifyAge()
{
	age++;
}
int main()
{
	const Person p1(17,(char*) "wu");
	cout << "Output const object p1" << endl;
	p1.Print();
	Person p2(18, (char *)"zhang");
	cout << "Output general object p2" << endl;
	p2.ModifyAge();
	p2.Print();
	getchar();
	return 0;
}