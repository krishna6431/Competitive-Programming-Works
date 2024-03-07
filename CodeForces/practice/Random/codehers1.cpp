#include <iostream>
#include <vector>

using namespace std;

// Function to calculate cumulative additional values
int cumulativeAdditionalValues(const vector<int> &initialArray, int p)
{
    int n = initialArray.size();
    vector<int> array(initialArray.begin(), initialArray.end());

    // Simulate the evolution of the array over p days
    for (int day = 1; day <= p; ++day)
    {
        vector<int> temp(array.begin(), array.end());
        for (int i = 0; i < n; ++i)
        {
            if (array[i] != 0)
            {
                if (i - 1 >= 0)
                    temp[i - 1] += 2;
                if (i + 1 < n)
                    temp[i + 1] += 2;
            }
        }
        array = temp;
    }

    // Calculate cumulative additional values compared to day 0
    int cumulativeSum = 0;
    for (int i = 0; i < n; ++i)
    {
        cumulativeSum += array[i] - initialArray[i];
    }

    return cumulativeSum;
}

int main()
{
    int n, p;
    cin >> n >> p;

    vector<int> initialArray(n);
    for (int i = 0; i < n; ++i)
        cin >> initialArray[i];

    int result = cumulativeAdditionalValues(initialArray, p);

    cout << result << endl;

    return 0;
}
