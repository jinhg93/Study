#include <iostream>

using namespace std;

int main() {
	char arr[4][5][3] = {
		' ','#',' ',
		'#',' ','#',
		'#','#','#',
		'#',' ','#',
		'#',' ','#',

		'#','#','#',
		'#',' ','#',
		'#','#','#',
		'#',' ','#',
		'#','#','#',

		'#','#','#',
		'#',' ','#',
		'#',' ',' ',
		'#',' ','#',
		'#','#','#',

		'#','#',' ',
		'#',' ','#',
		'#',' ','#',
		'#',' ','#',
		'#','#',' '
	};

	int n;

	cin >> n;

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 3; x++) {
			cout << arr[n][y][x];
		}
		cout << endl;
	}


	return 0;
}