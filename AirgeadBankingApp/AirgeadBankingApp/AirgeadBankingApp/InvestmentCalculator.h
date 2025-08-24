#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

class InvestmentCalculator {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterestRate;
    int numYears;

public:
    InvestmentCalculator(double initInvestment, double monthlyDep, double annualRate, int years);

    void setInitialInvestment(double amount);
    void setMonthlyDeposit(double amount);
    void setAnnualInterestRate(double rate);
    void setNumYears(int years);

    void displayReportWithoutMonthlyDeposit() const;
    void displayReportWithMonthlyDeposit() const;
};

#endif
