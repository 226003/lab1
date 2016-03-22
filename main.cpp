#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char charSquare(char **square,int n); // deklaracja funkcji
void drawcharSquare(char **square,int n);

int main (int argc, char **argv)
{
	int n = atoi(argv[1]);
	int seed = atoi(argv[2]);

	srand(seed);
	
	char **square = new char *[n]; // tablica na wsk
	for (int i=0; i<n; i++) // generowanie wymiarow
		square[i] = new char  [n];

	charSquare(square,n);
	drawcharSquare(square,n);


	// zwalnianie pamieci
	for (int i=0; i<n; i++)
		delete [] square[i];

	delete [] square;

}

char charSquare(char **square,int n)
{
	for (int i=0; i<n; i++)
		{
			for (int j=0;j<n;j++)
			{
				square[i][j]=rand()%26+97;
			}
		}

	return **square;
		
}

void drawcharSquare(char **square,int n)
{
	for (int i=0; i<n; i++)
		{
			for (int j=0;j<n;j++)
			{
				cout << square[i][j];
				cout << " ";
			}
			cout << endl;
		}
}