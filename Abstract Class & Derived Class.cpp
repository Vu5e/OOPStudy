#include <iostream>

using namespace std;

class Polygon
{
	public:
		int length;
		int height;
		
		virtual int GetArea() = 0;
		
		void SetDimension(int x, int y)
		{
			length = x;
			height = y;
		}
		
		virtual void PrintDimension()
		{
			cout << "Abstract class length : " << length << endl;
			cout << "Abstract class height : " << height << endl;
		}
		
		virtual void PrintArea() = 0;
};

class Rectangle : public Polygon
{
	public:
		int GetArea()
		{
			return length*height;
		}
		
		void PrintDimension()
		{
			cout << "Derived class length : " << length << endl;
			cout << "Derived class height : " << height << endl;
		}
		
		void PrintArea()
		{
				cout << "(Child function) Area : " << GetArea() << endl;
		}
};

int main()
{
	cout << "Abstract class : Polygon" << endl;
	Polygon* polygon;
	Rectangle* rectangle0 = new Rectangle();
	polygon = rectangle0;
	polygon->SetDimension(9, 6);
	cout << "Dimension :" << endl;
	polygon->PrintDimension();
	polygon->PrintArea();
	
	cout << endl;
	
	Rectangle* rectangle1 = new Rectangle();
	rectangle1->SetDimension(5, 7);
	
	cout << "Derived class : Rectangle" << endl;
	cout << "Dimension :" << endl;
	rectangle1->PrintDimension();
	rectangle1->PrintArea();
	
	system("pause");
	
	return 0;
}
