#include<stdio.h>
int main(){
   int Fajr,Zuhr,Asr,Maghrib,Isha;
   int coding,github,Quran,study;
   
   printf("\n\n~~~~~~~DAILY TRACKER~~~~~~~");
   
   printf("\n\n\n  Marking Methods : (1=Done, 0=Not)");

   printf("\n\n Fajr:");
   scanf("%d",&Fajr);

   printf("\n Zuhr:");
   scanf("%d",&Zuhr);

   printf("\n Asr:");
   scanf("%d",&Asr);

   printf("\n Maghrib:");
   scanf("%d",&Maghrib);

   printf("\n Isha:");
   scanf("%d",&Isha);

   printf("\n Coding:");
   scanf("%d",&coding);

   printf("\n GitHub:");
   scanf("%d",&github);

   printf("\n Quran:");
   scanf("%d",&Quran);

   printf("\n Study:");
   scanf("%d",&study);

   printf("\n~~~~~~~DAILY REPORT~~~~~~~");
   
   printf("\n\n\n Namaz : %s\n", (Fajr && Zuhr && Asr && Maghrib && Isha) ? "Complete" : "Incomplete");
   printf("\n Quran : %s\n", Quran ? "Done" : "Not Done");
   printf("\n Coding : %s\n", coding ? "Done" : "Not Done");
   printf("\n GitHub : %s\n", github ? "Done" : "Not Done");
   printf("\n Study : %s\n", study ? "Done" : "Not Done");

   int score=Fajr+Zuhr+Asr+Maghrib+Isha+Quran+coding+github+study;

   printf("\n Total Score : %d",score);
   
   if(score>=8){
      printf("\n Excellent Day!");
   }
   else if(score>=5 && score<8){
      printf("\n Good, But need Improvement");
   }
   else{
      printf("\n Focus more tomorrow!");
   }
return 0;
}
   
