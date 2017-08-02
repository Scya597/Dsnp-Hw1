#ifndef P2_TABLE_H
#define P2_TABLE_H

#include <vector>
#include <string>

using namespace std;

class Row
{
public:
   void setRowLength(int);
   void fillRow(int, int);
   void printRow(int);
   const int operator[] (size_t i) const { }
   int& operator[] (size_t i) { }

private:
   int  *_data;
};

class Table
{
public:
   const Row& operator[] (size_t i) const;
   Row& operator[] (size_t i);

   void print();
   bool read(const string&);

private:
   vector<Row>  _rows;
   int rowCount;
   int rowLength;
};

#endif // P2_TABLE_H
