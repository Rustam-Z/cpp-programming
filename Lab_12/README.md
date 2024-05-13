# Practical Lab Assignment - Const member function, friend function, composition, friend functions and `this` pointer

**Note: In class diagram + for public, - for private.**


### Program 1
Define a class FullName and Player with the following specifications:

```
FullName
---
- FirstName: string
- MiddleName: string
- LastName: string
---
<<constructor>> + FullName()
<<destructor>> +~ FullName()
+ setFirstName(string)
+ getFirstName(): string
+ setMiddleName(string)
+ getMiddleName(): string
+ setLastName(string)
+ getLastName(): string
```
```
Player
---
-Player_ID: string
-Player_Name: FullName
-Matches_Played: int
-Goals_Scored: int
---
<<constructor>> + Player()
<<destructor>> +~ Player()
+ setPlayer_ID(string)
+ getPlayer_ID(): string
+ setMatches_Played(int)
+ getMatches_Played(): int
+ setGoals_Scored(int)
+ getGoals_Scored(): int
+ setPlayer_Name(FullName)
+ getPlayer_Name()
<<friend>> + Increase_GoalsScored(Player, int)
```

`Increase_GoalsScored(int)` is friend function for Player: This function will increase Goal_scored by some int every time when called.

Write C++ create object pointer(through new) to Class Player and menu driven program to add player details (allocate memory for object and get player details), display player details, increase player goal scored delete player from memory.