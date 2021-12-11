# cs210-clock

The assignment was to create a clock that displays both the 12-hour and 24-hour clock, and allows the user to add seconds, minutes and hours to it.
I feel I have made the visual aspect of the code very seamless, it is easy to tell where the clock is and the options that the users interact with.
Where could you enhance your code? How would these improvements make your code efficient, secure, and so on?
My code is very clunky in this regard, there is a lot of repetition and some things are done in a complicated way, which I could have enchanced by implementing OOP features such as struct and classes.
For this project, I found implementing a AM-PM rollover function to be the most difficult part. I had originally planned to use a loop that checked for the hour state to keep changing the AM-PM state, and that is what I should have implemented. I overcame this by checking for the function call of 12hour Clock to exceed a specific number, and switching back to AM-PM depending on how often that number repeats.
What skills from the project will be particularly transferable to other projects or course work?
The skills I picked up from this project are planning to make a program like this in the first place, and the piece-by-piece thinking that is required to put together the code.
I made the program readable by having easy to read variable names, maintainable by documenting the function functions and not particularly adaptable.
