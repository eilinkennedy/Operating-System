
#include<stdio.h>
#include<stdlib.h>
int mutex=1;
int full=0;
int empty=5,x=0;
int wait(int s){
return(--s);}
int signal(int s){
return(++s);}

void producer(){
    mutex=wait(mutex);
    full=signal(full);
    empty=wait(empty);
    x++;
    printf("\nProducer produces""item%d",x);
    mutex=signal(mutex);
}
void consumer(){
    mutex=wait(mutex);
    full=wait(full);
    empty=signal(empty);
    printf("\nConsumer consumes""item%d",x);
    x--;
    mutex=signal(mutex);
}
int main(){
    int ch;
    printf("\n1.Press 1 for Producer"
            "\n2.Press 2 for Consumer"
            "\n3.Press 3 for exit");
            while(1){
                printf("\nEnter your choice: ");
                scanf("%d",&ch);
                switch(ch){
                    case 1:if((mutex==1)&&(empty!=0)){
                        producer();
                    }
                    else{
                        printf("Buffer is full");
                    }
                    break;
                    case 2:if((mutex==1)&&(full!=0)){
                        consumer();
                }
                else{
                    printf("Buffer is empty");
                }
                break;
                case 3:exit(0);
                break;
            }
}
return 0;
}
	

