#include <iostream>
using namespace std;
void CreateWindow(const char* title, int x, int y, int width, int height);
void CreateWindow(const char* title, int x=-1, int y = -1, int width = -1, int height = -1)
{
	cout << "Title: " << title << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
}

int main()
{
	CreateWindow("Notepad");
	return 0;
}
