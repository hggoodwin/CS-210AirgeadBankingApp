#include <iostream>
#include "InvestmentCalculator.h"

using namespace std;

int main() {
    double initialInvestment, monthlyDeposit, annualInterestRate;
    int numYears;

    cout << "======================================\n";
    cout << "     Welcome to Airgead Banking       \n";
    cout << "======================================\n";
    cout << "Enter Initial Investment Amount: $";
    cin >> initialInvestment;
    cout << "Enter Monthly Deposit: $";
    cin >> monthlyDeposit;
    cout << "Enter Annual Interest Rate (in %): ";
    cin >> annualInterestRate;
    cout << "Enter Number of Years: ";
    cin >> numYears;

    InvestmentCalculator calc(initialInvestment, monthlyDeposit, annualInterestRate, numYears);

    calc.displayReportWithoutMonthlyDeposit();
    calc.displayReportWithMonthlyDeposit();

    return 0;
}