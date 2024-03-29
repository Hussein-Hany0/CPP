#include <iostream>
#include "AVLTree.h"
using namespace std;

void f1() {
	AVLTree tree;

	for (int i = 0; i <= 32; ++i) {	// degenerate
		tree.insert_value(i);
		tree.level_order_traversal();
	}
}

int main() {
	f1();

	cout << "bye\n";

	return 0;
}


/*


 Level 0: 0
 Level 1: 1
 ******************
 Level 0: 1
 Level 1: 0 2
 ******************
 Level 0: 1
 Level 1: 0 2
 Level 2: 3
 ******************
 Level 0: 1
 Level 1: 0 3
 Level 2: 2 4
 ******************
 Level 0: 3
 Level 1: 1 4
 Level 2: 0 2 5
 ******************
 Level 0: 3
 Level 1: 1 5
 Level 2: 0 2 4 6
 ******************
 Level 0: 3
 Level 1: 1 5
 Level 2: 0 2 4 6
 Level 3: 7
 ******************
 Level 0: 3
 Level 1: 1 5
 Level 2: 0 2 4 7
 Level 3: 6 8
 ******************
 Level 0: 3
 Level 1: 1 7
 Level 2: 0 2 5 8
 Level 3: 4 6 9
 ******************
 Level 0: 3
 Level 1: 1 7
 Level 2: 0 2 5 9
 Level 3: 4 6 8 10
 ******************
 Level 0: 7
 Level 1: 3 9
 Level 2: 1 5 8 10
 Level 3: 0 2 4 6 11
 ******************
 Level 0: 7
 Level 1: 3 9
 Level 2: 1 5 8 11
 Level 3: 0 2 4 6 10 12
 ******************
 Level 0: 7
 Level 1: 3 11
 Level 2: 1 5 9 12
 Level 3: 0 2 4 6 8 10 13
 ******************
 Level 0: 7
 Level 1: 3 11
 Level 2: 1 5 9 13
 Level 3: 0 2 4 6 8 10 12 14
 ******************
 Level 0: 7
 Level 1: 3 11
 Level 2: 1 5 9 13
 Level 3: 0 2 4 6 8 10 12 14
 Level 4: 15
 ******************
 Level 0: 7
 Level 1: 3 11
 Level 2: 1 5 9 13
 Level 3: 0 2 4 6 8 10 12 15
 Level 4: 14 16
 ******************
 Level 0: 7
 Level 1: 3 11
 Level 2: 1 5 9 15
 Level 3: 0 2 4 6 8 10 13 16
 Level 4: 12 14 17
 ******************
 Level 0: 7
 Level 1: 3 11
 Level 2: 1 5 9 15
 Level 3: 0 2 4 6 8 10 13 17
 Level 4: 12 14 16 18
 ******************
 Level 0: 7
 Level 1: 3 15
 Level 2: 1 5 11 17
 Level 3: 0 2 4 6 9 13 16 18
 Level 4: 8 10 12 14 19
 ******************
 Level 0: 7
 Level 1: 3 15
 Level 2: 1 5 11 17
 Level 3: 0 2 4 6 9 13 16 19
 Level 4: 8 10 12 14 18 20
 ******************
 Level 0: 7
 Level 1: 3 15
 Level 2: 1 5 11 19
 Level 3: 0 2 4 6 9 13 17 20
 Level 4: 8 10 12 14 16 18 21
 ******************
 Level 0: 7
 Level 1: 3 15
 Level 2: 1 5 11 19
 Level 3: 0 2 4 6 9 13 17 21
 Level 4: 8 10 12 14 16 18 20 22
 ******************
 Level 0: 15
 Level 1: 7 19
 Level 2: 3 11 17 21
 Level 3: 1 5 9 13 16 18 20 22
 Level 4: 0 2 4 6 8 10 12 14 23
 ******************
 Level 0: 15
 Level 1: 7 19
 Level 2: 3 11 17 21
 Level 3: 1 5 9 13 16 18 20 23
 Level 4: 0 2 4 6 8 10 12 14 22 24
 ******************
 Level 0: 15
 Level 1: 7 19
 Level 2: 3 11 17 23
 Level 3: 1 5 9 13 16 18 21 24
 Level 4: 0 2 4 6 8 10 12 14 20 22 25
 ******************
 Level 0: 15
 Level 1: 7 19
 Level 2: 3 11 17 23
 Level 3: 1 5 9 13 16 18 21 25
 Level 4: 0 2 4 6 8 10 12 14 20 22 24 26
 ******************
 Level 0: 15
 Level 1: 7 23
 Level 2: 3 11 19 25
 Level 3: 1 5 9 13 17 21 24 26
 Level 4: 0 2 4 6 8 10 12 14 16 18 20 22 27
 ******************
 Level 0: 15
 Level 1: 7 23
 Level 2: 3 11 19 25
 Level 3: 1 5 9 13 17 21 24 27
 Level 4: 0 2 4 6 8 10 12 14 16 18 20 22 26 28
 ******************
 Level 0: 15
 Level 1: 7 23
 Level 2: 3 11 19 27
 Level 3: 1 5 9 13 17 21 25 28
 Level 4: 0 2 4 6 8 10 12 14 16 18 20 22 24 26 29
 ******************
 Level 0: 15
 Level 1: 7 23
 Level 2: 3 11 19 27
 Level 3: 1 5 9 13 17 21 25 29
 Level 4: 0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30
 ******************
 Level 0: 15
 Level 1: 7 23
 Level 2: 3 11 19 27
 Level 3: 1 5 9 13 17 21 25 29
 Level 4: 0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30
 Level 5: 31
 ******************
 Level 0: 15
 Level 1: 7 23
 Level 2: 3 11 19 27
 Level 3: 1 5 9 13 17 21 25 29
 Level 4: 0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 31
 Level 5: 30 32


 */
