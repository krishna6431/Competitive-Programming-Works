#include <bits/stdc++.h>
using namespace std;

#define ll long long int
typedef vector<ll> vl;
typedef vector<vl> vvl;

// Function to perform matrix multiplication
vvl mat_mult(const vvl &A, const vvl &B)
{
    ll r1 = A.size();    // Number of rows in matrix A
    ll c1 = A[0].size(); // Number of columns in matrix A
    ll r2 = B.size();    // Number of rows in matrix B
    ll c2 = B[0].size(); // Number of columns in matrix B

    // Ensure matrices are compatible for multiplication
    if (c1 != r2)
    {
        throw invalid_argument("Matrix dimensions do not match for multiplication");
    }

    // Initialize result matrix with zeros
    vvl C(r1, vl(c2, 0));

    // Perform matrix multiplication
    for (ll i = 0; i < r1; i++)
    {
        for (ll j = 0; j < c2; j++)
        {
            for (ll k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main()
{
    // Example matrices
    vvl A = {
        {1, 2, 3},
        {4, 5, 6}};

    vvl B = {
        {7, 8},
        {9, 10},
        {11, 12}};

    try
    {
        // Perform matrix multiplication
        vvl result = mat_mult(A, B);

        // Print the result matrix
        cout << "Resultant Matrix:" << endl;
        for (const auto &row : result)
        {
            for (const auto &val : row)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
