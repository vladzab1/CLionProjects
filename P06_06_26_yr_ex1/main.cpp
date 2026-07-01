#include <iostream>

using namespace std;

int main() {
    // int year = 0;
    //
    // cout << "Enter the year: ";
    // cin >> year;
    //
    // int days = 365 + (year % 4 ==0 )*(year % 100 !=0)+(year % 400 ==0);
    // cout << days << endl;


    // int num= 0;
    // cout << "Enter num: ";
    // cin >> num;
    //
    // if (num < 0) {
    //     cout<<"Negative"<< endl;
    // }
    // else {
    //     cout<<"Positive"<< endl;
    // }int num= 0;
    //
    //    cout << "Enter num: ";
    //     cin >> num;
    //
    //
    //    if (num % 2 == 0 ) {
    //        cout << num << " Even number";
    //    }
    //    else {
    //        cout << num << " Odd number";
    //    }

    // int num = 0;
    //
    // cout << "Enter num: ";
    // cin >> num;
    //
    //
    // if (num % 2 == 0) {
    //     cout << num << " Even number";
    // } else {
    //     cout << num << " Odd number";
    // }

    // int num= 0;
    //
    // cout << "Enter num: ";
    // cin >> num;
    //
    // if (num % 7 == 0) {
    //     cout << num << " Number is multiple 7" << endl;
    // } else {
    //     cout << num << " Number is not multiple 7" << endl;
    // }

    // int num1 = 0;
    // int num2 = 0;
    //
    // cout << "Enter num1: ";
    // cin >> num1;
    // cout << "Enter num2: ";
    // cin >> num2;
    //
    // if (num1 > num2) {
    //     cout << num1 << " greater " << " than " << num2<< endl;
    // } else{
    //     cout << num2 << " greater " << " than " << num1<< endl;
    // }

    // int num1 = 0;
    // int num2 = 0;
    //
    // cout << "Enter num1: ";
    // cin >> num1;
    // cout << "Enter num2: ";
    // cin >> num2;
    //
    // if (num1 > num2) {
    //     cout << num2 << endl;
    // } else {
    //     cout << num1 << endl;
    // }

    // int num1 = 0;
    // int num2 = 0;
    // char action;
    // double output_value = 0;
    //
    // cout << "Enter num1: ";
    // cin >> num1;
    // cout << "Enter num2: ";
    // cin >> num2;
    // cout << "select an action(+, -, *, a): ";
    // cin >> action;
    //
    // if (action == '+') {
    //     output_value = num1 + num2;
    //     cout << "Your result is: " << output_value << endl;
    // }
    // else if (action == '-') {
    //     output_value = num1 - num2;
    //     cout << "Your result is: " << output_value << endl;
    // }
    // else if (action == '*') {
    //     output_value = num1 * num2;
    //     cout << "Your result is: " << output_value << endl;
    // }
    // else if (action == 'a') {
    //     output_value = (num1 + num2) /2.0;
    //     cout << "Your result is: " << output_value << endl;
    // }
    // else {
    //     cout << "choose another action"<< endl;
    // }

    double usd = 0;
    int choice = 1;
    double rate =0;
    double result = 0;

    cout << "Enter the amount in USD: ";
    cin >> usd;
    cout << "Choose currency:" << endl;
    cout << "1 - EUR" << endl;
    cout << "2 - GBP" << endl;
    cout << "3 - JPY" << endl;
    cout << "Your choice: ";
    cin >> choice;

    cout << "Enter exchange rate: ";
    cin >> rate;

    if (choice == 1) {
        result = usd * rate;
        cout << "EUR: " << result << endl;
    }
    else if (choice == 2) {
        result = usd * rate;
        cout << "GBP: " << result << endl;
    }
    else if (choice == 3) {
        result = usd * rate;
        cout << "JPY: " << result << endl;
    }
    else {
        cout << "Wrong choice!" << endl;
    }
}
