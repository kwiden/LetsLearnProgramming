
## Let's Learn More Variables!

[<- Previously: Let's Learn Variables!](Math.md)

**Objectives**: Expand on our variable knowledge

**Starting Point**: [This Code] (https://ideone.com/mgLXmw)

**Process**: 

In the previous lesson we learned about variables called integers ```int``` and doubles ```double```. We mostly focused on integers, and learned about integer division and how to store numbers in variables. We're going to expand a little more on variables in this lesson.

Open the starter code, it's pretty short and I bet you know roughly was it does, but I want to clarify the line with ```printf```. 

```cpp
printf("Our team number is %d", team_number);
```

So to start, ```printf`` is a *function* that we use to tell the computer we want to print something to the screen. We can tell its a function because its followed by parenthesis with some stuff inside of them. The stuff inside of the parenthesis are called *arguements*.

The arguement for our ```printf``` function is 

```"Our team number is %d", team_number```

For the most part, we're saying "hey computer, print these characters exactly," but it doesn't print the %d literally. Instead it prints the value of ```team_number```, why is that?
```%d``` is what called a *format specifiier*. *Format specifiier* is a fancy way of saying "a blank spot that we tell the computer to fill in." Its a very similar concept to madlibs. We use these when we want to print the value of a variable. **Change the value of ```team_number``` and run the code.**

![IMAGE](../../Images/madlibs.png)

The output of the code should have changed to print that our team number is the new value you set ```team_number``` to. If you haven't, change the number to a negative number... do you think it will print the negative sign?

What if we wanted to print multiple variables in one line? We would add more format specifiers!

Lets modify our code so it prints "Our team number is %d and we have %d students". Lets also add a variable that will hold the number of students, I'll call mine ```num_kids``` but you can call yours whatever you'd like. Lastly, lets tell the computer that the second format specifier should print the value of ```num_kids```.
Our main body should look like this:

```cpp
	int team_number = 1296;
	int num_kids = 24; 
 
	printf("Our team number is %d and we have %d students", team_number, num_kids);
```

Click run to test your code. Did it work?

Change your printf arguement so that ```num_kids``` is before ```team_number``` (don't forget the comma!) and click run. What changed? How does the computer pick which variable to put in which spot?



[Next: Let's Learn Functions! ->](Functions.md)

[Back to Main](../../README.md)
