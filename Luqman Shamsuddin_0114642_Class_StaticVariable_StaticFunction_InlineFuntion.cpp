#include <iostream>

using namespace std;

class Human
{
	string name;
	static string chirography;
	
private:
protected:
public:	
	static void ChangeWord(string script)
	{
		chirography = script;
	}
	
	void Speak();
	
	Human(string name)
	{
		this->name = name;
	}
};
	
string Human::chirography = "";
inline void Human::Speak()
{
	cout << this->name << " : " << chirography << endl;
}

int main() 
{
	string name1, name2;
	cout << "These 2 humans are twins." << endl;
	cout << endl;
	cout << "Input a name for twin number one : ";
	cin >> name1;
	cout << "Input a name for twin number two : ";
	cin >> name2;
	
	Human human1(name1);
	Human human2(name2);
	
	cout << endl;
	string script;
	cout << "What do you want them to say?" << endl << ": ";
	cin >> script;
	Human::ChangeWord(script);
	
	cout << endl;
	human1.Speak();
	human2.Speak();
	
	return 0;
}

// Name: Muhamad Luqman bin Shamsuddin
// ID: 0114642
