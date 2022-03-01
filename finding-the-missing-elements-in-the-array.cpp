//This is the best approach to fing the missing elements by using the hash table application

#include <iostream>
using namespace std;

class ArrayOperations
{
public:
    int *array;
    int size;
    int length;
    void best_approach();
};

void ArrayOperations::best_approach()
{
    int highest, lowest;
    highest = array[0];
    for (int i = 1; i < length; i++)//finding the max elenent in this array
    {
        if (highest < array[i])
        {
           highest= array[i];
        }

    }

    lowest = array[0];

    for (int i = 1; i < length; i++)//finding the lowest element in the array
    {
        if (lowest > array[i])
        {
            lowest= array[i];
        }
    }
    int hash_table[highest]={0};//making a array of the size equals to the max element in the array
    for(int i=0;i<length;i++)
    {
        hash_table[array[i]]++;//increamenting the element
    }

    for(int i= lowest;i<highest;i++)//printing the element
    {
        if(hash_table[i]==0)
        {
            cout << "The missing element is :" << i << endl;
        }
    }
}

int main()
{
    ArrayOperations ao;
    int number_of_elements;
    cout << "Enter the numebr of elements in the array" << endl;
    cin >> number_of_elements;
    ao.length = number_of_elements;
    ao.array = new int[number_of_elements];

    cout << "Enter the elements one by one :" << endl;
    for (int i = 0; i < number_of_elements; i++)
    {
        cin >> ao.array[i];
    }

    ao.best_approach();

    return 0;
}
