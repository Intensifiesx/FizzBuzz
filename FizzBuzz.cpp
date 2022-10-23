#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> container = {{3, "Fizz"}, {5, "Buzz"}, {7, "Fuzz"}};

    for (int i = 1; i <= 105; i++)
    {
        string output = "";
        for (auto j : container)
            if (i % j.first == 0)
                output += j.second;
        if (output.empty())
            output = to_string(i);
        cout << output << endl;
    }
    return 0;
}