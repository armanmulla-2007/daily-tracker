#include<stdio.h>
#define SIZE 9

void takeInput(int task[], char *name[]){
   for(int i=0;i<SIZE;i++){
      do{
         printf("\n%s(0 or 1):",name[i]);
         scanf("%d",&task[i]);
      }while(task[i]!=0 && task[i]!=1);
   }
}

int calculateScore(int task[]){
   int score = 0;
    for(int i=0;i<SIZE;i++){
       score +=task[i];
    }
   return score;
}

int checkNamaz(int task[]){
    for(int i=0;i<5;i++){
        if(task[i]==0){
            return 0;
        }
    }
    return 1;
}

void displayReport(int task[], char *name[], int score){
     printf("\n\n~~~~~~ DAILY REPORT ~~~~~~");

      printf("\nNamaz: %s", checkNamaz(task) ? "Complete" : "Incomplete");

    for(int i = 5; i < SIZE; i++) {
        printf("\n%s: %s", name[i], task[i] ? "Done" : "Not Done");
    }

    printf("\nTotal Score: %d", score);
}

void displayProgress(int score) {
    printf("\n\n~~~~~~ DAILY PROGRESS ~~~~~~");

    if(score >= 8) {
        printf("\nExcellent Day 🔥");
    }
    else if(score > 5) {
        printf("\nGood, But Need Improvement 👍");
    }
    else {
        printf("\nFocus More Tomorrow 💪");
    }
}

void saveToFile(int score) {
    FILE *fp = fopen("report.txt", "a");

    if(fp == NULL) {
        printf("\nError saving file!");
        return;
    }

    fprintf(fp, "Score: %d\n", score);
    fclose(fp);
  }

  int main() {
    int task[SIZE];
    char *name[] = {"Fajr","Zuhr","Asr","Maghrib","Isha","Coding","GitHub","Quran","Study"};

    printf("\n~~~~~~ DAILY TRACKER ~~~~~~");
    printf("\nMarking Method: 1 = Done, 0 = Not Done\n");

    takeInput(task, name);

    int score = calculateScore(task);

    displayReport(task, name, score);
    displayProgress(score);

    saveToFile(score);

    return 0;
}