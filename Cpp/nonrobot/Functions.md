## Let's Learn Functions!

[<- Previously: Let's Learn More Variables!](LLVars2.md)


**Objectives**: Learn how to use and write functions.

**Starting Point**:

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

### -Oops! It looks like this tutorial is still being worked on! Check back later for updates!-

[Next: Let's Learn unConditionally! ->](Conditionals.md)

[Back to Main](../../README.md)
