## Let's Learn Variables!

[<- Previously: Let's Say Hello!](HelloWorld.md)


**Objectives**: Learn how to write code using variables, learn about different variabes

**Process**: 

In the last lesson, we learned that we can write code that prints things to the screen, that is pretty good but not very interesting or dynamic. Today, lets write some code that does something. 

Lets say we wanted to write code that converted seconds into hours, minutes, and seconds. On a sheet of paper - writing every step- figure out how many hours:minutes:seconds (H:M:S) are in 3661 seconds.

.

No seriously, do it on paper.

.

Do you have an answer?

.

You should have gotten 1 hour, 1 minute, and 1 second. What if instead I asked for how many H:M:S are in 3776? 

Lets write a generic way to solve this problem so that we can solve it for any amount of seconds.

There are multiple ways we could start - maybe we convert the seconds to minutes first and then convert minutes to hours. Or maybe we convert to hours first and figure out how many minutes are left. There is no right or wrong way to solve this problem, as long as it works. 

For the sake of this tutorial, lets use the method that converts from seconds to minutes to hours.

So, first we'll convert seconds to miutes by deviding the seconds by 60. For 3661 seconds, the division is 61 minutes with 1 second left over.

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

So now that we broke down how to solve that problem generically, now lets try to code it! I gave you some [starter code](https://ideone.com/fork/1v4mFV).

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

In the line ``` seconds = 3661; ```, we are *assigning a value* to ```seconds``` - in this case we are assigning the value of 3661. So now, ```seconds``` equals 3661 until we assign it a new value. When we assign values to variables we always put the variables on the left side of the equal sign, and the new value on the right side. To quickly demonstrate:

``` cpp
int a;
int b;

a = 4;
// a is now assigned the value of 4
b = 6;
//b is now assigned the value of 6
a = b;
```

We read code from top to bottom, and unlike in algebra - the value of the variable can be changed. What do you think a and b equal at the end of the code?
If you thought a and b are not equal or that they both equal 4 - sorry, you didn't get it. But if you thought a and b both equaled 6, then good job!

```a``` equals 6 because assigning values *always* goes from the right to the left. The variable on the left of the equal sign is the variable changing its value. Given this, if you try to write ```6 = a;``` the computer will get confused and be mad at you - you cannot reassign the value of 6. 6 is always 6.

Lets play around with some math in coding! Open this [math code](https://ideone.com/f1QNhi) and run it. See what occurs! Try changing numbers, can you figure out what is happening?

Try to find three differences (in both the printed lines and the code) between the integers and the doubles. Once you think you have them, tell Katie.

So, looking back at our math-ish, how can we convert it to code?
```
1 | Starting Seconds = 3661
2 | Minutes = Starting Seconds / 60 (ignoring the remainer);
3 | Seconds = The remainder of (Starting Seconds / 60);
4 | Hours = Minutes / 60 (ignoring the remainer);
5 | Minutes = The remainder of (Minutes / 60);
6 | ____ [starting seconds] is ____ [Hours] hours, ____ [Minutes] minutes, and ____ [Seconds] seconds.
```
I added line numbers at the beginning of each line, so I will refer to the math-ish by line numbers.

In the starter code, we already have line 1 and line 6 written. Line 1 is written as ```seconds = 3661```. We're using the variable ```seconds``` to hold the Starting Seconds. Line 6 is written using the ```printf``` function. We'll put our answers in the variables ```hour```, ```min```, and ```sec``` and the ```printf``` line will print out their values. So, we only need to write lines 2 through 5.

The first thing is lets subsitute our math-ish names for the variables names:
```
min = seconds / 60 (ignoring the remainer);
sec = The remainder of (seconds / 60);
hour = min / 60 (ignoring the remainer);
min = The remainder of (min / 60);
```
Now we need to get rid of all those words! While we understand english, the computer definately does not. Looking at our math code from earlier, how do we do division that ignores the remainer? How do we get the remainder? 

Update the [starter code](https://ideone.com/fork/1v4mFV) with your converted math-ish and click "run"/"ideone it". Did it work? Ask for help to solve any problems. 

Once you have it working, change the value of ```seconds``` and see if it still gets the correct answer!

[Next: Let's Learn More Variables! ->](LLVar2.md)

[Back to Main](../../README.md)
