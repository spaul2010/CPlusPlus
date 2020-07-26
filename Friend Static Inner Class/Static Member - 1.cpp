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
	}
};

int Test::count = 0;

int main()
{
	Test t1;
	Test t2;

	cout << "t1.count = " << t1.count << endl;
	cout << "t2.count = " << t2.count << endl;
	cout << "Test::count = " << Test::count << endl << endl;


	// Set count using t1 object
	t1.count = 25;

	cout << "t1.count = " << t1.count << endl;
	cout << "t2.count = " << t2.count << endl;
	cout << "Test::count = " << Test::count << endl << endl;


	// Set count using t2 object
	t2.count = 50;

	cout << "t1.count = " << t1.count << endl;
	cout << "t2.count = " << t2.count << endl;
	cout << "Test::count = " << Test::count << endl << endl;


	// Set count using the class
	Test::count = 100;

	cout << "t1.count = " << t1.count << endl;
	cout << "t2.count = " << t2.count << endl;
	cout << "Test::count = " << Test::count << endl << endl;

	return 0;
}
