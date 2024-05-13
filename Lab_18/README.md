# Practical Lab Assignment - Virtual function

### Program 1
Create a base class called shape.

Use this class to store two double type values that could be used to compute the area of figures.

Add to the base class, a member function:
``` 
get_data(): to initialize base class data members.
display_area(): to compute and display area of figures. 
```
Make display area as a virtual function and override this function into the derived classes to suit their requirements.

Derive two classes called triangle and rectangle from the base shape.

Using these three classes, design a program that will accept dimension of a triangle or a rectangle interactively, and display the area.

(Remember the two values given as input will be treated as length of two sides in case of rectangles, and as base and heights in the case of triangles.)

### Program 1a
Extend the above program to display area of circles. 

This requires addition of a new derived class ‘circle’ that computes the area of a circle. 

Remember, for a circle we need only one value its radius, but the get_data function in the base class requires two values to be passed.
