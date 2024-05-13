# Practical Lab Assignment - Introduction to class and object with `set()` and `get()` methods

**Note: In class diagram + for public, - for private.**

1. Define a class student with the following specification. 
    ```
    Student
    ---
    - Student_ID: String
    - Student_Name: String
    - OOP2_Score: double
    - Maths_Score: double
    - English_Score: double
    - Total_Score: double
    ---
    - ctotal(): Function to calculate eng + math + OOP-2 with double return type.
    + Takedata(): Function to accept values for student id, Student Name, eng, OOP-2, maths and invoke ctotal() to calculate total.
    + Showdata(): Function to display all the data members on the screen.
    ```

2. Write C++ header file Employee.h with class Employee with following details.

    ```
    Employee
    ---
    - Employee_ID: String
    - Employee_Name: String
    - No_of_Hours_Work: int
    - Rate_per_Hour: int
    ---
    + setEmployee_ID(String)
    + getEmployee_ID(): String
    + setEmployee_Name(String)
    + getEmployee_Name(): String
    + setNo_of_Hours_Work(int)
    + getNo_of_Hours_Work(): int
    + setRate_per_Hour(int)
    + getRate_per_Hour(): int 
    + getTotal_Monthly_Salary(): double
    ```
    Write C++ menu driven program to get employee details, display employee details, and display monthly salary details of employee.
