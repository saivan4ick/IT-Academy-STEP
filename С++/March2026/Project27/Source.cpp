#include <iostream>
#include <string>
#include <vector>
#include <fstream>
int countB(double shirina, double shirina_oboev) {
	if (shirina <= 0 || shirina_oboev <= 0) {
		throw 3;
	}
	int count_shirina = 0;
	count_shirina = int(shirina / shirina_oboev);
	if (shirina - count_shirina * shirina_oboev > 0) {
		count_shirina += 1;
	}
	return count_shirina;
}
int slozhenie(double vusota, double shirina, double dlinna, double shirina_oboev) {
	int t = 0;
	t = countB(shirina, shirina_oboev) * 2 + countB(dlinna, shirina_oboev) * 2 * vusota;
	return t;
}
int main() {
	setlocale(LC_ALL, "Russian");
	while (true) {
		std::cout << "¬ведите высоту и ширину комнаты" << std::endl;
		double vusota = 0.0, shirina = 0.0, dlinna = 0.0;
		std::cin >> vusota >> shirina >> dlinna;
		std::cout << "¬ведите ширину обоев" << std::endl;
		double shirina_oboev = 0;
		std::cin >> shirina_oboev;
		try {
			int s = slozhenie(vusota, shirina, dlinna, shirina_oboev);
			std::cout << "s=" << s << std::endl;
			break;
		}
		catch (int a) {
			std::cout << "введены неверные данные\n";
			continue;
		}
	}
}