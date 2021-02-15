Stack Allocations and Memory Safety
===================================

The included program provides a simple password manager for users. Users can run the program and enter their pin to be shown their password for another service. For example:

```
Enter user id: 0
Enter pin: 1234
Pin Accepted. Your stored password is Password1
```

Your goal is to analyze the program for memory safety issues. After locating any memory safety issues and considering the program logic, you should be able provide inputs to the program that allow you to read passwords for arbitrary users without providing the pin for that user. Specifically, you should be able to induce the program to print the password for user 1, "TopSecret", without entering the pin, "4729", for that user.
