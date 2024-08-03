#include "complex.h"

complex::complex()
{
	num1 = 0;
	num2 = 0;
}
complex::complex(int n1,int n2)
{
	num1 = n1;
	num2 = n2;
}
complex complex:: operator+(complex n)
{
	complex temp;
	temp.num1 = num1 + n.num1;
	temp.num2 = num2 + n.num2;
	return temp;

}
complex complex:: operator-(complex n)
{
	complex temp;
	temp.num1 = num1 - n.num1;
	temp.num2 = num2 - n.num2;
	return temp;

}
complex complex:: operator*(complex n)
{
	complex temp;
	temp.num1 = num1 *n.num1;
	temp.num2 = num2 *n.num2;
	return temp;

}
complex complex:: operator/(complex n)
{
	complex temp;
	if (n.num1 == 0||n.num2==0)
	{
		cout << "divission nahi ho sakti " << endl;
		return temp;
	}
	temp.num1 = num1 /n.num1;
	temp.num2 = num2 /n.num2;
	return temp;

}
//ostream& operator<<(ostream & output, const complex obj)
//{
//	output << "complex numbers are " << endl;
//	output <<obj.num1 <<" "<< obj.num2 << endl;
//	return output;
//}
void complex::display()
{
	if (num2 < 0) {
		cout << num1 << num2 << "i" << endl;
	}
	else {
		cout << num1 << " + " << num2 << "i" << endl;
	}
}
complex::~complex()
{
}
