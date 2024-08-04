#include"post.h"


post::post(int n = 0)
{
	number = n;
}
post post::operator++(int)
{
	post temp;
	temp = *this;
	temp.number++;
	return temp;

}
ostream& operator<<(ostream & output, const post &obj)
{
	output  << obj.number << endl;
	return output;
}
post::~post()
{

}