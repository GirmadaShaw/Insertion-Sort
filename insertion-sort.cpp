/*
This is an example of Insertion Sort. Best Case T.C. is O(n), otherwise O(n^2) 
It includes both ascending and descending order.
*/

#include <iostream>

int main () 
{
    int arr[] = { 10 , 6 , 1 , 7 , 14 ,9} ;
    //int arr[] = { 12 ,11,13,5 ,6} ;
    int size = sizeof( arr ) / sizeof( arr[0] ) ;

    for ( int i = 1 ; i < size ; i++ )
    {
        int temp = arr[i] ; 
        for( int j = i - 1 ; j >= 0 ; j-- )
        {
            if ( temp <= arr[j] )
            {
                arr[j+1] = arr[j] ; 
                arr[j] = temp ; 
            }
            else
            break ; 
        }
    }

    for( int i = 0 ; i< size ; i++ )
    std :: cout << arr[i] << " " ;
    std :: cout << " \n" ;

     for ( int i = 1 ; i < size ; i++ )
    {
        int temp = arr[i] ; 
        for( int j = i - 1 ; j >= 0 ; j-- )
        {
            if ( temp >= arr[j] )
            {
                arr[j+1] = arr[j] ; 
                arr[j] = temp ; 
            }
            else
            break ; 
        }
    }

    for( int i = 0 ; i< size ; i++ )
    std :: cout << arr[i] << " " ;


}