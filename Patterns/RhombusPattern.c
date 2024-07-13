/*

 * * * * * 
  * * * * *
   * * * * *
    * * * * *
     * * * * *

*/

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= rows; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}