    /*

     * C program for Tower of Hanoi

     */

     

    #include <stdio.h>

     

    void towers(int, char, char, char);

     

    int main()

    {

        int num;

     

        printf("Enter the number of disks : ");

        scanf("%d", &num);

        printf("The sequence of moves involved in the Tower of Hanoi are :\n");

        towers(num, 'A', 'C', 'B');

        return 0;

    }

    void towers(int num, char frompeg, char topeg, char auxpeg)

    {

        // Base Condition if no of disks are

        if (num == 1)

        {

            printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);

            return;

        }

     

        // Recursively calling function twice

        towers(num - 1, frompeg, auxpeg, topeg);

        printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);

        towers(num - 1, auxpeg, topeg, frompeg);

    }



//Time Complexity: O(2n)
//In each function call, we are calling the function twice so time complexity of tower of hanoi program is O(2n).

//Space Complexity: O(n)
//Space of the recursive stack is of order n, so space complexity of tower of hanoi program is O(n).
