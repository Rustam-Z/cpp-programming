# Practical Lab Assignment - Separation of the interface from implementation constructors and destructors

**Note: In class diagram + for public, - for private.**

### Program 1
The class Person with private attributes name(string) and age(int).

The class contains three functions.
- One with no parameter (for initializing default value).
- With two parameter (one parameter with default value).
- Function to display the data.

```
Person
---
- Name: String
- Age: int
---
+ Display()
<constructor> + Person()
<constructor> + Person(a: int)
```

### Program 2
Construct a class to hold personnel records class name is Records. Use the following data members, and keep them private:
```
string name;
float salary;
string date_of_birth;
```
Create two constructors, one to initialize the record with its necessary values and one default. 

Create member functions to alter the individual’s name, salary, and date of birth.

Create two objects use one object to refer member function through pointer and other object will be accessing through dot operator.


### Program 3
Write a class Account that represents your bank account. 
- It contains information like name(string), account number(string) and balance(float). (All are private)
- Add constructors and destructors. 
- Create some objects, 
- Write a code to display message when it is created and similarly display message when it will be destroyed.


### Program 4
Write C++ header file Triangle.h with class Triangle with data members and member functions as per following class diagram. In Triangle.h file only implement get and set methods. (Consider right angle Triangle)
```
Triangle
---
- Height: double
- Base: double
---
<<constructor>> + Triangle(double, double)
<<destructor>> +~ Triangle()  # +~ stands for destructor
+ getHeight(): double
+ setHeight(double)
+ getBase(): double
+ setBase(double)
+ getArea(): double
+ getPerimeter(): double
```
Write C++ program to include header file Triangle.h in your program. Implement constructor (with default value for height and width will be 0),  getArea() and getPerimeter() member functions of Class Triangle and write menu driven program to get Height and Width details, display measurement (Area and Perimeter) of Triangle object.