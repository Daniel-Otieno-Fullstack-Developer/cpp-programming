# C++ Operators and Expressions

Eight beginner tasks on the operators that do the work in a C++ program.

| File | Task | Operators | What it does |
|---|---|---|---|
| [task1.cpp](task1.cpp) | Simple Calculator | `+ - * / %` | Shows all five arithmetic operators on two numbers |
| [task2.cpp](task2.cpp) | Sharing Sweets | `/ %` | Shares sweets equally and finds how many are left over |
| [task3.cpp](task3.cpp) | Time Converter | `/ %` together | Turns seconds into hours, minutes and seconds |
| [task4.cpp](task4.cpp) | Average Mark | `static_cast<double>` | Shows why integer division loses decimals, and fixes it |
| [task5.cpp](task5.cpp) | Counter | `++ --` | Compares prefix and postfix increment and decrement |
| [task6.cpp](task6.cpp) | Savings Tracker | `+= -= *= /=` | Tracks a KES balance with compound assignment |
| [task7.cpp](task7.cpp) | Certificate Check | `>= && \|\| !` | Decides if a student qualifies for a certificate |
| [task8.cpp](task8.cpp) | Precedence Puzzle | order of operations | Shows how brackets change the result |

## Sample output

**Task 3**
```
Enter a number of seconds: 7384
7384 seconds is 2 h 3 min 4 s
```

**Task 4**
```
Enter three marks: 67 72 81
Total: 220
Average without cast: 73
Average with cast: 73.3333
```

**Task 8**
```
2 + 3 * 4 = 14
(2 + 3) * 4 = 20
20 - 4 / 2 = 18
(20 - 4) / 2 = 8
10 % 3 * 2 = 2
10 % (3 * 2) = 4
```

## Run a task

```bash
g++ task1.cpp -o task1
./task1
```
