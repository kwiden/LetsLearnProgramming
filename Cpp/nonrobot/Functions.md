## Let's Learn Functions!

[<- Previously: Let's Learn More Variables!](LLVars2.md)


**Objectives**: Learn how to use and write functions.

**Starting Point**: https://ideone.com/D9dgQF

**Process**: 
Sometimes we want to use the same code over and over again. In the last lesson, we had to write product\*price a lot and while that was only one line, imagine how much work it would have been if we calculated the tax for each set of parts (wheels, encoders, etc). 

This is where _functions_ come in. _Functions_ allow us to make reusable code without a lot of copy/paste. Lets look at the following function:

```
int myFunction(int a, int b)
{
    int product = a*b;
    printf("a = %d, b = %d, product = %d", a,b,product);
    return product;
}
```

Lets break down the anatomy of the function line by line:

```int myFunction(int a, int b)``` This line is called the _function header_. There is a lot of information in this header. 

The first thing we see is ```int```. This is the _return type_ of the function and means that the function _returns_ an int. We'll talk more about that later.

```myFunction``` is the name of the function. We can name the function almost anything - I chose a really boring name. 

```(int a, int b)``` these are the _arguements_. We talked about _arguements_ with the printf line. When we make our own function we need to tell the computer what arguements we want/are expecting. When we define the arguements, we have to tell the computer what type the argument is as well as what we are going to name it. The arguements are then variables that only exist inside our function.

```
{
    int product = a*b;
    printf("a = %d, b = %d, product = %d", a,b,product);
    return product;
}
```

This whole section is called the _function body_. This is where all the code in our function lives! The first two lines in our body are just normal code that we are used to writing. 

The last line is the _return statement_. Because everything inside our function only lives inside the function (no one else can see inside the function), we use return statements to give information back to our other code. We can only have one return statement and any code after a return statement will never be run! Return is akin to "The End" in a book. We have to make sure the type of data we return is set as the return type at the beggining of the function header. 

We can have all different kinds of return types - int, double, char, float and even void! Void is when our function doesn't return anything

In our starting code, we call myFunction(2,6). What do you think x will equal after calling that line?

If you guessed 12, you'd be correct! To understand why, when we call _return_ in the function, we are saying "wherever you called me, give that line of code this data". 

What do you think would happen we changed our code to the following?

```
int x = myFunction(myFunction(2,2),3);
```
Try to figure it out and then edit the code and try it out. Explain to Katie what you think is happening. 

.

.

.

.

Did you try?

.

.

.

.

.

After that line of code, x will equal 12. Why is that?
```
int x = myFunction(myFunction(2,2),3);
```
We need to evaluate the inner most "my function" first - its like order of operations. `myFunction(2,2)` _returns_ 4. We can effectively replace `myFunction(2,2)` with `4`.  Now we're calling the outermost `myFunction()` as `myFunction(4,3)` which returns 12 and is assigned to x. 


So lets practice with functions some more.

Lets open up [this code](https://ideone.com/fsZuQQ) and solve the following problem:
Compute the difference in area between a square and a circle of the same diameter. Our function will take in a diameter and return the difference in area. For this practice, we only need to fill in the function body.




And just to be positive, we'll write two more funcitons: one that converts from celcius to farenheit and one that converts farenheit to celcius.

Here is the formula for celcius to farenheit to get you started: Farenheit = Celcius * 1.8 + 32

[Here is your starter code](https://ideone.com/E1Os3n).

[Next: Let's Learn unConditionally! ->](Conditionals.md)

[Back to Main](../../README.md)
