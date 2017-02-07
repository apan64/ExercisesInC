#Reflection 1

My learning goal for this class is to understand how to use C to perform lower-level operations, and how to properly structure the creation of software.

Throughout this sprint, our team has been following the eduScrum ceremonies by having standups at each class meeting, meeting multiple times per week, assigning tasks for each sprint, and having a plus/delta review.  Our team also decided to read HFC chapters 1, 2, 3, and 11 and had some understanding of memory allocation and pointers going into the sprint review, but we were somewhat unprepared to think about the question given by applying those concepts while reading through the code.  Our activity remained mostly the same throughout this sprint, with only slight changes in the scope of the tasks we were assigned and futher population of our sprint and project backlogs.  

##HFC Exercises

[HFC Chapter 1 Exercise](https://github.com/apan64/ExercisesInC/blob/master/exercises/ex01/cards.c)

[HFC Chapter 2 Exercise](https://github.com/apan64/ExercisesInC/blob/master/exercises/ex02/stack.c)

[HFC Chapter 2.5 Exercise](https://github.com/apan64/ExercisesInC/blob/master/exercises/ex02.5/find_track.c)

[HFC Chapter 3 Exercise](https://github.com/apan64/ExercisesInC/blob/master/exercises/ex03/tee.c)

[HFC Chapter 11 Exercise](https://github.com/apan64/ExercisesInC/blob/master/exercises/ex11)

##ThinkOS Exercises

This sprint our team chose to read four chapters of HFC instead of ThinkOS, so we did not complete any ThinkOS exercises this sprint.  We plan to focus primarily on ThinkOS for the next sprint.

##Exam Questions/Solution

###Question

What would be the purpose of the line:

	char **thingy;

###Answer

The above line of code creates a pointer, thingy, that stores the address of a char *.  thingy is now a pointer to a pointer, and in the case of the char type, thingy could be used to store an array of arrays of characters, the equivalent of an array of strings.