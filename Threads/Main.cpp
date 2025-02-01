#include <iostream>
#include <list>
#include <thread>

std::list<int> g_Data;
const int SIZE = 50000000;

void Download() {
	std::cout << "Started" << std::endl;
	for (int i = 0; i < SIZE; ++i) {
		g_Data.push_back(i);
	}
	std::cout << "Finished" << std::endl;
}
int main() {
	std::cout << "[main] started" << std::endl;
	std::thread thDownloader(Download);
	std::cout << "[main] started another" << std::endl;
	thDownloader.join();
	return 0;
}