#include <stdio.h>
#include <stdlib.h>

int pertition(int array[] , int low, int high)
{
    int pvot = array[high];
    int i = low-1;

    for(int j = low ; j<high ; j++)
    {
        if(array[j] < pvot)
        {
            i++;
            //swap
            int temp = array[i];
            array[i]= array[j];
            array[j]=temp;
        }
    }
    i++;
    int temp = array[i];
    array[i]= array[high];
    array[high]=temp;

    return i;

}


void quickSort ( int array[], int low , int high)
{
    if(low<high)
    {
        int pvtIndex=pertition(array, low, high);

        quickSort(array,low,pvtIndex-1);
        quickSort(array,pvtIndex+1,high);
    }
}

int main()
{
    int array[]={1,10,9,4,8};

    int low = 0;
    int high = 4;
    quickSort(array,low,high);

    for(int i = 0 ; i<high+1 ; i++)
    {
        printf("%d , ",array[i]);
    }
    return 0;
}
