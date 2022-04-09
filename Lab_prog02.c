//DSA_LAB_PROGRAM_2

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

//pati = pattern string index

//compi = compare index

//stri = main index

//ansi = ans index

//repi = replace index

//finding pattern in string

void findpat(char *str, char *pat, char *rep){

    int pati,compi,repi,stri,ansi,flag=0;

    char res[100];

    pati = compi = stri = ansi = 0;

    while ( str[stri]!='\0'){

        if (str[compi] == pat[pati]){ 

            pati++;

            compi++;

            if ( pat[pati]=='\0'){

                for(repi=0; rep[repi]!='\0'; repi++){

                    res[ansi] = rep[repi];

                    ansi++;

                    flag=1;

                }

                pati=0;

                stri=compi;

            }

        }

        else{

            res[ansi] = str[stri];

            ansi++;

            stri++;

            compi = stri;

            pati=0;

        }

    }

    if(flag==0){

        printf("pattern not found\n");

    }

    else{

        res[ansi] = '\0';

        printf("\nThe resultant string is: %s\n" , res);

    }

}

int main(){

    char str[100], pat[100], rep[100];

    scanf("%s %s %s", str, pat, rep);

    findpat(str, pat, rep);

    return 0;

}
















































