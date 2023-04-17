# Practical Lab Assignment - Operator Overloading

### Program 1
Define a class DayTime:
```
private:
int hour, minute, second;
public:
    • parameterized constructor to initialize value
    • int getHour() const{ return hour; }
    • int getMinute() const { return minute; }
    • int getSecond() const { return second; }
    • int asSeconds() const // Daytime in seconds
    • overload increment operator to increment the value of seconds.
    • Overload decrement operator to decrement the value of minutes.
```
Write  a menu driven program and create following menu options:
1. To Display Time.
2. To Display Time in Seconds.
3. To Increment seconds.
4. To decrements minutes.
0. To exit.

### PRogram 2
Define a class Dollar:
```
private:
    float currency, mktrate, offrate
public:
    • float getDollar() { return currency in dollar }
    • float  getMarketSoums() { return currency in soums }
    • float  getofficialSoums() { return currency in soums }
    • void setRates() { // input current date market and official rates }
    • overload operator "<<" to print the details of a Dollar.
```
Inside main declare one object and show the results similar to Program 1.
