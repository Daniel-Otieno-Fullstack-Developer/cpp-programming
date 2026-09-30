# C++ Pointers and References

Eight tasks on memory addresses: printing addresses, changing values through pointers and references, swapping, walking an array with a pointer, returning two results by reference and a dynamic array with `new` and `delete[]`.

## Tasks

| File | Task | Covers | What it does |
|---|---|---|---|
| [task1.cpp](task1.cpp) | Address and Value | `& and *` | Prints a value and its address |
| [task2.cpp](task2.cpp) | Change Through a Pointer | `dereference` | Changes a variable through a pointer |
| [task3.cpp](task3.cpp) | Swap with Pointers | `pointer parameters` | Swaps using pointer parameters |
| [task4.cpp](task4.cpp) | Swap with References | `reference parameters` | The same swap with references |
| [task5.cpp](task5.cpp) | Array Walk | `pointer arithmetic` | Walks an array with a pointer |
| [task6.cpp](task6.cpp) | Null Check | `nullptr` | Checks for `nullptr` before dereferencing |
| [task7.cpp](task7.cpp) | Min and Max | `reference outputs` | Two results from one function via references |
| [task8.cpp](task8.cpp) | Dynamic Marks | `new[] / delete[]` | Run-time sized array with `new[]` and `delete[]` |

## Sample output

**Task 4: Swap with References**
```
Enter two numbers: 7 21
Before: x = 7, y = 21
After:  x = 21, y = 7
```

**Task 8: Dynamic Marks**
```
How many students? 4
Mark 1: 67
Mark 2: 82
Mark 3: 45
Mark 4: 90
Average: 71
```

## Run a task

```bash
g++ task1.cpp -o task1
./task1
```
