/*CH-230-A
a7 p1.h
Aung Tun
atun@jacobs-university.de
*/

struct list
{
    int info;
    struct list *next;
    
};

struct list *push_back(struct list *my_list,int value);
struct list *push_front(struct list *my_list, int value);
struct list *remove_ele(struct list *my_list);
void print_list(struct list *my_list);
void dispose_list(struct list *my_list);
