// This program folds the line from the input file provided by the user.

 #include <stdio.h> 
 #define INITIALVAL 0
 #define ARRAYSIZE 50
 #define INITIALCOUNTER 1

  void line_wrap()
  {
    int MAXLENGTH = INITIALVAL;
    char char1, char2;
    char arr[ARRAYSIZE];
    int  inputline = INITIALVAL;
    int  addline = INITIALVAL;
    int  count = INITIALCOUNTER;
    int index = INITIALVAL;
   

    while ((char1 = getchar()) != '\n') // reads the maxlength from the file and stores in a character array
    {
      arr [index] = char1;
      index++;
    }

    int i;
    for (i = 0; i < index; i++)
    MAXLENGTH = 10 * MAXLENGTH + (arr[i] - '0');
    printf("\nColumn at which to consider wrapping is : %d\n", MAXLENGTH); 
    printf("\n");
    
    while((char1 = getchar()) != EOF)                           
    {
      //checks if the character is new line character
      if (char1 == '\n')
      {
        inputline++;
        count = INITIALVAL;
      }
      //When the number of column read exceeds or equals the MAXLENGTH
      if(count >= MAXLENGTH)
      {
        putchar(char1);
        while((char2 = getchar()) !=  EOF)
        {
          if (char2 == '\n')
          {
	          inputline++;
            putchar('\n');
            count = INITIALVAL;
            break;
          }

          if (char2 ==' ')
          {
              putchar('\n');
              addline++;
              count = INITIALVAL;
              break;//breaks the while loop
          }

          else
          {
            putchar(char2);
          }

        }
      }

      else  
      {
        putchar(char1);
      }

      count++;
    }
   printf("\nTotal input lines: %d\n",inputline);
   printf("\nNumber of additional lines created: %d\n",addline);
  }

int main() //main begins

{
  line_wrap(); //calls the function line_wrap.
  return 0;//returns the integer value 0 to the main
}
