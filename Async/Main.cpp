#include <future>
#include <iostream>	
#include <thread>

int Operation(int count) {
	using namespace std::chrono_literals;
	int sum{};
	for (int i = 0; i < 10; ++i) {
		sum += i;
		std::cout << '.';
		std::this_thread::sleep_for(300ms);
	}
	return sum;
}

int main() {
	using namespace std::chrono_literals;
	std::future<int> result = std::async(std::launch::deferred, Operation, 10); 
	std::this_thread::sleep_for(1s);
	std::cout << "Main() threading continues execution...\n";
	if (result.valid()) {
		auto sum = result.get();
		std::cout << sum << std::endl;
	}
}