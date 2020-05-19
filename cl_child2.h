#pragma once
#include "Base.h"
using namespace std;
class cl_child2 : public Base
{

public:
	cl_child2(Base* ch2) : Base(ch2) {

	}

	cl_child2(Base* ch2, string  name) : Base(ch2, name) {

	}

};

