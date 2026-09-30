# C++ Strings

Eight tasks on working with text: initials, upper case, counting vowels, reversing, palindromes, checking an email address, counting words and building a username.

## Tasks

| File | Task | Covers | What it does |
|---|---|---|---|
| [task1.cpp](task1.cpp) | Name Details | `getline + length` | Length and first/last characters |
| [task2.cpp](task2.cpp) | Shout It | `toupper` | Converts a sentence to capitals |
| [task3.cpp](task3.cpp) | Vowel Counter | `loop + tolower` | Counts vowels, ignoring case |
| [task4.cpp](task4.cpp) | Reverse a Word | `backwards loop` | Builds a reversed copy of a word |
| [task5.cpp](task5.cpp) | Palindrome Check | `compare` | Case-insensitive palindrome test |
| [task6.cpp](task6.cpp) | Email Check | `find + substr` | Validates and splits an email with `find` and `substr` |
| [task7.cpp](task7.cpp) | Word Counter | `isspace` | Counts words, even with extra spaces |
| [task8.cpp](task8.cpp) | Username Generator | `substr + to_string` | Builds a username with `substr` and `to_string` |

## Sample output

**Task 5: Palindrome Check**
```
Enter a word: Level
Level is a palindrome
```

**Task 8: Username Generator**
```
First name: Amina
Surname: Hassan
Year joined: 2026
Your username is amihassan26
```

## Run a task

```bash
g++ task1.cpp -o task1
./task1
```
