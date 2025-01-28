#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>

void UnSet() {
	std::unordered_multiset<std::string> coll;
	coll.insert("Hulk");
	coll.insert("Batman");
	coll.insert("Green Lantern");
	coll.insert("The Flash");
	coll.insert("Wonder Woman");
	coll.insert("Iron man");
	coll.insert("Iron man");
	coll.insert("Iron man");
	coll.insert("Woverine");
	coll.insert("Dr. Strange");
	coll.insert("Hawkman");

	for (const auto x : coll) {
		std::cout << "Bucket #: " << coll.bucket(x) << " Contains :" << x << std::endl;
	}
	std::cout << "Bucket count: " << coll.bucket_count() << std::endl;
	std::cout << "Number of elements: " << coll.size() << std::endl;
	std::cout << "Load factor: " << coll.load_factor() << std::endl;
}

void UnMap() {
	std::unordered_map<std::string, std::string> coll;
	coll["Batman"] = "Bruce Wayne";
	coll["Superman"] = "Clark Kent";
	coll["Hulk"] = "Bruce Banner";

	for (const auto& x : coll) {
		std::cout << "Bucket #:" << coll.bucket(x.first) << " -> " << x.first << ":" << x.second << std::endl;
	}
}

void Hashes() {
	std::hash<std::string> h;
	std::cout << "Hash:" << h("Hello") << std::endl;
}

int main() {
	UnMap();
	return 0;
}