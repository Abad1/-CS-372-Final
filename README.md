# CS-372-Final
example of an implementation of chain of command design pattern 

## What it do:
This program uses the chain of command design pattern to see if a user (defined in User.h) is eligible to purchase G-fuel.

Contained in ConcreteHandlers.h are three derived classes that each check a different property of a user.
If the user doesn't meet the requirement, the handler will return false and print the problem to the console.
If the requirement is met, the user will be passed to a different handler class to check the next property of the user.
Only if all requirements are met will the handler function return true.
