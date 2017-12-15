#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
 * 課題：リストを作成・閲覧・削除する関数を作成したが、閲覧する関数において虫食いが発生してしまった。
 * この虫食い部分を埋め、正しく動作するようにしなさい。
 */

struct LinkedList{
	struct LinkedList *next;
	char *name;
	int serialnumber;
};

int getrandomnumber(void){
	printf("[+] Get random value(2~10)\n");
	return rand() % 10 + 1;
}

int getserialnumber(void){
	printf("[+] Get serial number\n");
	return rand() % 1000000;
}

void setseed(void){
	printf("[+] Set time seed...\n");
	srand(time(NULL));
	return;
}

void createLinkedList(int n, struct LinkedList *head){
	int i;
	char buf[100];
	struct LinkedList *ptr,*prev;
	
	prev = head;
	printf("[+] Enter the name (without space) %d time\n",n);
	for(i = 0; i < n; i++){
		printf("[+] Number %d Name: ",i);
		ptr = (struct LinkedList *)malloc(sizeof(struct LinkedList));
		scanf("%s",buf);
		ptr->name = (char *)malloc(sizeof(buf));
		strcpy(ptr->name,buf);
		ptr->serialnumber = getserialnumber();
		prev->next = ptr;
		prev = ptr;
	}
	ptr->next = NULL;	
}	

void viewLinkedList(struct LinkedList *head){
	struct LinkedList *ptr;

	printf("[+] Now View The list\n");

	ptr = head;
	int count = 1;
	while(ptr != NULL){
		printf("[*] List %d Name is %s, serial is %d.\n",count,ptr->name,ptr->serialnumber);
		/*here*/ptr = ptr->next;/*here*/
		count++;
	}
}

void freeLinkedList(struct LinkedList *head){
	struct LinkedList *ptr,*next;
	
	printf("[+] Now free the list\n");
	
	ptr = head->next;
	
	while(ptr != NULL){
		next = ptr->next;
		free(ptr->name);
		free(ptr);
		ptr = next;
	}
}

int main(void){
	int n;
	
	setseed();
	n = getrandomnumber();
	struct LinkedList head;
	head.next = NULL;
	head.name = (char *)malloc(sizeof(char)* 12 + 1);
	strcpy(head.name,"THIS_IS_HEAD");
	head.serialnumber = 123456789;

	createLinkedList(n,&head);
	viewLinkedList(&head);
	freeLinkedList(&head);
	return 0;
}
