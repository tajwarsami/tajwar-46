#include<stdio.h>
#include<math.h>
struct cricketer{
      char name[60];
      long long int score[5];
    };
int main()
{
    struct cricketer cricketer1,cricketer2;
    scanf("%s",cricketer1.name);
    int k;
    double sum = 0,temp=0;
    for(k=0;k<5;k++){
        scanf("%lld",&cricketer1.score[k]);
        sum = sum + cricketer1.score[k];
    }
    sum = sum/5;
    for(k=0;k<5;k++){
        temp = temp + (sum-cricketer1.score[k])*(sum-cricketer1.score[k]);
    }
    temp = sqrt(temp/2);
    scanf("%s",cricketer2.name);
    sum = 0;
    double temp2=0;
    for(k=0;k<5;k++){
        scanf("%lld",&cricketer2.score[k]);
        sum = sum + cricketer2.score[k];
    }
    sum = sum/5;
    for(k=0;k<5;k++){
        temp2 = temp2 + (sum-cricketer2.score[k])*(sum-cricketer2.score[k]);
    }
    temp2 = sqrt(temp2/2);
    if(temp>temp2){
        printf("More consistant player is %s",cricketer2.name,temp2,temp);
    }
    else if(temp<temp2){
        printf("More consistant player is %s",cricketer1.name,temp,temp2);
    }
    else{
        printf("Both cricketer are equally consistant");
    }

    return 0;
}
