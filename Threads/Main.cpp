#include <iostream>
#include <list>
#include <thread>

std::list<int> g_Data;
const int SIZE = 5000000;

class String {
public:
	//default constructor
	String() {
		std::cout << "String()" << std::endl;
	}
	//copy constructor
	String(const String &) {
		std::cout << "String(const String&)" << std::endl;
	}
	//Assignment operator
	String &operator=(const String&) {
		std::cout << "operator=(const String&) " << std::endl;
		return *this;
	}
	//Destructor
	~String() {
		std::cout << "~String()" << std::endl;
	}
};

void Download(const String &file) {
	//std::cout << "Started downloading: " << file << std::endl;
	for (int i = 0; i < SIZE; ++i) {
		g_Data.push_back(i);
	}
	std::cout << "Finished" << std::endl;
}
int main() {
	String file;
	std::cout << "[main] started" << std::endl;
	std::thread thDownloader(Download, std::cref(file));
	//thDownloader.detach();
	std::cout << "[main] continued operation" << std::endl;
	if (thDownloader.joinable()) {
		thDownloader.join();
	}
	return 0;
}