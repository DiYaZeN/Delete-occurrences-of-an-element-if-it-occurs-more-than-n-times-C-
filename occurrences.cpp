#include <iostream>
#include <cmath>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

std::vector<int> deleteNth(vector<int> arr, int n)
{
    // Map to save the number of occurrences of each element in arr
    map<int, int> countN;
    vector<int> newArr;
    // Check all elements in arr wherether it occurs more than n times
    for (int i = 0; i < arr.size(); i++)
    {
        // Count the number of occurrences of each element
        countN[arr[i]] = countN[arr[i]] + 1;
        // If a element in arr occurs less than or equal to n times then push it into newArr
        if (countN[arr[i]] <= n)
            newArr.push_back(arr[i]);
    }
    return newArr;
}
