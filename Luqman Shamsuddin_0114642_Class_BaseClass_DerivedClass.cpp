#include <iostream>

using namespace std;

class Rectangle
{
	public:
		int width;
		int height;
		
		Rectangle()
		{
			cout << "Created a rectangle." << endl;
		}
		
		~Rectangle()
		{
			cout << "Destroyed a rectangle." << endl;
		}
		
		void SetDimension(int w, int h)
		{
			width = w;
			height = h;
		}
		
		int GetArea()
		{
			return width*height;
		}
};

class Triangle : public Rectangle
{
	public:
		Triangle()
		{
			cout << "A new triangle from rectangle class has been created." << endl;
		}
		
		~Triangle()
		{
			cout << "Triangle has been destroyed." << endl;
		}
		
		void SetDimension(int w, int h)
		{
			Rectangle::SetDimension(w, h);
		}
		
		int GetArea()
		{
			return width * height / 2.0f;
		}
};

int main()
{
	cout << "Base class" << endl;
	Rectangle* rectangle = new Rectangle();
	rectangle->SetDimension(7, 5);
	cout << endl;
	cout << "Dimension of the rectangle :" << endl;
	cout << "Length : " << rectangle->width << endl;
	cout << "Height : " << rectangle->height << endl;
	cout << "Area of square : " << rectangle->GetArea() << endl;
	cout << endl;
	
	delete rectangle;
	system("pause");
	system("cls");
	
	
	cout << "Derived class" << endl;
	Triangle* triangle = new Triangle();
	triangle->SetDimension(5, 2);
	cout << endl;
	cout << "Dimension of the triangle :" << endl;
	cout << "Side length : " << triangle->width << endl;
	cout << "Area of triangle : " << triangle->GetArea() << endl;
	cout << endl;
	
	delete triangle;
	system("pause");
	return 0;
}

//Name : Muhamad Luqman bin Shamsuddin
//ID : 0114642
