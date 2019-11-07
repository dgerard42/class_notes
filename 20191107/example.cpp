/* ************************************************************************** */
/*                                                                            */
/*                                                  .--.                      */
/*   example.cpp                                 __/ o  ".                    */
/*                                              `  ),    "-.                  */
/*   By: dany <github.com/dgerard42>               |;;,      "-._             */
/*                                                 ';;;,,    ",_ "=-._        */
/*   Created: 2019/11/07 10:34:33 by dany            ':;;;;,,..-``"-._`"-.    */
/*   Updated: 2019/11/07 10:36:38 by dany              _/_/`           `'"`   */
/*                                                                            */
/* ************************************************************************** */

int     myInt = 42;
int     secondInt = 23;
int     *ptrOne = &myInt;
int     *ptrTwo = &secondInt;
int     thirdInt = *ptrOne + *ptrTwo;

//third int is equal to 65
