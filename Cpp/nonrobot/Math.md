## Let's Learn Variables!

[<- Previously: Let's Say Hello!](HelloWorld.md)

In the last lesson, we learned that we can write code that prints things to the screen, that is pretty good but not very interesting or dynamic. Today, lets write some code that does something. 

Lets say we wanted to write code that converted seconds into hours, minutes, and seconds. On a sheet of paper - writing every step- figure out how many hours/minutes/seconds (HMS) are in 3661 seconds.

-

-

-

You should have gotten 1 hour, 1 minute, and 1 second. What if instead I asked for how many HMS are in 3776? 

Lets write a generic way to solve this problem so that we can solve it for any amount of seconds.

There are multiple ways we could start - maybe we convert the seconds to minutes first and then convert minutes to hours. Or maybe we convert to hours first and figure out how many minutes are left. There is no right or wrong way to solve this problem (and many others). 

For the sake of this tutorial, lets use the method that converts from seconds to minutes to hours.

So, first we'll convert seconds to miutes by deviding the seconds by 60. For 3661 seconds, we would 61 minutes and have one second left over.

Next, we'll need to devide minutes by 60, so that we can get hours. 61 minutes is 1 hour with 1 minute left over.

At this point, we know the answer: 3661 seconds = 1 hour, 1 minute, and 1 second.

Lets write the steps in math-ish:
```
Starting Seconds = 3661

Minutes = Starting Seconds / 60 (ignoring the remainer);

Seconds = The remainder of (Starting Seconds / 60);

Hours = Minutes / 60 (ignoring the remainer);

Minutes = The remainder of (Minutes / 60);

____ [starting seconds] is ____ [Hours] hours, ____ [Minutes] minutes, and ____ [Seconds] seconds.
```

If you're a little confused, ask for help!

So now that we broke down how to solve that problem generically, now lets try to code it! I gave you a starting block [here]{https://ideone.com/1v4mFV).

In this code, we see the header section like last time, as well as the main and the main body. However, in this code we see something new:

``` cpp
int seconds;
int hour; 
int min; 
int sec;

seconds = 3661;
```

Here, we are declaring **variables**. What are variables? I'm glad you asked. **Variables** are places in your code where you can store *values* (aka numbers).  Different types of variables can store different types of things. If we want to store whole, counting numbers ( ...-2, -1, 0, 1, 2...) we will make an ```int``` or **Integer**. If we want to hold a number that is not a whole number (3.14, .99, -16.25), we would use a ```double```. There are more *types* than just integers and doubles, but that is enough for right now.



In the line ```int seconds;``` we are telling the computer that we want a place to put whole numbers (hence the int at the begining), and we are going to call it "Seconds". 
The following lines are creating more *integer* variables with different names.


[math](https://ideone.com/Xxe0cj)

[seconds](https://ideone.com/I7EISj)

[Next: Let's Learn Functions! ->](Functions.md)

[Back to Main](../../README.md)
