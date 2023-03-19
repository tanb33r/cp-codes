#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main ()
{
    time_t t;

    int i, j, k, x, l, chance, n, life = 1, left, z ;
    char guess ;
    float s ;
    //the blank array is to store the random blank space numbers
    int blank[4] ;
    //The "current" variable is for storing the current condition of the current word
    char current[30] ;
    //The 3 dimensional string is to store the words for the game and in order to bring randomness, we added multiple words for each stage.
    char words[5][5][30]={"abcdefghijk11","abcdefghijk12","abcdefghijk13"
    ,"abcdefghijk14","abcdefghijk15","abcdefghijk21","abcdefghijk22","abcdefghijk23","abcdefghijk24","abcdefghijk25","abcdefghijk31","abcdefghijk32","abcdefghijk33","abcdefghijk34","abcdefghijk35","abcdefghijk41","abcdefghijk42","abcdefghijk43","abcdefghijk44","abcdefghijk45","abcdefghijk51","abcdefghijk52","abcdefghijk53","abcdefghijk54","abcdefghijk55"} ;
    //random_word = which word to use for the level
    //random is the random blank value generated
    //size is the size of the selected word
    int random_word, randoma, level, hangman=0, size ;

    printf("      :::    :::           :::        ::::    :::       ::::::::         :::   :::           :::        ::::    :::\n     :+:    :+:         :+: :+:      :+:+:   :+:      :+:    :+:       :+:+: :+:+:        :+: :+:      :+:+:   :+:\n    +:+    +:+        +:+   +:+     :+:+:+  +:+      +:+             +:+ +:+:+ +:+      +:+   +:+     :+:+:+  +:+\n   +#++:++#++       +#++:++#++:    +#+ +:+ +#+      :#:             +#+  +:+  +#+     +#++:++#++:    +#+ +:+ +#+\n  +#+    +#+       +#+     +#+    +#+  +#+#+#      +#+   +#+#      +#+       +#+     +#+     +#+    +#+  +#+#+#\n #+#    #+#       #+#     #+#    #+#   #+#+#      #+#    #+#      #+#       #+#     #+#     #+#    #+#   #+#+#\n###    ###       ###     ###    ###    ####       ########       ###       ###     ###     ###    ###    ####\n\n\n") ;

    srand((unsigned) time(&t)) ;

    for ( level = 0 ; level < 5 ;  )
    {
        left = 4 ;
        if ( level >= 1)
        {
            life = 2 ;
        }
        printf("Welcome to stage number %d ! ! !\n", level+1) ;

        random_word = rand()%(4) ;

        //This section is for creating the random set for the random word. The random positions are stored in the array named blank.
        for ( i = 0 ; i <= 3 ; i++ )
        {
            size = strlen(words[level][random_word]) ;

            A: //Here A denotes a stage of the code and the code returns to this place if any random number is repeated
            randoma = rand()%(size-1) ;
            for ( j = 0 ; j <= i ; j++ )
            {
                if ( randoma == blank[j] )
                {
                    goto A ;
                }
            }
            blank[i] = randoma ;
        }

        //This part is for creating a new string that denotes the current state of the word
        for ( k = 0 ; k < size ; k++ )
        {
            x = 0 ;
            for ( l = 0 ; l <= 3 ; l++ )
            {
                if ( k == blank[l] )
                {
                    current[k] = '?' ;
                    x = 1 ;
                }
            }
            if ( x == 0 )
            {
                current[k] = words[level][random_word][k] ;
                x = 0 ;
            }
        }
        current[k] = '\0';

        //printf("The random word for this stage(%d) is: \n",level+1) ;


        for ( chance = 8 ; chance >= 1 ;  )
        {
//printf the hangman state over here
            printf("The current status of the word is:\n") ;
            for ( z = 0 ; current[z] != '\0' ; z++ )
            {
                printf("%c  ",current[z]) ;
            }
            printf("\n") ;
            for ( z = 0 ; current[z] != '\0' ; z++ )
            {
                s=(z+1)/10 ;
                if( s > 0 )
                {
                    printf("%d ",z+1);
                }
                else
                {
                    printf("%d  ",z+1) ;
                }
            }
            printf("\n") ;
            printf("Number of tries left: %d\n",chance) ;
            C:
            printf("Please enter the position of the letter you want to guess: ");
            scanf("%d", &n) ;
            if ( current[n-1] != '?' )
            {
                printf("The place you want to try for is not blank. Try another blank spot.\n") ;
                goto C;
            }
            printf("Please guess the letter: ");
            scanf(" %c",&guess) ;
            if ( guess == words[level][random_word][n-1] )
            {
                left-- ;
                current[n-1] = guess ;
                printf("Congratulations! ! ! You have guessed the correct letter for that position.\n") ;
            }
            else
            {
                printf("Sorry! ! ! But, you have got it wrong.\n") ;
                chance-- ;
            }
            if ( left == 0 )
            {
                break ;
            }
        }
        if ( chance == 0 )
        {
            life-- ;
        }
        else
        {
            printf("Congratulations! ! ! \nYou have passed this stage.\n\n") ;
            level++ ;
        }
        if ( life == 0 )
        {
            printf("Sorry! ! ! \nGame Over! ! !") ;
            goto z;
        }
        if ( level >= 1 && chance == 0 )
        {
            printf("\nYou are given an extra chance.\n") ;
        }
        system("cls") ;

    }
    z:
    return 0;
}
