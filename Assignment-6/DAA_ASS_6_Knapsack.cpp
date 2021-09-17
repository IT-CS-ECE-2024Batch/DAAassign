#include<bits/stdc++.h>
using namespace std;

void knapsack(int n, float weight[], float profit[], float capacity)
{
  float x[20],u ,tp = 0;
  int i, j ;
  u = capacity;

  for(i = 0; i < n; i++){
    x[i] = 0.0;
  }

  for(i = 0; i < n; i++)
  {
    if(weight[i] > u)
      break;
    else
    {
      x[i] = 1.0;
      tp = tp + profit[i];
      u = u - weight[i];
    }
  }

  if (i < n)
  {
    x[i] = u / weight[i];
  }

  tp += (x[i] * profit[i]);

  cout << "\nObject :: ";

  for(i = 0; i < n; i++)
  {
    cout << "\t" << i+1;
  }

  cout << "\nFraction :: ";

  for(i = 0; i < n; i++)
  {
    cout << "\t" << x[i];
  }

  cout << "\n\nThe max profit is => " << tp<<"\n";
}

int main()
{
  float weight[20], temp, profit[20], ratio[20], capacity;
  int n, i, j;

 cout << "\n==========================";
     cout << "\nName: Umang Bhalla \nScholar No: 20U03031  " << endl;
     cout << "==========================\n";

  cout << "Enter the no. of objects => ";
  cin >> n;

  cout << "\nEnter the weights and profits one by one \n";
  for(i = 0;i < n; i++){
    cin >> weight[i] >> profit[i];
  }

  cout << "\nEnter the Capacity of Knapsack => ";
  cin >> capacity;

  for(i = 0;i < n; i++){
    ratio[i] = profit[i] / weight[i];
  }

  for (i = 0; i < n; i++)
  {
    for ( j = i+1 ; j < n; j++)
    {
      if (ratio[i] < ratio[j]){
        temp = ratio[j];
        ratio[j] = ratio[i];
        ratio[i] = temp;


        temp = weight[j];
        weight[j] = weight[i];
        weight[i] = temp;

        temp = profit[j];
        profit[j] = profit[i];
        profit[i] = temp;

      }
    }
  }
  knapsack(n ,weight , profit, capacity);
  return(0);
}
