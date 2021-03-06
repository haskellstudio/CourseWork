#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void display_array(int array[], const int length)
{
	cout << "[";
	for(int i = 0; i < length; ++i)
	{
		if(i != 0)
		{
			cout << ", ";
		}
		cout << array[i];
	}
	cout << "]" << endl;
}

void display_array_ptr(int array[], const int length)
{
	cout << "[";
	for(int *ptr = array, *end = array + length; ptr < end; ++ptr)
	{
		if(ptr != array)
		{
			cout << ", ";
		}
		cout << *ptr;
	}
}

void pass_by_value(int x)
{
	x = 20;
}

void pass_by_pointer(int x)
{
	//*x = 10;
}

void pass_by_reference(int &x)
{
	x = 20;
}

int main(int argc, char* argv[]) 
{
	int x = 5, y = 6;

	int *z;
	z = &x;

	cout << x << " " << y << " " << z << endl;
	cout << *z << endl;

	*z = 7;
	cout << x << " " << y << " " << *z << endl;

	z = &y;
	*z = x;
	cout << x << " " << y << " " << *z << endl;

	cout << ++z << endl;

	int *values = new int[x];
	for(int i = 0; i < x; ++i)
	{
		values[i] = i;
	}
	display_array_ptr(values, x);
	delete [] values;
	values = NULL;
	cout << values[0] << endl;
}
