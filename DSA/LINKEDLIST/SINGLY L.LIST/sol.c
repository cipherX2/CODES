// {
//     struct node *p, *c;
//     if (head != NULL)
//     {
//         p = head;
//         c = head->next;
//         head = head->next;
//         p->next = NULL;
//         while (head != NULL)
//         {

//             c->next = p;
//             p = c;
//             head = head->next;
//             c = head;
//         }
//         head = p;
//     }
// }

// void sort()
// {
//     struct node *temp1, *temp2;
//     int temp;
//     // printf("\n 1");
//     temp1 = head;
//     while (temp1 != NULL)
//     {
//         // printf("\n 2");
//         temp2 = head->next;
//         while (temp2 != NULL)
//         {
//             if (temp1->data > temp2->data)
//             {
//                 // printf("\n 3");
//                 temp = temp1->data;
//                 temp1->data = temp2->data;
//                 temp2->data = temp;
//             }
//             // printf("\n 4");
//             // temp1 = temp2;
//             temp2 = temp2->next;
//         }
//         // printf("\n 5");
//         temp1 = temp1->next;
//     }
// }