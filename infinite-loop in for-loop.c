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

Condition → empty → interpreted as true (by C standard).

The compiler internally treats it like: for ( ; 1 ; )

In a for loop, only the condition controls whether the loop continues.

When the condition part is empty, C treats it as 1 (true).

The compiler does not require initialization or increment.

Since the condition is always true, the loop never stops.
Update → empty → nothing happens.

So the loop never ends, creating an infinite loop.    */
