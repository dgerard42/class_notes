/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   palindrome.cpp                              __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/11/11 20:26:55 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/11/12 22:20:44 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

bool         palindrome(string test, int start, int end){

    while (test[start] == ' ')
        start++;
    while (test[end] == ' ')
        end--;
    if (end <= start)
        return true;    
    if (test[start] != test[end])
        return false;
    if (test[start] == test[end])
        return palindrome(test, (start + 1), (end - 1));
}

int         main(){

    string  test00 = "a butt tuba";
    string  test01 = "taco cat";
    string  test02 = "";
    string  test04 = "acab";
    string  test05 = "e";
    string  test06 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAaaaaaaaaaaaahhhaAA";

    cout << palindrome(test00, 0, (test00.length() - 1)) << "expected == 1" << endl;
    cout << palindrome(test01, 0, (test01.length() - 1)) << "expected == 1" << endl;
    cout << palindrome(test02, 0, (test02.length() - 1)) << "expected == 1" << endl;
    cout << palindrome(test04, 0, (test04.length() - 1)) << "expected == 0" << endl;
    cout << palindrome(test05, 0, (test05.length() - 1)) << "expected == 1" << endl;
    cout << palindrome(test06, 0, (test06.length() - 1)) << "expected == 0" << endl;
    return 0;
}
