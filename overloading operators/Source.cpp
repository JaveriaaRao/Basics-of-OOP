#include"post.h"
int main()
{
	post obj1(12);
	post obj2 = obj1++;
	obj1++;
	cout << "object1 is " << obj1 << endl;
	cout << "object1 is " << obj1++ << endl;
	cout << "object2 is " << obj2 << endl;
	system("pause");
	return 0;
}