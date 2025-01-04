#include "Integer.h"
#include <iostream>

void Display(Integer* p) {
	if (!p) {
		return;
	}
	std::cout << p->GetValue() << std::endl;
}

Integer* GetPointer(int value) { //factory function to create Integer type pointers
	Integer* p = new Integer{ value };
	return p;
}

void Operate(int value) {
	std::unique_ptr<Integer> p{ GetPointer(value) };
	if (p == nullptr) {
		p.reset(new Integer{ value });
	}
	p->SetValue(100);
	Display(p.get());
	p.reset(new Integer{});
	*p = __LINE__;
	Display(p.get());
}

int main() {
	Operate(5);
}