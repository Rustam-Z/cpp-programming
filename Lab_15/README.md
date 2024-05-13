# Practical Lab Assignment - Inheritance

### Program 1
Imagine a publishing company that markets both book and audio cassette version of its works. Create a class Publication that stores the `title` (a string) and `price` (type float) of a publication. 

From this class derive two classes: 
- `Book`, which adds a page count (type int). 
- `Tape`, which add playing time in minutes (type float). 

Each of these three classes should have: 
- `getdata() function to display its data 
- `setdata()` function to get its data from the user at the keyboard.

Write a main() program to test the Book and Tape classes by creating instances of them, asking the user to fill with data with `setdata()`, and then displaying the data with `getdata()`.

### Program 2
Assume that a bank maintains two kinds of accounts for customers, one called as saving and the other called as current account.  

The saving account provides interest and withdrawal facilities but no cheque book facility. 

The current account provides cheque book facility but no interest. Current account holders should also maintain a minimum balance and if the balance falls below this level a service charge is imposed.

Create a class `ACCOUNT` that stores customer name, account number and type of account. 

From this derive the classes `CURR_ACCT` and `SAV_ACCT` to make them more specific to their requirements. 

Do not use any constructors. Use member functions to initialize the class members. Include necessary member functions in order to achieve all the tasks:

Design a menu based program where user selects the type of account and perform the following tasks:
- Accept deposit from a customer and update the balance.
- Display the balance.
- Compute and deposit interest.
- Permit withdrawal and update the balance.
- Check for the minimum balance, impose penalty, necessary and upload the balance.

```
CURR_ACCT:
---
amount, penalty
---
Deposit() – will deposit the money and update amount
Balance() - will display the balance of account
Withdraw() – will allow to withdraw from account (check if withdrawal amount is less than balance and update balance)
Penalty() – apply penalty of USD 2 for maintaining balance less than 100 USD
```
```
SAV_ACCT:
---
amount
---
Deposit() – will deposit the money and update amount
Balance() - will display the balance of account
Compute_Interest() – calculate interest based on given condition [ROI is 4% per annum]
Withdraw() – will allow to withdraw from account (check if withdrawal amount is less than balance and update balance)
```