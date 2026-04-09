// birth every 7 seconds(+)
// death every 13 seconds(-)
// new immigrant every 45 seconds(+)
// initial population of 312,032,486 
// one year having 365 days

#include <stdio.h>
int main(){
    int inpop = 312032486;
    int time = 365*60*60*24;
    
    int births = time/7;
    int deaths = time/13;
    int immigrant = time/45;

    int growth = births + immigrant - deaths;

    int year1 = inpop + growth;
    int year2 = year1 + growth;
    int year3 = year2 + growth;
    int year4 = year3 + growth;
    int year5 = year4 + growth;

    printf("The population for first year is:%d\n ",year1);
    printf("The population for second year is:%d\n ",year2);
    printf("The population for third year is:%d\n ",year3);
    printf("The population for fourth year is:%d\n ",year4);
    printf("The population for fifth year is:%d\n",year5);
return 0;
}
// Biplab P. Gajurel 25024641