#include<stdio.h>
#include<math.h>
struct cricketer{
      char name[50];
      long long int score[5];
    };
int main()
{
    struct cricketer cricketer1,cricketer2;
    scanf("%s",cricketer1.name);
    int i;
    double sum = 0,temp=0;
    for(i=0;i<5;i++){
        scanf("%lld",&cricketer1.score[i]);
        sum = sum + cricketer1.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp = temp + (sum-cricketer1.score[i])*(sum-cricketer1.score[i]);
    }
    temp = sqrt(temp/2);
    scanf("%s",cricketer2.name);
    sum = 0;
    double temp2=0;
    for(i=0;i<5;i++){
        scanf("%lld",&cricketer2.score[i]);
        sum = sum + cricketer2.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp2 = temp2 + (sum-cricketer2.score[i])*(sum-cricketer2.score[i]);
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
