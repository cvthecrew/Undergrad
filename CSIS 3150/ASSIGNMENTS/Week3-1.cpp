//Alexander Cannell
//CSIS 3150
//1.	Write a function which takes two integer arrays and returns “true” if the two arrays have exactly the same elements.

int main()
{
  const int SIZE = 10;
  double ar[SIZE];  // at this point, all elements are un-initialized

  // Ask the user for 10 double's
  for (int i = 0; i < SIZE; i++)
  {
    cout << "Enter a number: ";
    cin >> ar[i];   // ith element receives value
  }

  // Now that all 10 values are in the array, we compute the sum.
  double sum = 0.0;
  for (int i = 0; i < SIZE; i++)
    sum += ar[i];

  cout << "The sum is << sum << endl;
  
  //again
  const int SIZE1 = 10;
  double ar[SIZE1];  

  for (int j = 0; j < SIZE1; j++)
  {
    cout << "Enter a number: ";
    cin >> ar[j];   
  }

  double sum1 = 0.0;
  for (int j = 0; j < SIZE1; j++)
    sum += ar[j];

  cout << "The second sum is << sum1 << endl;
  
  if(sum == sum1){
	cout << "They are Equal" << endl;
  }
  else if (sum != sum1){
	cout << "They are Not Equal" << endl;
  }
}