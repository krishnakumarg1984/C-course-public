#include <math.h>
#include <stdio.h>

int main(void) {
    double monthly_interest_rate = 1.25;     // percent
    double initial_amount_GBP    = 7500.00;  // loan amount, GBP

    int months = 36;  // number of months

    double interest_accrued = initial_amount_GBP * months * monthly_interest_rate / 100.0;
    printf("interest accrued after given months have elapsed: %6.2f\n", interest_accrued);

    months = 5 * 12;  // number of months

    interest_accrued = initial_amount_GBP * months * monthly_interest_rate / 100.0;

    // monthly repayments (including interest) over 5 years, GBP
    double monthly_payment_GBP = (initial_amount_GBP + interest_accrued) / (double)months;

    printf("monthly repayments on £%.2f loan: £%.2f\n", initial_amount_GBP, monthly_payment_GBP);
}
