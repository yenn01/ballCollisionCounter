/*	Author	: YM OOI
	Date	: 1/6/19
	Trivia	: Ball Collision Counter
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	int collisionCount = 0;
	bool complete = false;
	bool finCount = true;
	bool interCollision = true;
	int calculate = 0;
	char nBalls[] = { 'R','L','R','L','R', 'L','R','R','L','L'};
	size_t n = sizeof(nBalls) / sizeof(nBalls[0]);
	printf("Number of Balls : %d \n", n);
	for (int j = 0; j < n; j++) {
		printf(" %c ", nBalls[j]);
	}

	do {
		finCount = true;
			do { //Line Collision Counter Start
				for (int i = 0; i < n; i++) {
					if (nBalls[i] == 'R' && nBalls[i + 1] == 'L') {
						collisionCount = collisionCount + 1;
						interCollision = true;
						nBalls[i] = 'L';
						nBalls[i + 1] = 'R';
						i = 0;
						printf("\n  Count : %d \n", collisionCount);
						for (int j = 0; j < n; j++) {
							printf(" %c ", nBalls[j]);
						}
					}
				}
			} while (interCollision == false); //Line Collision Counter End
			
			for (int k = 0; k < n; k++) {
				if (nBalls[k] == 'R' && nBalls[k + 1] == 'L') {
					finCount = false;
					printf(" Test ");
				}
			}

		} while (finCount == false);
		printf("\nThere is %d number of collisions \n", collisionCount);
		system("pause");
	}
