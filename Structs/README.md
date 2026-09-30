# C++ Structs

Eight tasks on grouping related data into records with `struct`: single records, input with `getline`, structs with functions, arrays of structs, finding the top student, updating by reference, nested structs and a class report.

## Tasks

| File | Task | Covers | What it does |
|---|---|---|---|
| [task1.cpp](task1.cpp) | Student Record | `struct + dot` | One record set with the dot operator |
| [task2.cpp](task2.cpp) | Book Details | `input + getline` | Reads a record with `getline` |
| [task3.cpp](task3.cpp) | Rectangle | `struct + functions` | Passes a struct to two functions |
| [task4.cpp](task4.cpp) | Class List | `array of structs` | An array of records printed as a table |
| [task5.cpp](task5.cpp) | Top Student | `search by member` | Finds the record with the highest mark |
| [task6.cpp](task6.cpp) | Shop Stock | `pass by reference` | Changes a struct through reference parameters |
| [task7.cpp](task7.cpp) | Date of Birth | `nested struct` | A `Date` struct inside a `Person` struct |
| [task8.cpp](task8.cpp) | Class Report | `structs + functions` | Grades a whole class using structs and a function |

## Sample output

**Task 4: Class List**
```
No	Name	Mark
1	Amina	78.5
2	Brian	64
3	Grace	91
4	Hassan	47.5
Class average: 70.25
```

**Task 8: Class Report**
```
Name	Mark	Grade
Amina	78.5	A
Brian	64	B
Grace	91	A
Hassan	47.5	D
Joy	55	C
4 of 5 students passed
```

## Run a task

```bash
g++ task1.cpp -o task1
./task1
```
