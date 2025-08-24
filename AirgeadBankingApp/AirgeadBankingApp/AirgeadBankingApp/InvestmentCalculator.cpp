#include <iostream>
#include <iomanip>
#include "InvestmentCalculator.h"

using namespace std;

InvestmentCalculator::InvestmentCalculator(double initInvestment, double monthlyDep, double annualRate, int years) {
    initialInvestment = initInvestment;
    monthlyDeposit = monthlyDep;
    annualInterestRate = annualRate;
    numYears = years;
}

void InvestmentCalculator::setInitialInvestment(double amount) {
    initialInvestment = amount;
}

void InvestmentCalculator::setMonthlyDeposit(double amount) {
    monthlyDeposit = amount;
}

void InvestmentCalculator::setAnnualInterestRate(double rate) {
    annualInterestRate = rate;
}

void InvestmentCalculator::setNumYears(int years) {
    numYears = years;
}

void InvestmentCalculator::displayReportWithoutMonthlyDeposit() const {
    double total = initialInvestment;
    double yearlyInterest;

    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "========================================================\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------\n";

    for (int year = 1; year <= numYears; ++year) {
        yearlyInterest = total * (annualInterestRate / 100);
        total += yearlyInterest;

        cout << fixed << setprecision(2);
        cout << year << "\t$" << total << "\t\t$" << yearlyInterest << "\n";
    }
}

void InvestmentCalculator::displayReportWithMonthlyDeposit() const {
    double total = initialInvestment;
    double monthlyInterest, yearlyInterest;

    cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "=====================================================\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    cout << "-----------------------------------------------------\n";

    for (int year = 1; year <= numYears; ++year) {
        yearlyInterest = 0;

        for (int month = 1; month <= 12; ++month) {
            total += monthlyDeposit;
            monthlyInterest = total * ((annualInterestRate / 100) / 12);
            total += monthlyInterest;
            yearlyInterest += monthlyInterest;
        }

        cout << fixed << setprecision(2);
        cout << year << "\t$" << total << "\t\t$" << yearlyInterest << "\n";
    }
}