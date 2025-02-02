#include <iostream>
#include <thread>
#include <Windows.h>

void Process() {

}

int main() {
	std::thread t1(Process);
	auto id = t1.get_id();
	std::cout << id << std::endl;
	t1.native_handle();
	t1.join();
	return 0;
}