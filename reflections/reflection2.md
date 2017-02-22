#Reflection 2

My learning goal for this class is to understand how to use C to perform lower-level operations, and how to properly structure the creation of software.

During the second sprint, our team continued to follow eduScrum principles by having out-of-class meetings, assigned tasks and readings, and plus/delta reviews.  This sprint we focused on creating the necessary functionalities for our BitTorrent client individually, ensuring that all of our code followed the protocols that we had previously established last sprint.  We tried to make our client implementation modular, accounting for the necessary inputs and outputs of our functions and communicating these requirements to each other.  Additionally, we focused on reading ThinkOS this sprint because last sprint we had focused mainly on HFC, and did a better job of assigning the readings and ensuring that everyone had done them properly.  We believe that we are on track after this sprint, as we accomplished our goals and completed our assigned tasks for the sprint and can now focus on integrating our individual parts.  

##HFC Exercises

This sprint our team chose to read four chapters of ThinkOS instead of HFC, so we did not complete any HFC exercises this sprint.

##ThinkOS Exercises

[ThinkOS Chapter 1 Reading Questions](https://github.com/apan64/ExercisesInC/blob/master/reading_questions/answers/chp1.txt)

[ThinkOS Chapter 2 Reading Questions](https://github.com/apan64/ExercisesInC/blob/master/reading_questions/answers/chp2.txt)

[ThinkOS Chapter 3 Reading Questions](https://github.com/apan64/ExercisesInC/blob/master/reading_questions/answers/chp3.txt)

[ThinkOS Chapter 4 Reading Questions](https://github.com/apan64/ExercisesInC/blob/master/reading_questions/answers/chp4.txt)

##Exam Questions/Solution

###Question 1

Programming languages act as a medium for programmers to understand how their machines will run, often abstracting several steps the machine has to make into a single function for a programmer to call.  In C, what abstractions are made between using the `malloc` function in a program and what the computer does when `malloc` is called?

###Question 2

Can you name any other abstractions in C?  What about different abstractions between languages (eg. Python vs Java vs C)?

###Answer 1

In C, by using `malloc` you simply give it an argument for how much memory you would like to allocate to a variable.  While it is only a single step in C, the computer actually has to assign a virtual memory address to the variable as a part of the heap, which is then mapped to a physical memory address through the MMU.

###Answer 2

Other abstractions include writing to files, as information is actually being written to a buffer representation of the file, which has to be flushed for the file to actually be written to storage.  An example of difference in abstractions between languages is array (or list) concatenation.  In Python, concatinating lists is as simple as "adding" them together ([1, 2, 3] + [4, 5] -> [1, 2, 3, 4, 5]).  However in Java and C, the concatenation abstraction is removed and it is more evident that a new array actually has to be created whenever the array size is going to be changed (assuming standard array structures) since you actually have to define your array sizes on initialization, and values are then copied from the arrays to be concatenated into the new larger array.