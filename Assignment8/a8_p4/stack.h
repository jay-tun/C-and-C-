/*CH-230-A
a8_p4.c
Aung Tun
atun@jacobs-university.de
*/

struct stack
{
    unsigned int count;
    int arr[12];
};

void push(struct stack *list,int n);
void pop(struct stack *list);
void empty(struct stack *list);
void isEmpty(struct stack *list);