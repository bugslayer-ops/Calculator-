#define pie 3.14 /** defining the macros **/
int area_circle(void); /** globally defined function **/
int circumference_circle(void); /** globally defined function **/
int Exit(void); /** Exit function for exit the tool **/
int area_triangle(void); /** globally defined function **/

int area_circle() /** user defined function for area of circle **/
{
    system("cls"); /** used for clear the terminal **/
    int area,radius; /** declaring the variables **/
    printf("Enter Radius: "); /** msg print on terminal **/
    scanf("%d",&radius); /** used to take input from user as integer **/
    area = pie*radius*radius; /** used for calculation **/
    printf("Area of Circle is: %d",area); /** this will print the result of area of circle **/
    return 1; /** return integer value **/
}
int circumference_circle() /** user defined function for circumference of circle **/
{
    int circumference,radius; /** declaring the circumference and radius **/
    printf("Enter Radius: "); /** msg print on terminal **/
    scanf("%d",&radius); /** this is used for take input from integer **/
    circumference = 2*pie*radius; /** used to calculate the circumference of circle **/
    printf("Circumference of Circle is: %d",circumference); /** this will print the result for circumference of circle **/
    return 1; /** return integer value **/
}
int area_triangle() /** user defined function for area of triangle **/
{
    int base,height; /** declaring the integer variable **/
    float area; /** declaring the float integer variable **/
    printf("Enter Base: "); /** msg printed on terminal **/
    scanf("%d",&base); /** take input from user as integer **/
    printf("Enter Height: "); /** msg printed on terminal **/
    scanf("%d",&height); /** takes input from user as integer **/
    area = 1/2*base*height; /** calculating the area of triangle **/
    printf("Area of Triangle is: %f\n",area); /** print the output on the terminal**/
    return 1; /** return integer **/
}
int Exit() /** user defined exit function for exit the tool **/
{
   char ch; /** declaring the character variable **/
   printf("Would you like to exit..!(Y/N): "); /** print msg on terminal **/
   fflush(stdin); /** make input buffer file available for scanf() function **/
   scanf("%c",&ch); /** take input from user as character **/
   if(ch == 'Y'||ch == 'y') /** this block will execute if user input Y or y **/
   {
       system("cls"); /** clear the terminal **/
       printf("Exit Successfully..!"); /** print this msg before exit the tool **/
       exit(0); /** exit function is used here for exit the tool **/
   }
   if(ch == 'N'||ch == 'n')  /** this block will execute if user input N or n **/
   {
       system("cls"); /** clear the terminal **/
       main(); /** recalling the main function **/ /** this gives warning: implicit declaration of function 'main' **/
   }
   return 0; /** return the value zero **/
}
