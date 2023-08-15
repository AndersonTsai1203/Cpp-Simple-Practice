#include <iostream>
#include <math.h>

using namespace std;

#define MAX_SIZE 100

void get_ordering_permutation(int length, int *vector, int *permutation)
{
    for (int i = 0; i < length; i++)
    {
        permutation[i] = i;
    }

    int swapped = 1;
    while (swapped)
    {
        swapped = 0;
        for (int j = 1; j < length; j++)
        {
            if (vector[permutation[j]] < vector[permutation[j - 1]])
            {
                int temp = permutation[j];
                permutation[j] = permutation[j - 1];
                permutation[j - 1] = temp;
                swapped = 1;
            }
        }
    }
}

void rearranging_vector(int length, int *vector, int *permutation, int *rearranged_vector)
{
    for (int i = 0; i < length; i++)
    {
        rearranged_vector[i] = vector[permutation[i]];
    }
}

void reverse_index_vector(int length, int *vector, int *reverse_index)
{
    for (int i = 0; i < length; i++)
    {
        reverse_index[vector[i]] = i;
    }
}

double euclidean_distance(int length, int *vector1, int *vector2)
{
    double distance = 0;
    for (int k = 0; k < length; k++)
    {
        distance = distance + pow((vector1[k] - vector2[k]), 2);
    }

    return sqrt(distance);
}

int main()
{
    int length;
    cout << "Enter vector length: ";
    cin >> length;

    int vector1[length];
    cout << "Enter vector 1: ";
    for (int i = 0; i < length; i++)
    {
        cin >> vector1[i];
    }

    int vector2[length];
    cout << "Enter vector 2: ";
    for (int j = 0; j < length; j++)
    {
        cin >> vector2[j];
    }

    int ordering_permutation1[MAX_SIZE];
    get_ordering_permutation(length, vector1, ordering_permutation1);

    int ordering_permutation2[MAX_SIZE];
    get_ordering_permutation(length, vector2, ordering_permutation2);

    int reverse_index[MAX_SIZE];
    reverse_index_vector(length, ordering_permutation2, reverse_index);

    int optimal_permutation[MAX_SIZE];
    rearranging_vector(length, ordering_permutation1, reverse_index, optimal_permutation);

    cout << "Optimal permutation: ";
    for (int k = 0; k < length; k++)
    {
        cout << optimal_permutation[k] << " ";
    }

    cout << endl;

    int rearranged_vector1[MAX_SIZE];
    rearranging_vector(length, vector1, optimal_permutation, rearranged_vector1);

    double minimal_euclidean_distance = euclidean_distance(length, rearranged_vector1, vector2);

    cout << "Euclidean distance: " << minimal_euclidean_distance << endl;

    return 0;
}