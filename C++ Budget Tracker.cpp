#include <iostream>
#include <string>
using namespace std;


// ===================== ABSTRACT CLASS =====================

class Budget
{
protected:
    float income;
    float totalExpenses;
    float budgetLimit;

public:

    Budget()
    {
        income = 0;
        totalExpenses = 0;
        budgetLimit = 0;
    }


    // Encapsulation using setter function
    void setIncome(float i)
    {
        income = i;
    }


    void setBudgetLimit(float limit)
    {
        budgetLimit = limit;
    }


    // Getter functions
    float getIncome()
    {
        return income;
    }


    float getTotalExpenses()
    {
        return totalExpenses;
    }


    // Pure Virtual Function (Abstraction)
    virtual void displaySummary() = 0;


    // Virtual function for overriding
    virtual void checkBudget()
    {
        cout << "Checking budget..." << endl;
    }
};


// ===================== CHILD CLASS =====================

class ExpenseTracker : public Budget
{
private:

    string expenseName[20];
    string category[20];
    float expenseAmount[20];

    int count;


public:

    ExpenseTracker()
    {
        count = 0;
    }


    // Add Expense
    void addExpense()
    {
        if (count >= 20)
        {
            cout << "Maximum expense limit reached!" << endl;
            return;
        }


        cout << "\nEnter Expense Name: ";
        cin >> expenseName[count];


        cout << "Enter Category: ";
        cin >> category[count];


        cout << "Enter Expense Amount: Rs. ";
        cin >> expenseAmount[count];


        totalExpenses += expenseAmount[count];

        count++;


        cout << "\nExpense Added Successfully!" << endl;
    }



    // Display All Expenses

    void showExpenses()
    {
        if (count == 0)
        {
            cout << "\nNo expenses available!" << endl;
            return;
        }


        cout << "\n====================================" << endl;
        cout << "           ALL EXPENSES" << endl;
        cout << "====================================" << endl;


        for (int i = 0; i < count; i++)
        {
            cout << "\nExpense " << i + 1 << endl;

            cout << "Name: "
                 << expenseName[i] << endl;

            cout << "Category: "
                 << category[i] << endl;

            cout << "Amount: Rs. "
                 << expenseAmount[i] << endl;
        }
    }



    // Search Expense by Category

    void searchByCategory()
    {
        string searchCategory;

        bool found = false;


        cout << "\nEnter Category to Search: ";

        cin >> searchCategory;


        for (int i = 0; i < count; i++)
        {
            if (category[i] == searchCategory)
            {
                cout << "\nExpense Name: "
                     << expenseName[i] << endl;

                cout << "Amount: Rs. "
                     << expenseAmount[i] << endl;


                found = true;
            }
        }


        if (found == false)
        {
            cout << "\nNo expense found in this category!" << endl;
        }
    }



    // ===================== FUNCTION OVERRIDING =====================

    void checkBudget() override
    {
        if (totalExpenses > budgetLimit)
        {
            cout << "\nWARNING!" << endl;

            cout << "You have exceeded your budget limit!" << endl;

            cout << "Extra Amount: Rs. "
                 << totalExpenses - budgetLimit << endl;
        }

        else
        {
            cout << "\nGood Job!" << endl;

            cout << "You are within your budget." << endl;

            cout << "Remaining Budget: Rs. "
                 << budgetLimit - totalExpenses << endl;
        }
    }



    // ===================== PURE VIRTUAL FUNCTION IMPLEMENTATION =====================

    void displaySummary() override
    {
        float savings;

        savings = income - totalExpenses;


        cout << "\n====================================" << endl;

        cout << "          BUDGET SUMMARY" << endl;

        cout << "====================================" << endl;


        cout << "Total Income: Rs. "
             << income << endl;


        cout << "Budget Limit: Rs. "
             << budgetLimit << endl;


        cout << "Total Expenses: Rs. "
             << totalExpenses << endl;


        cout << "Savings: Rs. "
             << savings << endl;


        if (savings < 0)
        {
            cout << "\nYou are spending more than your income!" << endl;
        }

        else
        {
            cout << "\nYour financial condition is good." << endl;
        }
    }

};



// ===================== MAIN FUNCTION =====================

int main()
{
    ExpenseTracker user;

    int choice;

    float income;
    float limit;


    cout << "==========================================" << endl;

    cout << "       PERSONAL BUDGET TRACKER SYSTEM" << endl;

    cout << "==========================================" << endl;


    // Take Income

    cout << "\nEnter Your Monthly Income: Rs. ";

    cin >> income;


    user.setIncome(income);



    // Take Budget Limit

    cout << "Enter Your Monthly Budget Limit: Rs. ";

    cin >> limit;


    user.setBudgetLimit(limit);



    // MENU

    do
    {

        cout << "\n================================" << endl;

        cout << "             MAIN MENU" << endl;

        cout << "================================" << endl;


        cout << "1. Add Expense" << endl;

        cout << "2. View All Expenses" << endl;

        cout << "3. Search Expense by Category" << endl;

        cout << "4. Check Budget Status" << endl;

        cout << "5. View Budget Summary" << endl;

        cout << "6. Exit" << endl;


        cout << "\nEnter Your Choice: ";

        cin >> choice;



        switch (choice)
        {

        case 1:

            user.addExpense();

            break;



        case 2:

            user.showExpenses();

            break;



        case 3:

            user.searchByCategory();

            break;



        case 4:

            user.checkBudget();

            break;



        case 5:

            user.displaySummary();

            break;



        case 6:

            cout << "\nThank You For Using Budget Tracker!" << endl;

            break;



        default:

            cout << "\nInvalid Choice! Please Try Again." << endl;

        }

    }

    while (choice != 6);


    return 0;
}