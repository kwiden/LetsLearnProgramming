## Let's Learn unConditionally!

[<- Previously:  Let's Learn Functions!](Functions.md)

----------------------------------------------------------------------------------------

**Objectives**: Learn about booleans and if/else statements.

**Process**: 

Lets talk about the truth, namely *logical* truth. Which of the following statements are false?

* Five is greater than Four
* Five is less than Three
* Five is greater than Five
* Five is greater than or equal to Five
* Five is equal to Five
* 12 is not equal to 96

Hopefully you answered that the second and third statements are false. In programming, we ask what is true a lot so that our code can make decisions. If we were asking if the above statements are true, we would write in our code like this:

* 5 > 4 
* 5 < 3
* 5 > 5
* 5 >= 5 (5 is greater than or equal to 5)
* 5 == 5 (we use double equals when asking if something is equal to)
* 12 != 96 (12 is not equal to 96)

We use these _statements_ when we write _if statements_. 

Look at [this example](https://ideone.com/RufPT1).

We have `if(x > 5)` which is our if statement. It is followed by an open curly brace `{` with some code and a closed curly brace `}`. This is called the _if body_. The code in the _if body_ only runs when the statement inside the `if()` is true. 

What will our code print? What if we change the value of x to 3? 

Now lets look at [this code](https://ideone.com/YxJtzG) and run it. Change a and b so they are equal and run it.

Seems fishy, right? Lets fix it with an _else block_. 

On a new line after the closed curly brace, lets add our else block:

```
else{
//your code here
}
```

Move the last printf statement so that we print it in the else block. Run your code. Change the values of a and b and run your code again. Does it work?

How does the else block work? When we have an if statement, the computer only runs the code inside the if block if the statement is true. If there is an else block attached to the end of the if statement, the computer will run the else block if the statement is false.

We can also make an _else if statement_ which is like an else and an if statement combined together. Look at the following code:

```
if(temperature > 90)
{
    printf("Its really hot out!");
}
else if(temperature > 50)
{
    printf("Its nice outside!");
}
else
{
    printf("Its cold outside!");
}
``` 
What do you think it prints if the temperature is 99? 
What about 60?
What about 32?

If a chain of if/if else/else blocks, only one block will run and they check in order. If the first if is true, then the computer doesn't execute the other blocks in the chain. Additionally, we can't have multiple else blocks unless they are else-if blocks.

This won't work:

```
if(x > 1)
{
  //code
}
else
{
//code
}
else
{
//code
}
```

Neither will this:

```
if(x < 1)
{
  //code
}
else
{
//code
}
else if(x > 3)
{
//code
}
```

[Lets Practice!](https://ideone.com/xQ5m4k) 

* What will this code print when foo = 6 and bar = 7?
* What about foo = 4, bar = 2?
* Or foo = 2, bar = 3?

Change the values of foo and bar and see if you're correct!

Now [write your own code](https://ideone.com/qpt6fA). Using the template, write a _function_ that returns whichever number is larger and return 0 if the numbers are equal. 

------------------------------------------------------------------------------

### And Or

Katie has the final say on what music can play at the bunker, her rules are:
_If it clean and it is on spotify, then she will add it to the bunker playlist._

How could we write that as code? We could do:
```
if(song is clean)
{
    if(song is on spotify)
    {
        song is added to playlist
    }
} 
```

A faster way to write it would be:
```
if(song is clean && song is on spotify)
{
    song is added to playlist
} 
```

The `&&` means AND. x AND y only returns true if and only if x is true and y is true. 

FMJ has rules about when you have to wear camo:
_If it is a competition or it is an outreach event, you must wear your camo._

We write this as
```
if(competition || outreach)
{
    wear your orange camo
}
```

The `||` means OR. x OR y returns true is either x is true or y is true or both. 

Gatsby (the dog) has one rule about food:
_If the food is not stale, he will eat it._ 

We can represent that as follows:
```
if(!stale)
{
    gatsby eats the food
}
```
The `!` is NOT. NOT x returns true when x is false. 

Lets practice with AND, OR, and NOT with [this code](https://ideone.com/8AC4tg).
Finish my code to correctly identify a super human and if they are a hero or villian. 

----------------------------------------------------------------------------------------



### -Oops! It looks like this tutorial is still being worked on! Check back later for updates!-

----------------------------------------------------------------------------------------

[Next: Let's Loop de Loop! ->](Loops.md)

[Back to Main](../../README.md)
