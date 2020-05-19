#pragma once
#include "Base.h"
using namespace std;
class cl_child1 : public Base
{
public:

	cl_child1(Base* ch1) : Base(ch1) {

	}

	cl_child1(Base* ch1, string  name) : Base(ch1, name) {

	}

};

