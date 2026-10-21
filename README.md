                                                 Corner Grocer Grocery Tracker

Project Summary

This was the Corner Grocer Program. It took the daily purchase records of a grocer and allowed you to analyse them to work out how often each item was purchased. This in turn could be used to inform decisions about where to place items and how much stock to keep. The program read in CS210_Project_Three_InputFile.txt and presented a menu whereby you could either search for the frequency of an item, display a text-based histogram, or simply exit. It also automatically saved the frequency counts to startup. 

What I did Particularly Well

In this version, we've separated the menu in main.cpp from the GroceryTracker class in GroceryTracker.h and GroceryTracker.cpp. That gives each file a very clear purpose and makes the program much easier to follow. The use of a map means that items can be named and associated with their counts and allows for the same store's data to be supported in the search. 

Where I could Enhance the Code

I could improve this assignment by making it case-insensitive so that if you enter an item with different capitalization, it will still find the correct result. I'd look at how the program deals with blank input, missing files, and failed backup writes, and make the error messages more specific. Having automated tests for known numbers of items, missing items, and invalid menu selections would make it much easier to test future changes. For a much larger dataset you could compare a map with an unordered map to see if the faster lookup times would be worth the loss of the alphabetically ordered output.

Challenges and Resource 

A challenging part of this project is keeping file processing and frequency counting consistent because the frequency list, histogram, and backup all depend on accurate counts. To check this logic, I can use a small input file, count the items manually, and compare those counts with each output. Visual Studio’s debugger, compiler messages, course materials, and C++ reference documentation are resources I can use to investigate future problems and strengthen my support network.

Transferable Skills

This project has allowed me to get some real practice in C++ classes, file input and output, maps, loops, menu design, and input validation. The skills I've learned here are directly transferable to other programs that will be reading records, summarizing data, and allowing users to search for and view the results. Breaking the code down into functions and files is also going to be invaluable when working on larger projects in the future and will make it much easier to find and fix problems.

Maintainability, Readability, and Adaptability

 Made the program far easier to maintain by separating the user menu from the grocery tracking functionality. The class keeps the frequency data private and provides methods to do the various things that need to be done. The code is well commented on, and the method names are descriptive, so it's clear what the code is doing. By reusing the frequency data across the menu, it also means that you don't have to do the same processing twice, and it makes it far easier to add further functionality later on (e.g., another report format).
