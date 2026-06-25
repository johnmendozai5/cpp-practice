#include <iostream>
#include <iomanip>


double CalcToll(int hour, bool isMorning, bool isWeekend) {
	if (!isMorning && hour != 12) {
        hour += 12;
	}
	if (isMorning && hour == 12) {
        hour = 0;            // 12 AM (midnight) -> 0
    }

	
	if (isWeekend) {
        if (hour < 7) {
            return 6.05;
        } else if (hour < 20) {
            return 7.15;
        } else {
            return 6.10;
        }
    } else {
        if (hour < 7) {
            return 6.15;
        } else if (hour < 10) {
            return 7.95;
        } else if (hour < 15) {
            return 6.90;
        } else if (hour < 20) {
            return 8.95;
        } else {
            return 6.40;
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