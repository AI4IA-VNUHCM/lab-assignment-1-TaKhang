/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	int i,j;
		for(i=1;i<=argc;i++)
		{
			for(j=2;j<=i-1;j++)	
			if(i%j == 0)
			{
				break;
			}
		}
			 if (i==j);
				{
				  printf("%d",i);
				}
			
	//Your codes here
	// Ở câu này em cứ hiểu cái testcase chính là thằng em nhập vô á rồi em xử lý bình thường thôi
	// Quên để n như em 
	// Thì em có thể để int n = testcase rồi xử lý cũng được á em hiểu he,
	// dạ em sẽ cố 
	// h thị em ko phiền chị nx 
	// cảm ơn sư tỉ nha :v Ráng làm nè lát mà làm mắc đâu hỏi chị sau. bye bye
	
	return 0;
}
