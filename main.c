#include <stdio.h> /** standard input and output header file **/
#include <stdlib.h> /** standard library header file **/
#include <conio.h> /** console input output header file **/
#include "menu.h" /** user defined menu.h header file **/


int main() /** body of main function **/
{
    system("cls"); /** for clear the terminal **/
    printf("Wellcome to Calculator..!\n\n"); /** title of tool **/
    getch(); /** for pause the terminal until user press any key to continue **/
    menu(); /** calling the function from "menu.h" header file **/
    return 0; /** execution ends without any errors **/
}
