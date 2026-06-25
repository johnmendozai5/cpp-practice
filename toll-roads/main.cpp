#include <iostream>
#include <iomanip>


double CalcToll(int hour, bool isMorning, bool isWeekend) {
	if(isWeekend) {
		if(isMorning) {
			return 6.05;
		} else {
			return 7.15;
		}
	} else {
		if (isMorning) {
			return 7.95;
		} else {
			return 6.90;
		}
	}
}

int main() {

	std::cout << std::fixed << std::setprecision(2);


	std::cout << CalcToll(8, true, false) << std::endl;   // 7.95
	std::cout << CalcToll(1, false, false) << std::endl;  // 6.9
	std::cout << CalcToll(3, false, true) << std::endl;   // 7.15
	std::cout << CalcToll(5, true, true);            // 6.05

	return 0;
}