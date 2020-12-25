
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void make_random(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        int a=1;
        for (int k = 0; k < 24; k++) {
            if (rand() % 2 == 1)
                sum += a;
            a*=2;
        }
        arr[i] = sum;
    }
}

int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}


void countSort(int arr[], int n, int exp)
{
    int output[1000];
    int i, cnt[64] = { 0 };


    for (i = 0; i < n; i++)
        cnt[(arr[i] / exp) % 64]++;

    for (i = 1; i < 64; i++)
        cnt[i] += cnt[i - 1];

    for (i = n - 1; i >= 0; i--) {
        output[cnt[(arr[i] / exp) % 64] - 1] = arr[i];
        cnt[(arr[i] / exp) % 64]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}


void radixSort(int arr[], int n)
{

    int max = getMax(arr, n);

    for (int exp = 1; max / exp > 0; exp *= 64)
        countSort(arr, n, exp);
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);

    }
}

int main(){
    srand(time(NULL));

    int arr[1000];

    make_random(arr,1000);
    radixSort(arr, 1000);
    print(arr, 1000);
    return 0;
}
