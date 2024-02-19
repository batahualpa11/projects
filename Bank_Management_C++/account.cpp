#include <iostream>
using namespace std;
int main()
{
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    cout << '\t' << endl;

    // Input the facts for each customer
    cout << "Enter account number: ";
    cin >> accountNumber;


    while (accountNumber > 0)
    {
        cout << "Enter beginning balance: ";
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        cin >> creditLimit;

        cout << '\t' << endl;

        cout << "-------------------------" << endl;

        // Calculate new balance
        newBalance = beginningBalance + totalCharges - totalCredits;

        // Determine if credit limit is exceeded
        if (newBalance > creditLimit)
        {
            cout << "Account number: " << accountNumber << endl;
            cout << "Credit limit: " << creditLimit << endl;
            cout << "New balance: " << newBalance << endl;
            cout << "-------------------------" << endl;


            cout << '\t' << endl;
            cout << "Credit Limit Exceeded!!!" << endl;
            cout << "-------------------------" << endl;
            cout << '\t' << endl;

            return 0;
        }

        if (newBalance <= creditLimit)

        {
            cout << "Your Credit Limit has not exceeded..." << endl;
            cout << '\t' << endl;

            return 0;

        }

        // Ask for the next account number
       // cout << endl << "Enter account number (or -1 to quit): ";
        //cin >> accountNumber;
    }

}




/*#include <iostream>
using namespace std;
int main()
{
    int accountNumber;
    double newBalance, balance, charge, credit, creditLimit;

    cout << "Account Number: ";
    cin >> accountNumber;

    while(accountNumber != -1)
    {
        cout << "Balance: " << endl;
        cin >> balance;

        cout << "Charge: " << endl;
        cin >> charge;

        cout << "Credit: ">> endl;
        cin >> credit;


        //balance, charge, credit, credit limit

        //calculate new balance

        //if new balance is greater than the credit limit display the message "credit limit exceeded"

        //input another account number
    }

    cout << "Credit Limit Exceeded!" << endl;



}
*/
