/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   reverseString.cpp                           __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/10/31 09:25:47 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/10/31 10:56:56 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

string         reverseString(string str, int position){

    char    tmp = 'o';
    int     length = str.length();

    if (position <= (length - 1) / 2)
        return str;
    else {
        tmp = str[position];
        str[position] = str[(length - 1) - position];
        str[(length - 1) - position] = tmp;
        reverseString(str, position + 1);
    }
}

/*
    this code is shit, you are returning a string not changing it in place.
    decide which you are doing
*/

int         main(){

    cout << reverseString("hello", 0);
}
