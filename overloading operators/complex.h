#include<iostream>
using namespace std;
class complex
{
	int num1;
	int num2;
public:
	complex( );
	complex(int,int);
	complex operator+(complex);
	complex operator-(complex);
	complex operator*(complex);
	complex operator/(complex);
	/*friend ostream& operator<<(ostream &, const complex);*/
	void display();


	~complex();
};

