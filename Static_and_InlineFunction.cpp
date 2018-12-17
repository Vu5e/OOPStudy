#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int const NUM = 10;
class chicken
{
public:
	static int s_Total;
	int randomNumber = 0;
	
	inline void Callout()
	{
		cout << "\nA new chick is born!" << endl;
		cout << "It's weight is' " << randomNumber << " kg.  address: " << &randomNumber << endl;
		cout << "Total amount for now: "<<s_Total << "  address: " << &s_Total << endl;
	}
	
	static int GetTotal()
	{
		cout << "\n"<<chicken::s_Total << " chicks are born today." << endl;
	}
	
	chicken()
	{
		randomNumber=rand()%NUM+1;
		s_Total++;
		Callout();
	}
};

int chicken::s_Total=0;

int main()
{
	srand(time(NULL));
	chicken::GetTotal();
	cout << "address: " << &chicken::s_Total <<endl;
	chicken chicken1,chicken2,chicken3;
	chicken::GetTotal();
	system("pause");
	return 0;
}
