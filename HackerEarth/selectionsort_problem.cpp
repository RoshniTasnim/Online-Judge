#include <iostream>

using namespace std;

void SelectionSort(int A[], int n, int x)
{
  for(int i = 0; i< x; i++)
  {
      int iMin = i;
      for(int j= i+1; j< n; j++)
      {
          if(A[j] < A[iMin])
            iMin = j;
      }
      int temp = A[i];
      A[i] = A[iMin];
      A[iMin] = temp;
  }
}
int main() {
	int n, x, A[101];
	cin >> n >> x;
	for(int i = 0; i< n; i++)
    {
        cin>>A[i];
    }
    SelectionSort(A, n, x);
    for(int i = 0; i< n; i++)
    {
        cout<<A[i]<<" ";
    }
	//cout << "Input number is " << n << endl;		// Writing output to STDOUT
}
