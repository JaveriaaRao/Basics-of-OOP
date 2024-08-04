#include "complex.h"
int main()
{
	complex obj(8, -9), obj2(7,6 );
	complex obj3 = obj + obj2;
	/*cout << obj << endl;
	cout << obj2 << endl;
	cout << obj + obj2 << endl;
	cout << obj3 << endl;
	complex obj4 = obj - obj2;
	cout << obj - obj2 << endl;
	cout << obj4 << endl;
	complex obj5 = obj *obj2;
	cout << obj * obj2 << endl;
	cout << obj5 << endl;
	complex obj6 = obj / obj2;
	cout << obj / obj2 << endl;
	cout << obj6 << endl;*/
	obj3.display();
	complex obj4 = obj - obj2;
	obj4.display();
	complex obj5 = obj * obj2;
	obj5.display();
	complex obj6 = obj / obj2;
	obj6.display();

    system("pause");
	return 0;
}