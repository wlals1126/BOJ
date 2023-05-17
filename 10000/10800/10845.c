#include <stdio.h>
#include <string.h>
int queue[100001];
int queue_size = 0;

void push(int push_data) {
	queue[queue_size] = push_data;
	queue_size += 1;
}
int empty() {
	if(queue_size == 0)
		return 1;
	
	return 0;
}
int pop() {
	if(empty())
		return -1;
	queue_size -= 1;
	return queue[0];
}
int front() {
	if(empty()) {
		return -1;
	}
	return queue[queue_size - queue_size];
}
int back() {
	if(empty())
		return -1;
	return queue[queue_size-1];
}

int main() {
	int n = 0, push_data = 0;
	char com[5] = {0,};
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s", &com);
		
		if(!strcmp(com, "push")) {
			scanf("%d", &push_data);
			push(push_data);
		}
		if(!strcmp(com, "pop")) {
			printf("%d\n", pop());
			for(int i = 0; i < queue_size; i++)
				queue[i] = queue[i+1];
		}
		if(!strcmp(com, "empty")) {
			printf("%d\n", empty());
		}
		if(!strcmp(com, "size")) {
			printf("%d\n", queue_size);
		}
		if(!strcmp(com, "front")) {
			printf("%d\n", front());
		}
		if(!strcmp(com, "back")) {
			printf("%d\n", back());
		}
	}
	return 0;
}