#ifndef HISTORY_H
#define HISTORY_H
#include "globals.h" // need this in case globals.h not included befor history.h
class History
{
public:
	History(int nRows, int nCols);
	void display() const;
	bool record(int r, int c);
private:
	int m_rows; // to be used as # of interesting objects in m_history grid
	int m_cols;
	int m_historygrid[MAXROWS][MAXCOLS];
};
#endif