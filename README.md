# Hiring-questions
here i am submitting the answers the coding question for hiring process.
I have attached answer.c file for answer of first question.

(1)Consider that you have a rectangular piece of paper of arbitrary dimensions N by M (where N and M are positive integers). You also have a pair of scissors which can cut perfectly straight with no loss of paper. You wish to reduce the original piece of paper into a series of perfect squares of paper, making the largest possible squares, and using all of the paper provided. Write a function in C that takes the inputs N, and M, and returns the series of squares that can be made out of that piece of paper. No fractional squares, i.e. no square should be less than 1 in length and width.

Some examples:
Input: N =6 , M = 5
Output: 5x5, 1x1, 1x1, 1x1, 1x1, 1x1

Input: N = 1, M = 1
Output: 1x1

Input: N = 9, M = 9
Output: 9x9

Here is the output of first question.
Enter the length and width of the paper: 6 5
largest square size is 5 x 5
5 squares of size 1 x 1

Q2) Below is a link to a spreadsheet with two columns A and B. Define a mapping function that for each row of column A, the output of the function will be the corresponding row of column B. More generally: mapping_function(An) =  Bn.  

For example:
	
mapping_function(15840) = cGp
mapping_function(16465) = cmW
mapping_function(17941) = cX3

Q2 a) What is the mapping function?
The mapping function in embedded systems is a software routine that maps a physical address to a virtual address, allowing the system to access memory efficiently and effectively. This function provides an abstraction layer between the physical memory and the software, enabling the software to work with memory addresses that are not directly related to physical memory addresses.

Q2 b) What is the output of the mapping function for the following inputs: 30001, 55555, 77788

Q2 c) What is the upper limit of this mapping function before there will be collisions? 

Q2 d) Please share any code that you wrote in the process of trying to solve the above problem.
