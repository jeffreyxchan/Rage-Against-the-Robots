#include "History.h"
#include "globals.h" // need to include this in case globas was not defined before history
#include <iostream>
using namespace std;

History::History(int r, int c)
{
	m_rows = r;
	m_cols = c;
	// Fill the grid with 0's
	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			m_historygrid[i][j] = 0;
		}
	}
}

void History::display() const
{
	// declare the grid to be displayed
	char newgrid[MAXROWS][MAXCOLS];

	// Create array for translating integers to alphabet characters
	char letters[27];
	letters[0] = '.';
	for (int k = 1; k < 27; k++)
		letters[k] = 'A' + k - 1;

	// Fill the new grid with corresponding letters/periods
	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			if (m_historygrid[i][j] > 26)
				newgrid[i][j] = 'Z';
			else
				newgrid[i][j] = letters[m_historygrid[i][j]];
		}
	}

	// Print the newgrid
	clearScreen();
	for (int r = 0; r < m_rows; r++)
	{
		for (int c = 0; c < m_cols; c++)
			cout << newgrid[r][c];
		cout << endl;
	}
	cout << endl;
}

bool History::record(int r, int c)
{
	// if out of bounds of the history grid, return false
	if (r - 1 > m_rows || c - 1 > m_cols || r - 1 < 0 || c - 1 < 0)
		return false;

	// otherwise, increment corresponding position on history grid
	m_historygrid[r - 1][c - 1]++;
	return true;
}
