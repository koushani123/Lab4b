#include <iostream>
using namespace std;

int sum(int array[], int size);

int main()
{
 cout << "Size of Array: "; int size; cin >> size;
 int *array = new int [size];
 
 //Inputing array.
 cout << "Enter elements of array followed by spaces: ";
 for (int i = 0; i<size; i++)
  cin>>*(array+i); //Or cin>>array[i];

 cout << "Sum of elements of array: " << sum(array,size) << endl;

 return 0;
}

//Function.
int sum(int array[], int counter)
{
 if (counter == 1)
  return array[0];
 else
 {
  return array[0] + sum(array+1,counter-1);
 }
}
