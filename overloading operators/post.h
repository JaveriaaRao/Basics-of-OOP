#pragma once
#include<iostream>
using namespace std;
class post{
	int number;
public:
	post(int);
	post operator++(int);
	friend ostream& operator<<(ostream &, const post &);
	~post();
};