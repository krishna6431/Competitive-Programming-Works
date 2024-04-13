#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b)
{
    return (a * b) / hcf(a, b); // Using HCF function from previous example
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}
