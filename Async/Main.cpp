#include <future>
#include <iostream>	
#include <thread>

void Downloader() {
	using namespace std::chrono_literals;
	for (int i = 0; i < 10; ++i) {
		std::cout << '.';
		std::this_thread::sleep_for(300ms);
	}
}

int main() {
	std::future<void> result = std::async(Downloader);
	std::cout << "Main() threading continues execution...\n";
	result.get();
}