# C++ Data Types

Eight beginner tasks. Each one practises a single C++ data type.

| File | Task | Data type | What it does |
|---|---|---|---|
| [task1.cpp](task1.cpp) | My Initials | `char` | Stores three initials and prints the size of a char |
| [task2.cpp](task2.cpp) | Age Calculator | `int` | Reads a year of birth and works out the age in 2026 |
| [task3.cpp](task3.cpp) | Shopping Total | `float` | Multiplies price by quantity to get a total cost |
| [task4.cpp](task4.cpp) | Circle Area | `double` | Calculates the area and circumference from a radius |
| [task5.cpp](task5.cpp) | Pass or Fail | `bool` | Checks if a mark is 50 or above and prints true/false |
| [task6.cpp](task6.cpp) | About Me | `string` | Reads a full name with `getline` and counts its characters |
| [task7.cpp](task7.cpp) | Greeting Function | `void` | Calls a banner function at the start and end of `main` |
| [task8.cpp](task8.cpp) | Size Table | modifiers & `sizeof` | Prints how many bytes each type uses |

## Sample output

**Task 2**
```
Enter your year of birth: 2001
You are 25 years old
```

**Task 4**
```
Enter the radius: 7
Area: 153.938
Circumference: 43.9823
```

**Task 8** (64-bit Linux, g++)
```
Type            Bytes
char            1
short           2
int             4
long            8
float           4
double          8
bool            1
```

`long` is 8 bytes on 64-bit Linux and macOS but 4 bytes on Windows.

## Run a task

```bash
g++ task1.cpp -o task1
./task1
```
