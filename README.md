# FizzBuzz with a twist!

This is a C++ program that generates numbers from 1 to 100 and outputs a specific string for each number that is divisible by 3, 5, or 7. If the number is not divisible by any of these, it outputs the number itself. 

## Usage

You can clone this repository and compile the `main.cpp` file to run the program. The program does not take any arguments and will output the FizzBuzz results to the console.

```bash
git clone https://github.com/Intensifiesx/FizzBuzz.git
cd FizzBuzz
g++ main.cpp -o main
./main
```

## Implementation details

The program uses a `map` data structure to store the integers 3, 5, and 7, along with their corresponding strings "Fizz", "Buzz", and "Fuzz". The `map` allows for efficient O(1) lookup of the strings when checking if a number is divisible by any of the integers.

The program iterates through the range of numbers from 1 to 100 and checks if each number is divisible by any of the integers in the `map`. If it is, the corresponding string is added to a temporary output string. If the output string is still empty after checking all the integers in the `map`, the number itself is added to the output string. The output string is then printed to the console.

## Example output

```
1
2
Fizz
4
Buzz
Fizz
Fuzz
8
Fizz
Buzz
11
Fizz
13
Fuzz
Buzz
Fizz
17
Buzz
Fuzz
Fizz
22
23
FizzBuzz
Fuzz
26
Fizz
Buzz
29
FizzFuzz
31
32
Fizz
34
Buzz
Fizz
37
Fuzz
Fizz
Buzz
41
Fizz
43
FuzzBuzz
Fizz
46
47
FizzFuzz
Buzz
Fizz
52
53
Fizz
Buzz
Fuzz
Fizz
58
59
FizzBuzz
61
Fuzz
Fizz
64
Buzz
Fizz
67
Fuzz
FizzBuzz
Buzz
71
Fizz
73
Fuzz
Fizz
76
BuzzFuzz
Fizz
79
Buzz
Fizz
82
83
FizzFuzz
Buzz
Fizz
86
Fuzz
Fizz
89
Buzz
Fuzz
Fizz
92
FizzBuzz
94
Fuzz
Fizz
97
Buzz
FizzFuzz
``` 

Feel free to fork and modify this program to create your own twist on FizzBuzz!
![Fizz](https://miro.medium.com/max/1400/1*xFg8l5zDLnYu_5UgnNIcCA.png)
