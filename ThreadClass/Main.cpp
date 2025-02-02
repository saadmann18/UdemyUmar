#include <iostream>
#include <thread>
#include <Windows.h>

void Process() {

}

int main() {
	std::thread t1(Process);
	HANDLE	handle = t1.native_handle();
	SetThreadDescription(handle, L"MyThread");
	auto id = t1.get_id();
	std::cout << id << std::endl;
	t1.native_handle();

	int cores = std::thread::hardware_concurrency();
	std::cout << "Cores:" << cores << std::endl;

	t1.join();
	return 0;
}