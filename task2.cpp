#include <iostream>
void inputCoordinates();
int quater(int* x, int* y);
void outputAnswer(int quater);
int main() {
	inputCoordinates();
	return 0;
}
void inputCoordinates() {
	int x, y;
	std::cout << "Enter two parameters for X and Y" << std::endl;
	std::cin >> x >> y;
	outputAnswer(quater(&x, &y));

}
int quater(int* x, int* y) {
	if (*x > 0 && *y > 0) {

		std::cout << "I quarter" << std::endl;
	}
	else if (*x > 0 && *y < 0) {

		std::cout << "IV quarter" << std::endl;
	}
	else if (*x < 0 && *y < 0) {

		std::cout << "III quarter" << std::endl;
	}
	else if (*x < 0 && *y > 0) {

		std::cout << "II quarter" << std::endl;
	}
	return 0;
}
void outputAnswer(int quater) {
	std::cout << quater;
	return;
}