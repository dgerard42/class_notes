/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   multiarray.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/10/24 10:29:33 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/10/24 10:42:57 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int         arrayMultiplier(int arr[], int start, int end){

    if (start > end){
        return 1;
    } else if (start == end){
        return arr[start];
    } else {
        return arr[start] * arr[end] * arrayMultiplier(arr, start + 1, end - 1);
    }
}

int         main(){
    
    int     arr[] = {2,3,4,5,6,7,8,9};
    int     arr1[] = {2,2};
    int     arr2[] = {1};
    int     arr3[] = {2,2,2};

    cout << arrayMultiplier(arr, 0, 7) << endl;
    cout << arrayMultiplier(arr1, 0, 1) << endl;
    cout << arrayMultiplier(arr2, 0, 2)<< endl;
    cout << arrayMultiplier(arr3, 0, 2) << endl;
    return 0;
}
