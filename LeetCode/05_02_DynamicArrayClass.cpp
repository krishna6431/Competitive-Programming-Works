#include <iostream>
using namespace std;

class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    //parametarized Constructor
    DynamicArray(int c)
    {
        data = new int[c];
        nextIndex = 0;
        capacity = c;
    }

    DynamicArray(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        /// shallow copy this->data = d.data;

        // deep copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    // operator overloading
    void operator=(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        /// shallow copy this->data = d.data;

        // deep copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            //if we not deleted the data then it is memory leak
            //condition
            data = newdata;
            capacity = 2 * capacity;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int i)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            add(element);
        }
        else
        {
            return;
        }
    }

    //Get Function
    int get(int i)
    {
        //handle corner cases
        if (i >= 0 && i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    void print()
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int getCapacity()
    {
        return capacity;
    }
};