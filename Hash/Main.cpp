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
	std::unordered_multimap<std::string, std::string> coll;
	/*coll["Batman"] = "Bruce Wayne";
	coll["Superman"] = "Clark Kent";
	coll["Hulk"] = "Bruce Banner";*/

	coll.insert(std::make_pair("Batman", "Bruce Wayne"));
	coll.insert(std::make_pair("Batman", "Bruce Wayne"));
	coll.insert(std::make_pair("Superman", "Clark Kent"));
	coll.insert(std::make_pair("Hulk", "Bruce Banner"));

	for (const auto& x : coll) {
		std::cout << "Bucket #:" << coll.bucket(x.first) << " -> " << x.first << ":" << x.second << std::endl;
	}
}

class Employee {
	std::string m_Name;
	int m_Id;
public:
	Employee(const std::string &n, int id):m_Name(n), m_Id(id){}
	const std::string& GetName()const {
		return m_Name;
	}
	int GetId()const {
		return m_Id;
	}
};

struct EmployeeHash {
	size_t operator()(const Employee& emp)const {
		auto s1 = std::hash<std::string>{}(emp.GetName());
		auto s2 = std::hash<int>{}(emp.GetId());
		return s1 ^ s2;
	}
};
struct EmpEquality {
	bool operator()(const Employee& e1, const Employee& e2)const {
		return e1.GetId() == e2.GetId() && e1.GetName() == e2.GetName();
	}
};
void Hashes() {
	std::hash<std::string> h;
	std::cout << "Hash:" << h("Hello") << std::endl;
	std::unordered_set<Employee, EmployeeHash, EmpEquality> coll;
	coll.insert(Employee{ "Saad", 123 });
	coll.insert(Employee{ "Joye", 456 });
	coll.insert(Employee{ "bob", 678 });

	for (const auto& x : coll) {
		std::cout << x.GetId() << ':' << x.GetName() << '\n';
	}
}

int main() {
	Hashes();
	return 0;
}