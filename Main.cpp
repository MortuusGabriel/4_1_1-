#include <iostream>
#include "cl_child1.h"
#include "cl_child2.h"


using namespace std;


int main() {
	string parent, name;

	cin >> parent;

	Base* baseptr = new Base(0, parent);


	cl_child1* c1ptr = nullptr;
	Base* temp = baseptr;

	while (true) {

		cin >> parent >> name;
		if (parent == name)
			break;


		if (parent == temp->Get_Name()) {
			cl_child1* c1 = new cl_child1(temp, name);
			temp->Push(c1);
			c1ptr = c1;
		}


		else {
			cl_child1* c1 = new cl_child1(c1ptr, name);
			c1ptr->Push(c1);
			
			temp = c1ptr;

		}

		
		
	};


	baseptr->Print_Tree();
	
	delete baseptr;
	delete c1ptr;
	return 0;
}