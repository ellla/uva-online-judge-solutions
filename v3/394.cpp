// UVa Online Judge
// Problem 394 - Mapmaker
// Written by Tian Zhou
// Created 9/6/13
// Last Modified 9/7/13

#include <iostream>
#include <string>
using namespace std;

struct Arr
{
    string name;
    int base_address;
    int element_size;
    int dimension;
    int **bounds;
    int *span;

    Arr() {}

    Arr(string n, int add, int size, int dime, int **b)
    {
        name = n;
        base_address = add;
        element_size = size;
        dimension = dime;
        bounds = b;

        span = new int[dime];
        for (int i = 0; i < dime; i++)
            span[i] = b[i][1] - b[i][0] + 1;
    }
};

int find_address(Arr& arr, int index[])
{
    int distance = 0;
    int n;

    for (int i = 0; i < arr.dimension; i++)
    {
        n = index[i] - arr.bounds[i][0];
        for (int j = i + 1; j < arr.dimension; j++)
        {
            n *= arr.span[j];
        }
        distance += n;
    }

    return arr.base_address + arr.element_size * distance;
}

int main()
{
    int n_array, n_reference;
    string name;
    int base_address;
    int element_size;
    int dimension;
    int **bounds;
    Arr *arrs;
    Arr current_arr;
    int *index;

    cin >> n_array >> n_reference;
    arrs = new Arr[n_array]();

    // Construct arrays
    for (int i = 0; i < n_array; i++)
    {
        cin >> name >> base_address >> element_size >> dimension;
        bounds = new int*[dimension];
        for (int j = 0; j < dimension; j++)
        {
            bounds[j] = new int[j];
            cin >> bounds[j][0] >> bounds[j][1];
        }
        arrs[i] = Arr(name, base_address, element_size, dimension, bounds);
    }

    for (int i = 0; i < n_reference; i++)
    {
        cin >> name;
        for (int j = 0; j < n_array; j++)
            if (arrs[j].name == name)
                current_arr = arrs[j];

        index = new int[current_arr.dimension];
        for (int j = 0; j < current_arr.dimension; j++)
            cin >> index[j];

        cout << current_arr.name << "[";
        for (int i = 0; i < current_arr.dimension - 1; i++)
            cout << index[i] << ", ";
        cout << index[current_arr.dimension - 1] << "] = ";
        cout << find_address(current_arr, index) << "\n";
    }

    return 0;
}