## Let's Learn unConditionally!

[<- Previously:  Let's Learn Functions!](Functions.md)

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

### -Oops! It looks like this tutorial is still being worked on! Check back later for updates!-

[Next: Let's Loop de Loop! ->](Loops.md)

[Back to Main](../../README.md)
