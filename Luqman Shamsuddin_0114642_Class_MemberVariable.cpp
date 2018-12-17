#include <iostream>

using namespace std;

class Malaysian
{
	string name;
	int moment;
	
private :
	void RunHowYouKnowYouMalaysian(int moment)
	{
		switch (moment)
		{
			case 0:
				cout << endl;
				cout << "How to know you're a Malaysian ?" << endl;
				cout << endl;
				cout << "============================================================================" << endl;
				cout << "You, " << this->name << " as a Malaysian will know the power of the HAND!!" << endl;
				cout << "===========================================================================" << endl;
				break;
			case 1:
				cout << endl;
				cout << "How to know you're a Malaysian ?" << endl;
				cout << endl;
				cout << "=========================================================================" << endl;
				cout << "You, " << this->name << " as a Malaysian will end every word with LAH!!" << endl;
				cout << "=========================================================================" << endl;
				break;
			case 2:
				cout << endl;
				cout << "How to know you're a Malaysian ?" << endl;
				cout << endl;
				cout << "==========================================================" << endl;
				cout << "You, " << this->name << " as a Malaysian OTW is a LIE!!" << endl;
				cout << "==========================================================" << endl;
				break;
			case 3:
				cout << endl;
				cout << "How to know you're a Malaysian ?" << endl;
				cout << endl;
				cout << "=============================================================================" << endl;
				cout << "You, " << this->name << " as a Malaysian, everyone is a BOSS in the MAMAK!!" << endl;
				cout << "=============================================================================" << endl;
				break;
			case 4:
				cout << endl;
				cout << "How to know you're a Malaysian ?" << endl;
				cout << endl;
				cout << "====================================================================" << endl;
				cout << "You, " << this->name << " as a Malaysian will ROJAK all the way!!" << endl;
				cout << "====================================================================" << endl;
				break;
			default:
				break;
		}	
	}
	
protected :
public :
	void HowYouKnowYouMalaysian()
	{
		int i = 0;
		while(i < 5)
		{
			system("CLS");
			this->RunHowYouKnowYouMalaysian(i);
			cout << endl;
			system("PAUSE");
			i++;
		}
	}
	
	Malaysian(string name)
	{
		this->name = name;
		this->moment = 0;
	}
	
	~Malaysian()
	{
		cout << endl;
		cout << "======================================================" << endl;
		cout << "That's how you know you're a Malaysian, " << this->name << endl;
		cout << "======================================================" << endl;
		cout << endl;
	}
};

int main()
{
	string name;
	cout << "What's your name : ";
	getline(cin, name);
	
	Malaysian malaysian(name);
	malaysian.HowYouKnowYouMalaysian();
	
	cout << endl;
	
	return 0;
}

// Name: Muhamad Luqman bin Shamsuddin
// ID : 0114642
