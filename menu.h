#include "function.h" /** this is user defined header file **/

int menu(void); /** globally declared menu function for the tool **/
int circle_menu(void); /** globally declared function for displayed the menu of circle **/

int menu() /** body of menu function **/
{
    int option; /** declaring the option variable of int type **/
    printf("Main Menu\n"); /** msg before printing the main menu **/
    printf("1.Circle\n"); /** task for circle **/
    printf("2.Rectangle\n");
    printf("3.Exit..\n"); /** exiting the tool **/
    printf("Enter Your Choice: "); /** User enter his/her choice **/
    scanf("%d",&option); /** take input from user as type of integer **/
    switch(option) /** switch statenment call function written inside case body according the user input **/
    {
    case 1: /** this block is execute when user select 1st option **/
        circle_menu(); /** calling circle_menu() function**/
        break; /** this will stop the execution further **/
    case 2: /** this block execute when user input 2**/
        area_triangle(); /** calling the area_triangle **/
        break; /** stops the further execution of cases **/
    case 3: /** this block is execute when user select 2nd option **/
        Exit(); /** calling user defined exit function **/
        break; /** this will stop the further execution **/
    default: /** this blocks execute when user **/
        system("cls"); /** clear terminal **/
        menu(); /** recalling the menu function **/
    }
    return 0; /** terminate process without any error **/
}
int circle_menu() /** menu for circle **/
{
    system("cls"); /** clear terminal screen **/
    int option; /** declaring the integer variable **/
    printf("1.Area of Circle \n");/** calculate area of circle **/
    printf("2.Circumference of Circle \n"); /** circumference of circle **/
    printf("3.back \n"); /** back option **/
    printf("Enter Your Choice: "); /** Enter user choice **/
    scanf("%d",&option); /** takes user input **/
    switch(option) /** switch statenment call function written inside case body according the user input **/
    {
    case 1: /** this block execute if user want to execute the area of circle **/
        area_circle(); /** function for calculate the area of circle **/
        break; /** this will stop the further execution **/
    case 2: /** this block execute if user want to execute the circumference of the circle **/
        circumference_circle(); /** function for calculate the circumference of circle **/
        break; /** this will stop the further execution **/
    case 3: /** this block execute if user want to go back to menu **/
        system("cls"); /** clear terminal screen **/
        menu();/** recalling the menu function **/
    default: /** this will execute wen user input choice **/
        circle_menu(); /** recalling the menu of circle **/
    }
    return 0; /** terminate process without any error **/
}
int triangle_menu() /** menu for triangle **/
{
    system("cls"); /** clear terminal **/
    int option; /** declaring the integer variable **/
    printf("1.Area of Triangle "); /** for calculate the area of triangle **/
    printf("2.back "); /** go one step back **/
    scanf("%d",&option); /** take input from user as type of integer **/
    switch(option) /** switch statement call the function according to user input functions are written in case body **/
    {
    case 1: /** case 1 execute only when user input 1 **/
        area_triangle(); /** calling the function area_triangle() **/
        break; /** stop the further execution of cases **/
    case 2: /** case 2 execute only when user input 2 **/
        system("cls"); /** clear the terminal **/
        menu(); /** calling the function menu() **/
        break; /** stops the further execution **/
    default: /** executing only when user enter wrong input **/
        triangle_menu(); /** calling the function triangle_menu again **/
    }
    return 0; /** return the integer value **/
}
