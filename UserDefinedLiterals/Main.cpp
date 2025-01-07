#include <iostream>

class Distance
{
	long double m_Kilometers;
public:
	Distance(long double km): m_Kilometers{km}{}
	long double GetKm()const {
		return m_Kilometers;
	}
	void setKm(long double val) {
		m_Kilometers = val;
	}
};
Distance operator""_mi(long double val) {
	return Distance{ val * 1.6 };
}
Distance operator""_meters(long double val) {
	return Distance{ val / 1000 };
}
int main() {
	Distance dist{ 32.0_mi };
	Distance d2{ 7234.0_meters };
	std::cout << d2.GetKm() << std::endl;

	int x = 5;

	return 0;
}