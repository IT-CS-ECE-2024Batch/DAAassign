#include <iostream>
#include <algorithm>
using namespace std;

void knapSack(int W, int n, int val[], int wt[]) {
    int i, w;

    //value table having n+1 rows and W+1 columns
    int V[n + 1][W + 1];

    //fill the row i=0 with value 0
    for (w = 0; w <= W; w++) {
        V[0][w] = 0;
    }

    //fill the column w=0 with value 0
    for (i = 0; i <= n; i++) {
        V[i][0] = 0;
    }

    //fill the value table
    for (i = 1; i <= n; i++) {
        for (w = 1; w <= W; w++) {
            if (wt[i] <= w)
            {
                V[i][w] = max(V[i - 1][w], val[i] + V[i - 1][w - wt[i]]);
            }
            else
            {
                V[i][w] = V[i - 1][w];
            }
        }
    }

    //max value that can be put inside the knapsack
    cout<<"Max Value: " <<V[n][W]<<"\n";
}

int main(void) {
    int x;
    cout<<"enter the number of objects = ";
    cin>>x;
    int val[x];
    cout<<"enter the knapsack objects:\n";
    for (int i = 0; i < x; i++) {
        cin>>val[i];
    }
    int wt[x];
    cout<<"enter the weights of the objects:\n";
    for (int i = 0; i < x; i++) {
        cin>>wt[i];
    }
    cout<<"enter the knapsack capacity = ";
    int W;
    cin>>W;
    int n = sizeof(val) / sizeof(val[0]);
    knapSack(W, n, val, wt);
    return 0;
}

