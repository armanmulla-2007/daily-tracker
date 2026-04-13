#include<stdio.h>
int main(){
  int task[9];
  char *name[]={"Fajr","Zuhr","Asr","Maghrib","Isha","coding","github","Quran","study"};

  int score=0;

  printf("\n ~~~~~~DAILY TRACKEER~~~~~~");
  printf("\n Marking Methods : 1=Done, 0=Not Done");

  for(int i=0;i<9;i++){
     printf("\n%s:",name[i]);
     scanf("%d",&task[i]);
     score+=task[i];
  }

  printf("\n ~~~~~~DAILY REPORT~~~~~~");
  printf("\n Namaz:%s",(task[0] && task[1] && task[2] && task[3] && task[4]) ? "Complete" : "Incomplete");

  for(int i=5;i<9;i++){
    printf("\n %s:%s",name[i],task[i] ? "Done" : "Not Done");
  }

  printf("\n total score:%d",score);

  printf("\n ~~~~~~DAILY PROGRESS~~~~~~");
  printf("\n %s",(score>=8) ? "Excellent day":
                 (score<=8 && score>5) ? "Good, But need Improvement":
                                         "Focus More Tomorrow");
  return 0;
}

   
  

