#include <iostream>
void userOperation();
void isMounthPay(int* isLoanAmount, int* firstPay, int* isLoanTime);
int main() {
	userOperation();
	return 0;
}
void userOperation() {
	int isLoanAmount, firstPay, isLoanTime;
	std::cout << "Enter the loan amount, the amount of the down payment and the loan term" << std::endl;
	std::cin >> isLoanAmount >> firstPay >> isLoanTime;
	if (firstPay < isLoanAmount * 0.20);
	isMounthPay(&isLoanAmount, &firstPay, &isLoanTime);
}
void isMounthPay(int* isLoanAmount, int* firstPay, int* isLoanTime) {
	int isMounthPay;
	*isLoanTime *= 12;
	isMounthPay = (*isLoanAmount - *firstPay) / *isLoanTime;
	std::cout << isMounthPay;
}