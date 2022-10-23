/*
    Created by: Zain
    Date: 10/22/2022
    Description: Iterate i through 1 to N. 
            If i is divisible by 3, add Fizz 
            If i is divisible by 5, add Buzz
            if i is divisible by 7, add Fuzz
            ...etc
            To add more divisible numbers, insert {num, " "} into containter.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Scalable divisble number with its saying
    map<int, string> container = {{3, "Fizz"}, {5, "Buzz"}, {7, "Fuzz"}}; 
    int n = 105; //End value to iterate to
    
    //Iterate i to n : O(N)
    for (int i = 1; i <= n; i++)
    {
        string output = "";
        for (auto j : container) //O(1)
            if (i % j.first == 0) //i % divisible num from container
                output += j.second; //Add string to temp from container
        if (output.empty()) //i not divisible by any of the ints from container
            output = to_string(i); 
        cout << output << endl;
    }
    return 0;
}
