#include<stdio.h>
int main(){
    int n ,id;
    float empl[999][3];
    printf("please enter total number of employees :");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        printf("please enter the salary of  month 1 of emp with id:%d =" , i+1);
        scanf("%f" , &empl[i][0]);
        printf("please enter the salary of month 2 of emp with id:%d ="  , i+1);
        scanf("%f" , &empl[i][1]);
        printf("please enter the salary of month 3 of emp with id:%d =" ,i+1);
        scanf("%f" , &empl[i][2]);
    }
    printf("now you can search for the employee by entering his id\n enter the id: ");
    scanf("%d" ,&id);
    printf("month 1= %f$ \nmonth 2 =%f$\nmonth 3 = %f$" ,empl[id-1][0] , empl[id-1][1] , empl[id-1][2]);
}