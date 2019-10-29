/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   bottles.cpp                                 __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/10/29 10:27:52 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/10/29 10:32:02 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

void            bottlesOfBev(int drinksLeft, string beverage){

    if (drinksLeft == 0)
        return;
    else {
        cout << drinksLeft << " " << beverage << " on the wall!!!!";
        bottlesofBev(drinksLeft - 1, beverage);
    }
}
