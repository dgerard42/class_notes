#include <iostream>
#include <string>

using namespace std;

bool uB(char b[][5], int array[]){	


// fills the 2d array with - except for 
for (int row = 0; row < 7; row++){
for (int col = 0; col < 5; col++){
			b[row][col] = '-';
				}
				}
	b[array[0]][array[1]] = 'X';
	return true;
}

void pb(char b[][5]){
	cout << endl << endl;
	for (int row = 0; row < 7; row++){
	for	(int col = 0; col < 5; col++){
		cout << b[row][col] << " ";
		}
			cout << endl;
	}
	}



bool m(char b[][5], int array[], int dir){
	bool s;
	if (dir == 0){
	array[1]++;
	} else if (dir == 1){
	array[0]--;
		} else if (dir == 2){
	array[1]--;
		} else if (dir == 3) {
		array[0]++;
	}
	s = uB(b, array);
	return s;
}

int change(int dir){
	dir++;
	dir = dir % 4;
	return dir;
}

int main(){
	
}
