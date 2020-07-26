#include<iostream> 

using namespace std;

class Test
{
private:
	int a;
	int b;

public:
	static int count;

	Test()
	{
		a = 10;
		b = 10;
		count++;
	}
};

int Test::count = 0;

int main()
{
	// Create an object and check count value
	Test t1;

	cout << "t1.count = " << t1.count << endl;
	cout << "Test::count = " << Test::count << endl << endl;


	// Create another object and check count value
	Test t2;

	cout << "t1.count = " << t1.count << endl;
	cout << "t2.count = " << t2.count << endl;
	cout << "Test::count = " << Test::count << endl << endl;

	return 0;
}
