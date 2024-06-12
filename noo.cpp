#include <iostream>

using namespace std;

int main() {
    int a, b;

    // ورودی از کاربر گرفته می‌شود
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // ۱.۱. بزرگترین عدد را مشخص می‌کنیم
    if (a > b) {
        cout << "a is greater than b." << endl;
    }
    else if (b > a) {
        cout << "b is greater than a." << endl;
    }
    else {
        cout << "a and b are equal." << endl;
    }

    // ۱.۲. هر دو مثبت هستند
    if (a > 0 && b > 0) {
        cout << "Both a and b are positive." << endl;
    }

    // ۱.۳. هر دو منفی هستند
    if (a < 0 && b < 0) {
        cout << "Both a and b are negative." << endl;
    }

    // ۱.۴. هر دو صفر هستند
    if (a == 0 && b == 0) {
        cout << "Both a and b are zero." << endl;
    }

    // ۱.۵. عدد اول a مثبت است یا منفی
    if (a > 0) {
        cout << "a is positive." << endl;
    }
    else if (a < 0) {
        cout << "a is negative." << endl;
    }
    else {
        cout << "a is zero." << endl;
    }

    // ۱.۶. عدد دوم b مثبت است یا منفی
    if (b > 0) {
        cout << "b is positive." << endl;
    }
    else if (b < 0) {
        cout << "b is negative." << endl;
    }
    else {
        cout << "b is zero." << endl;
    }

    return 0;
}
