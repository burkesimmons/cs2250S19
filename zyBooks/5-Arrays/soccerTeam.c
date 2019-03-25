/*
 * =====================================================================================
 *
 *       Filename:  soccerTeam.c
 *
 *    Description:  Soccer team roster
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:34:33 PM
 *       Revision:  none
 *       Compiler:  gcc soccerTeam.c -o soccerTeam.out -lm
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#define SOC_PLAYER 5

int main(void) {

    int jerseyNum[100], rating[10];
    int i, jerseyCheck, ratingCheck, jerseyReplace, ratingNew;
    char choice;

  for(i = 0; i < SOC_PLAYER; i++)
  {
    printf("Enter player %d's jersey number:\n", i+1);
    scanf("%d", &jerseyNum[i]);
    printf("Enter player %d's rating:\n\n", i+1);
    scanf("%d", &rating[i]);
  }

  printf("ROSTER\n");
  for(i = 0; i < SOC_PLAYER; i++)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseyNum[i], rating[i]);
    }
  printf("\n");

  do                                            // beginning of do while
  {
      printf("MENU\n");
      printf("u - Update player rating\n");
      printf ( "a - Output players above a rating\n" );
	  printf ( "r - Replace player\n" );
	  printf ( "o - Output roster\n" );
      printf ( "q - Quit\n" );
	  printf ( "\nChoose an option:\n" );
      scanf ( " %c", &choice );


	  switch ( choice ) {
		  case 'u' :

			printf ( "Enter a jersey number:\n" );
            scanf ( "%d", &jerseyCheck );

            for ( i = 0; i < SOC_PLAYER; i++ ) {
                if(jerseyCheck == jerseyNum[i])
                {
                    printf("Enter a new rating for the player:\n");
                    scanf("%d", &ratingNew);
                    rating[i] = ratingNew;
                }
            }
			  break;

		  case 'a' :
              printf("Enter a rating:\n");
              scanf ( "%d", &ratingCheck );
              printf("ABOVE %d\n", ratingCheck);
              for ( i = 0; i < SOC_PLAYER; i++ ) {
                  if(rating[i] > ratingCheck)
                  {
                      printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseyNum[i], rating[i]);
                  }

              }
              printf("\n");
			  break;

		  case 'r' :

			printf ( "Enter a jersey number:\n" );
            scanf ( "%d", &jerseyCheck );

            for ( i = 0; i < SOC_PLAYER; i++ ) {
                if(jerseyCheck == jerseyNum[i])
                {
                    printf("Enter a new jersey number:\n");
                    scanf("%d", &jerseyReplace);
                    jerseyNum[i] = jerseyReplace;
                    printf("Enter a rating for the new player:\n");
                    scanf("%d", &ratingNew);
                    rating[i] = ratingNew;
                }
            }
			  break;

		  case 'o' :
			  printf("ROSTER\n");
			  for(i = 0; i < SOC_PLAYER; i++)
				{
					printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseyNum[i], rating[i]);
				}
              printf("\n");
			  break;

		  case 'q' :
			  break;

		  default:
			  printf ( "Unsupported\n" );
			  break;
	  }				/* -----  end switch  ----- */

  } while(choice != 'q'); // End of do while

   return 0;
}

