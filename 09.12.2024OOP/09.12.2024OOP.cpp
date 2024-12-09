#include <fstream>
#include <iostream>
using namespace std;

class Student
{
	string name;
	string surname;
	int age;
public:
	Student() = default;
	Student(const char* n, const char* sur, int a)
	{
		name = n;
		surname = sur;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << "\t";
		cout << "Surname: " << surname << "\t";
		cout << "Age: " << age << "\t";
	}
	void SaveFile()
	{
		ofstream out("dz.txt");
		out << name << "\t";
		out << surname << "\t";
		out << age << "\t";
	}
	void ReadFile()
	{
		ifstream read("dz.txt");
	}
};

int main()
{
	char str[100];
	string str;
	cout << "Enter text \n";
	//cin >> str; //¬вод только до первого пробела
	cin.getline(str, 100);
	//cout << str << endl;

	ofstream write("MyFile.txt");
	write << str << endl;
	write.close();

	ifstream read("MyFile.txt");

	char buff[10];
	while (!read.eof())
	{
		read >> buff;
		cout << buff << " ";
	}
	read.close();
}

