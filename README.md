# Line-Wrapper
This program gets input from a '.txt' and then wraps the line into some length of characters. 

For example, if MAXLENGTH = 10
and the input is,
My name is Harry.

The input is wrapped as,
My name is 
Harry.

The program also checks if there is any white space after the maximum character length and if not found it ignores the maxlength and keeps on printing the character till the next white space or new line character is found.

For example,
MAXLENGTH = 10
Ineedtowatchanewmovie.
is wrapped as,
Ineedtowatchanewmovie.

Here, we can see that the whole line is printed despite the fact that MAXLENGTH is equal to 10 as there is no white space between the characters. 
Also, the program counts the number of input lines and addtional lines created throughout the program.
