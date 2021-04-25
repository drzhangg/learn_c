#include <stdio.h>

int main(){
    struct {
        char *name;
        int num;
        int age;
        char group;
        float score;
    }stu1 = {"Jerry",12,25,'B',60.1}, *pstu = &stu1;
    
    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.2f\n",(*pstu).name,(*pstu).num,(*pstu).age,(*pstu).group,(*pstu).score);
    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.2f\n",pstu->name,pstu->num,pstu->age,pstu->group,pstu->score);
   return 0;

} 
