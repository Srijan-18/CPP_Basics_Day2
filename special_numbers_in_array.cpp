#include <iostream>
using namespace std;

int main (int argsc, char* args[]) {
	if( argsc != 3 ){
		cout << "Prameters quantity mismatch" << endl;
		return 0;
	}
	int start =atoi(args[1]);
	int end = atoi(args[2]);
	if (start < 0 || start >= 100 || end < start || end >100) {
		cout << "Inavlid Range" << endl;
		return 0;	
	}
	int counter;
	for (counter = start; counter <= end; counter ++) {
		if (counter % 11 == 0 && counter != 0) {
			cout << counter << endl;
			counter += 10;
		}
	}
	return 0;
}