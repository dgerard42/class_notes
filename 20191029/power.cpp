/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   power.cpp                                   __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/10/29 09:43:43 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/10/29 09:59:56 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int             recursivePower(int base, int exponent){
    
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}
