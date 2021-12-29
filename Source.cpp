/*
Stefania Ascencio
Chapter 18
Searching and Sorting Algorithms
COSC 2412
1. (Recursive sequential search) The sequential search algorithm given in 
this chapter is nonrecursive.
Write and implement a recursive version of the sequential search 
algorithm.
*/
#include<iostream>
#include <iomanip>
using namespace std;
const int SIZE = 10;
int seqSearch(int intList[], int last, int target, int& locn);
int main(void)
{
int locn;
int i;
int arr[SIZE] = { 2, 8, 34, 45, 85, 8, 64, 54, 65, 10 };
cout << "This Program demonstrates Sequential search(Linear Search)" 
<< endl;
cout << "\nIndexes: " << endl;
for (i = 0; i < SIZE; i++)
cout << setw(3) << i;
cout << "\nList data: " << endl;
for (i = 0; i < SIZE; i++)
cout << setw(3) << arr[i] << endl;
if (seqSearch(arr, SIZE - 1, 85, locn))
cout << " Found 85 at location " << locn << endl;
else cout << " 85 Not Found at location " << locn << endl;
cout << endl;
return 0;
}
int find(int list[], int last, int tar, int & locn)
{
int find;
find = 0;
while (find < last&&tar != list[find])
find++;
locn = find;
return(tar == list[find]);
}
int seqSearch(int intList[], int last, int target, int & locn)
{
system("pause");
return 0;
}
