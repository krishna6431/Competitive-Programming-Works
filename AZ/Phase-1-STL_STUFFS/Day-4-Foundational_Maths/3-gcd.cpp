#include <iostream>
using namespace std;

// Function to calculate HCF/GCD
int hcf(int a, int b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf(num1, num2) << endl;

    return 0;
}
