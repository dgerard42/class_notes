/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   reverseString.cpp                           __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/10/29 11:09:22 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/10/29 11:16:16 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

void        reverseString(string str){

    int len = str.length();
    
    if (len == 0)
        return;
    else {
        cout << str[len - 1];
        reverseString(str.erase(len - 1));
    }
}

int         main(){

    reverseString("hello there");
    cout << endl;
    return 0;
}
