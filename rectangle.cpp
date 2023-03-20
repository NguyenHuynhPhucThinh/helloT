#include <rectangle.cpp>

Rectangle::Rectangle(float w, float h)
{
	width = w;
	height = h;
}

Rectangle::void Print()
{
	cout << "width: " << width << endl;
	cout << "height: " << height << endl;
}