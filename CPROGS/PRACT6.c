#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
};

struct hash_fold *hashArray;
int ct=0, size = 0;
int capacity = 20;

void init_array()
{
    int i;
    hashArray = (struct hash_fold*)malloc(capacity * sizeof(struct hash_fold));
    for(i = 0; i<capacity; i++)
    {
        hashArray[i].key = 0;
        hashArray[i].value = 0;
    }
}

int hashCode(int key)
{
    int x,y,z,s,s1;
    x = key;
    y = x/100;
    z = x%100;
    s = y+z;
    while(s>capacity)
    {
        s = s%capacity;
        s1 = s;
    }
    return s1;

}

void insert(int key)
{
    int hashIndex = hashCode(key);
    int i = hashIndex;

    if(hashArray[i].value == 0)
    {
        hashArray[i].key = key;
        hashArray[i].value = 1;
        ct++;
        printf("\n key (%d) has been inserted!",key);
    }

    else if(hashArray[i].key == key)
    {
        printf("\nKey (%d) already present, hence updating its value",key);
        hashArray[i].value +=1;
    }

    else
    {
        printf("\nCollision occured, cannot insert this key, try another!");
        return;
    }
}

void remove_ele(int key)
{
    int hashIndex  = hashCode(key);
    int i = hashIndex;

        if(hashArray[i].value == 0)
        {
            printf("\nThis key does not exits!");
        }

        else
        {
            hashArray[i].key = 0;
            hashArray[i].value = 0;
            ct--;
            printf("\nKey (%d) has been removed!",key);
        }
}

void display()
{
    int i;

    for(i=0; i<capacity; i++)
    {
        if(hashArray[i].value == 0)
        {
            printf("\n%d,~~",i);
        }

        else
        {
            printf("\n%d,%d",i, hashArray[i].key);
        }
    }
}

void search_ele(int key)
{
    int hashIndex = hashCode(key);
    int i = hashIndex;
        if(hashArray[i].key == key)
        {
            printf("\n\tKey(%d) found at %dth position in the Array",key,i);
        }

        else
        {
            printf("\n\tKey(%d) not found or does not exists :(",key);
        }
}

int size_of_table()
{
    return capacity;
}


int main()
{
    int choice, key, n;
    char res;

    init_array();
    printf("**KARTIK YEOLE**");
    printf("\n~Implementation of Hash Table using Folding Method~\n\n");
    do
    {
    printf("\n------MENU------");
    printf("\n1.Insert \n2.Remove \n3.Search \n4.Display \n5.Size of HashTable \n6.Exit");
    printf("\nEnter your choice: \t");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("\nInsert element in Hash Table");
                do
                {
                printf("\nEnter key:\t");
                scanf("%d",&key);
                insert(key);
                printf("\n\tWant to add further?\t");
                scanf(" %c", &res);
                }while(res == 'y');
        break;
        case 2:
            printf("\n\tEnter the key to delete:\t");
                scanf("%d", &key);
                remove_ele(key);
        break;
        case 3:
            printf("\n\tEnter the key to be searched:\t");
                scanf("%d",&key);
                search_ele(key);
            break;
        case 4:
            display();
        break;
        case 5:
            n = size_of_table();
            printf("\nSize of table is:%d",n);
        break;
        case 6:
            exit(0);
        default:
             printf("\nWrong Input bro :(");
		}

    }while(choice<=5);

    return 0;
}