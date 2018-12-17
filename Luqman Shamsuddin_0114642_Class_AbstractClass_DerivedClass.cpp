#include <iostream>

using namespace std;

class Polygon
{
	public:
		int width;
		int height;
		
		virtual int GetArea() = 0;
		
		void SetDimension(int x, int y)
		{
			width = x;
			height = y;
		}
		
		virtual void PrintDimension()
		{
			cout << "Abstract class length : " << width << endl;
			cout << "Abstract class height : " << height << endl;
		}
		
		virtual void PrintArea() = 0;
};

class Triangle : public Polygon
{
public :
	int GetArea()
		{
			return width * height / 2.0f;
		}
		
	void PrintDimension()
		{
			cout << "Derived class length : " << width << endl;
			cout << "Derived class height : " << height << endl;
		}
	
	void PrintArea()
		{
				cout << "Derived class Area : " << GetArea() << endl;
		}	
};

class Square : public Polygon
{
public :
	int GetArea()
		{
			return width * height;
		}
		
	void PrintDimension()
		{
			cout << "Derived class length : " << width << endl;
			cout << "Derived class height : " << height << endl;
		}
	
	void PrintArea()
		{
				cout << "Derived class Area : " << GetArea() << endl;
		}	
};

class Rectangle : public Polygon
{
	public:
		int GetArea()
		{
			return width*height;
		}
		
		void PrintDimension()
		{
			cout << "Derived class length : " << width << endl;
			cout << "Derived class height : " << height << endl;
		}
		
		void PrintArea()
		{
				cout << "Derived Class Area : " << GetArea() << endl;
		}
};


int main()
{
	cout << "=====================================" << endl;
	cout << "Abstract class : Polygon" << endl;
	Polygon* polygon;
	Rectangle* rectangle0 = new Rectangle();
	polygon = rectangle0;
	polygon->SetDimension(9, 6);
	cout << "Dimension :" << endl;
	polygon->PrintDimension();
	polygon->PrintArea();
	cout << "=====================================" << endl;
	
	cout << endl;
	
	cout << "=====================================" << endl;
	Square* square1 = new Square();
	square1->SetDimension(3, 5);
	
	cout << "Derived class : Square" << endl;
	cout << "Dimension :" << endl;
	square1->PrintDimension();
	square1->PrintArea();
	cout << "=====================================" << endl;
	
	cout << endl;
	
	cout << "=====================================" << endl;
	Triangle* triangle1 = new Triangle();
	triangle1->SetDimension(4, 6);
	
	cout << "Derived class : Triangle" << endl;
	cout << "Dimension :" << endl;
	triangle1->PrintDimension();
	triangle1->PrintArea();
	cout << "=====================================" << endl;
	
	cout << endl;
	
	cout << "=====================================" << endl;
	Rectangle* rectangle1 = new Rectangle();
	rectangle1->SetDimension(5, 7);
	
	cout << "Derived class : Rectangle" << endl;
	cout << "Dimension :" << endl;
	rectangle1->PrintDimension();
	rectangle1->PrintArea();
	cout << "=====================================" << endl;
	
	system("pause");
	
	return 0;
}

// Name: Muhamad Luqman bin Shamsuddin
// ID: 0114642
