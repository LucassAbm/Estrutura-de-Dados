#include <stdio.h>
int main(){
int vote1, vote2, vote3, vote4, total;
float percennull = 0, percenwhite = 0, null, white;
char name1[15], name2[15], name3[15], name4[15];

printf("\n Type the name of the first candidate and the total of votes: ");
scanf("%s %d", &name1, &vote1);


printf("\n Type the name of the second candidate and the total of votes: ");
scanf("%s %d", &name2, &vote2);


printf("\n Type the name of the third candidate and the total of votes: ");
scanf("%s %d", &name3, &vote3);


printf("\n Type the name of the fourth candidate and the total of votes: ");
scanf("%s %d", &name4, &vote4);


printf("\n Type how many null votes: ");
scanf("%f", &null);

printf("\n Type how many white votes: ");
scanf("%f", &white);

total = vote1+vote2+vote3+vote4;
percennull = (null * 0.01)*total;
percenwhite = (white * 0.01)*total;

if(vote1 > vote2 && vote1 > vote3 && vote1 > vote4){
printf("\n THE FIRST CANDIDATE: %s WAS ELECTED!! CONGRATULATIONS!",name1);
} else if (vote2 > vote1 && vote2 > vote3 && vote2 > vote4){
printf("\n THE SECOND CANDIDATE: %s WAS ELECTED!! CONGRATULATIONS!",name2);
} else if (vote3 > vote1 && vote3 > vote2 && vote3 > vote4){
printf("\n THE THIRD CANDIDATE: %s WAS ELECTED!! CONGRATULATIONS!",name3);
} else if (vote4 > vote1 && vote4 > vote2 && vote4 > vote3){
printf("\n THE FOURTH CANDIDATE: %s WAS ELECTED!! CONGRATULATIONS!",name4);
}

printf("Null votes: %.2f and White votes: %.2f .",percennull,percenwhite);

return 0;
}
