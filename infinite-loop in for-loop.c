#include <stdio.h>

int main () {						//run this program and see the output

	// This is an infinite for loop
	// as the condition expression
	// is blank
	for ( ; ; ) {
		printf("This loop will run forever.");
	}
	return 0;
}

/*Initialization → empty → nothing happens

Condition → empty → interpreted as true (by C standard)

Update → empty → nothing happens

Because the condition is empty, the compiler treats it as always true.

So the loop never ends, creating an infinite loop.*/
