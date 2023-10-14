// #include <stdlib.h>
// struct node{
//   int info;
//   struct node *next;
// };
// void push(struct node **head, int val){
//   struct node *newNode = malloc(sizeof(struct node));
//   newNode->info = val;
//   newNode->next = NULL;
//   if (*head == NULL)
//     *head = newNode;
//   else{
//     struct node *lastNode = *head;
//     while (lastNode->next != NULL){
//       lastNode = lastNode->next;
//     }
//     lastNode->next = newNode;
//   }
// }
// void sort(struct node *head){
//   struct node *temp;
//   while(head!=NULL){
//    temp=head->next;
//     while(temp!=NULL){
//        if(head->info>temp->info){
//          int hold=head->info;
//          head->info=temp->info;
//          temp->info=hold;
//        }
//       temp=temp->next;
//     }
//    head=head->next;
//   }
// }
// void merge(struct node *l1,struct node *l2){
//   while(l1->next!=NULL){
//     l1=l1->next;
//   }
//   l1->next=l2; 
// }
// void print(struct node *ptr){
//   struct node *temp = ptr;
//   while (temp != NULL){
//     printf("%d ", temp->info);
//     temp = temp->next;
//   }
// }
// int main(){
//   printf("Nishant Kumar\n");
//   struct node *l1 = NULL,*l2 = NULL;
//   push(&l1,19);
//   push(&l1,18);
//   push(&l1,12);
//   push(&l1,11);
//   push(&l1,10);
//   sort(l1);
//   push(&l2,1);
//   push(&l2,21);
//   push(&l2,8);
//   push(&l2,17);
//   push(&l2,16);
//   sort(l2);
//   merge(l1,l2);
//   print(l1);
// } 




// #include <stdio.h>
// int main() {
//     int year;
//     printf("Enter the year : ");
//     scanf("%d", &year);
//     if((year % 4 == 0 && year % 400 == 0) || (year % 100 != 0)) {
//         printf("%d year is a leap year.", year);
//     }
//     else
//         printf("%d year is not a leap year.", year);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int y;

//     printf("Enter year: ");
//     scanf("%d",&y);

//     if((y % 4 == 0) && ((y % 100 != 0) || (y % 400 == 0))) {
//         printf("%d is a Leap Year", y );
//     }
//     else
//         printf("%d is not a Leap Year", y);

//     return 0;
// }




// #include <stdio.h>

// int SumOfNatural(int num) {
//     int sum = 0;
//     // Use for loop until the condition becomes false  
//     for (int i = 1; i <= num; ++i) {
//         sum = sum + i; // Adding the counter variable i to the sum value 
//     }
//     return sum;
// }

// int main() {
//     int num; // local variable
//     printf("Enter the number : ");
//     scanf("%d", &num); // Take a natural number from the user
//     int total = SumOfNatural(num); // Call the function
//     printf("Sum of the %d natural number : %d", num, total); // Printing the sum of the natural number
//     return 0;
// }
