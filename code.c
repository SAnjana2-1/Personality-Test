#include<stdio.h>
int main()
{
    int z=0;
    do{
        char stop,name[30], ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15,ans16,ans17,ans18,ans19,ans20,ans21,ans22,ans23,ans24;
             int r = 0, s=0,e=0,c=0,a=0,i=0;
     float rp = 0,sp=0,ep=0,cp=0,ap=0,ip=0;
     system("pause");
     system("cls");
     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf(" \tPersonality tests are very useful because they show individual\n strengths that enable progessionals to determine where their talents\n are best served. When individuals have a greater knowledge of their\n personality, they can discover careers and places that match their personality. \n\n   ");
      system("pause");
       system("cls");   
     printf("Enter your name :   ");
     scanf("%s",name);
     printf(" \n\n\tEnter 'y' if you are agree and 'n' if you are disagree with the statements that describes some kind of tasks. \n\n ");
     system("pause");
     system("cls");
     printf(" \t  Do you like meeting new people?                             :    ");
     scanf("%s",&ans1);
     switch (ans1){
          case 'y': s++;
     }
     printf(" \t  Would you like to study the structure of the human body     :    ");
     scanf("%s",&ans2);
     switch (ans2){
          case 'y': i++;
     }
     printf(" \t  Would you like to Conduct a musical choir?                  :    ");
     scanf("%s",&ans3);
     switch (ans3){
          case 'y': a++;
     }
     printf(" \t  like to Give career guidance to people ?                    :    ");
     scanf("%s",&ans4);
     switch (ans4){
          case 'y': s++;
     }
      printf(" \t  Are you a good decision-maker?                              :    ");
     scanf("%s",&ans5);
     switch (ans5){
          case 'y': e++;
     }
      printf(" \t  Generate the monthly payroll checks for an office           :    ");
     scanf("%s",&ans6);
     switch (ans6){
          case 'y': c++;
     }
     printf(" \t  Like to watch mystery and detective movies?                 :    ");
     scanf("%s",&ans7);
     switch (ans7){
          case 'y': i++;
     }
     printf(" \t  Would you like to Study animal behavior                     :    ");
     scanf("%s",&ans8);
     switch (ans8){
          case 'y': i++;
     }
     printf(" \t  Would you like to Direct a play                             :    ");
     scanf("%s",&ans9);
     switch (ans9){
          case 'y': a++;
     }
     printf(" \t  Do volunteer work at a non-profit organization              :    ");
     scanf("%s",&ans10);
     switch (ans10){
          case 'y': s++;
     }
     printf(" \t  do you like solving complex problems?                       :    ");
     scanf("%s",&ans11);
     switch (ans11){
          case 'y': r++;
     }
      printf(" \t  Have business setting goals and can persuade people         :    ");
     scanf("%s",&ans12);
     switch (ans12){
          case 'y': e++;
     }
 


    printf(" \t  Work on an offshore oil-drilling rig                        :    ");
     scanf("%s",&ans13);
     switch (ans13){
          case 'y': r++;
     }
     printf(" \t  Do you like to manage data and records?                     :    ");
     scanf("%s",&ans14);
     switch (ans14){
          case 'y': c++;
     }
    printf(" \t  Design artwork for magazines                                :    ");
     scanf("%s",&ans15);
     switch (ans15){
          case 'y': a++;
     }
      printf(" \t  Help people who have problems with alcohol                  :    ");
     scanf("%s",&ans16);
     switch (ans16){
          case 'y': s++;
     }
      printf(" \t  Manage a department within a large company                  :    ");
     scanf("%s",&ans17);
     switch (ans17){
          case 'y': e++;
     }



      printf(" \t  Use computer to generate customer bills                     :    ");
     scanf("%s",&ans18);
     switch (ans18){
          case 'y': c++;
     }
     printf(" \t  Like to keep an practical approach rather than imaginative  :    ");
     scanf("%s",&ans19);
     switch (ans19){
          case 'y': r++;
     }
     printf(" \t  Develop a new medical treatment or procedure                :    ");
     scanf("%s",&ans20);
     switch (ans20){
          case 'y': i++;
     }
     printf(" \t  Do you like to sing or write songs ?                        :    ");
     scanf("%s",&ans21);
     switch (ans21){
          case 'y': a++;
     }
     printf(" \t  Are you a nature lover?                                     :    ");
     scanf("%s",&ans22);
     switch (ans22){
          case 'y': r++;
     }
      printf(" \t  Do you feel you have leadership qualities?                  :    ");
     scanf("%s",&ans23);
     switch (ans23){
          case 'y': e++;
     }
      printf(" \t  Do you like to organize things/work in order?               :    ");
     scanf("%s",&ans24);
     switch (ans24){
          case 'y': c++;
     }
      rp = (r * 100)/4 ;
      sp = (s * 100)/4 ;
      ep = (e * 100)/4 ;
      cp = (c * 100)/4 ;
      ap = (a * 100)/4 ;
      ip = (i * 100)/4;
       printf("\n");
     printf("Realistic : %d likes \n",r); 
     printf("Investigative : %d likes   \n",i);
     printf("Artistic : %d likes \n",a);
     printf("Social : %d likes  \n",s);
     printf("Enterprising : %d likes  \n",e);
     printf("Conventional : %d likes \n\n\n",c);
     printf("\n");
     printf("Realistic : %f Percent \n",rp);
     printf("Investigative : %f Percent  \n",ip);
     printf("Artistic : %f Percent \n",ap);
     printf("Social : %f Percent  \n",sp);
     printf("Enterprising : %f Percent  \n",ep);
     printf("Conventional : %f Percent \n\n\n",cp);
     if(rp>ip && rp>ap && rp>sp && rp>ep && rp>cp){
  


   printf(" You are more likely a \"Realistic person\"\nLike to work with hands and focus on things in the physical world & use physical skills.\nLike to repair and work with tools, machines, or animals; outdoor work is often preferred. Prefer problems that are concrete rather than abstract; want practical solutions that can be acted out.\n\n characteristics: frank, nature lover ,curious ,concrete ,selfcontrolled, ambitious, persistent and athletic.");
     }
else if(ip>ap && ip>sp && ip>ep && ip>cp){
          printf("You more likely have an \"Investigative personality \"\nTend to focus on ideas. Like to collect and analyze data and information of all kinds. Curious and tend to be creative and original. Task oriented and motivated by analyzing and researching.\n Tend to prefer loosely structured situations with minimal rules or regulations. Prefer to think through rather than act out problems.\n\n characteristics: broadminded, logical, curious, analytical .");
     }
     else if(ap>sp && ap>ep && ap>cp){
          printf(" You more likely have an \"Artistic personality\"\nCreative and tend to focus on self-expression through all kinds of mediums: materials,\n music and words, as well as systems and programs. Able to see possibilities in various settings and are not afraid to experiment with their ideas. Like variety and tend\n to feel cramped in structured situations. Deal with problems in intuitive, expressive, and independent ways. Tend to be adverse to rules.\n\n characteristics: innovative ,emotional,  expressive, introspective, sensitive , and idealistic.");
     }
  else if(sp>ep && sp>cp){
          printf(" You are more likely a \"Social person\".Concerned with people and their welfare. Tend to have well developed communications skills and like to help,\n encourage, counsel, guide, train, or facilitate others. Enjoy working with groups or individuals, using empathy and an ability to identify and solve problems.\n Value cooperation and consensus. Deal with problems through feelings. Flexible approach to problems.\n\n Characteristics: humanistic, verbal, interpersonal and responsible.");
      }
      else if(ep>cp){
          printf("You more likely have \"Enterprising personality\".Work with and through people, providing leadership and delegating responsibilities for\n organizational and/or financial gain. Goal-oriented and want to see results. Tend to function with a high degree of energy. Prefer business settings, and often want\n social events to have a purpose beyond socializing. Attack problems with leadership skills. You are a Good Decision-Maker.\n\n characteristics: persuasive, confident, demonstrate leadership, interest in power/status.");
      }


     else{ printf(" You are more likely a \"Conventional person\".Like to pay a lot of attention to detail and organization, and prefer to work with data,\nparticularly in the numerical, statistical, and record-keeping realm. Have a high sense of responsibility, follow the rules, and want to know precisely what is expected.\nPrefer clearly defined, practical problems and to solve problems by applying rules.Oriented to carrying out tasks initiated by others.\n\n characteristics: conscientious, efficient, concern for rules and regulation, orderley.");
     }


      printf("\n\n\t\t Enter 0 for exit form program \n\t\t Enter c for continue \n\t\t");
    scanf("%s",&stop);
    if(stop == '0'){
 break;
    }
}
while(  z == 0);
     return 0;
}
