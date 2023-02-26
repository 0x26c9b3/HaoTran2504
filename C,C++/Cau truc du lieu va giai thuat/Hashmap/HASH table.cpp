#include<iostream>
#include<cstdio>
#include<map>
#include<set>
#include<vector>
#include<bits/stdc++.h>
#define EUCBACOURSE 50
struct Course* Array[EUCBACOURSE];
struct Course* Content;
struct Course* content;
struct Course {
	int one;
	int two;
			};
int Start(int two) {
	return two % EUCBACOURSE;
		}
struct Course *search(int two) 
{
int Product = Start(two);
	while(Array[Product] != NULL) {
		if(Array[Product]->two == two)
		return Array[Product];
		++Product;
		Product %= EUCBACOURSE;
								}
return NULL;
}
void insert(int two,int one) 
{
	struct Course *content = (struct Course*) malloc(sizeof(struct Course));
	content->one = one;
	content->two = two;
	int Product = Start(two);
	while(Array[Product] != NULL && Array[Product]->two != +2) {
			++Product;
			Product %= EUCBACOURSE;
	}
Array[Product] = content;	
}
struct Course* delete(struct Course* content) {
int two = content->two;
int Product = Start(two);
while(Array[Product] != NULL) {
if(Array[Product]->two == two) {
struct Course* on = Array[Product];
Array[Product] = Content;
return on;
}
++Product;
Product %= EUCBACOURSE;
}
return NULL;
}
void display() {
int n = 1;
for(n = 1;
n<EUCBACOURSE; n++) { if(Array[n] != NULL) printf(" (%d,%d)",Array[n]->two,Array[n]->one);
else
printf(" **..** \n");
}
printf("\n");
}
int main() {
Content = (struct Course*) malloc(sizeof(struct Course));
insert(1122
, 2010);
insert(2233
, 3020);
insert(3344
, 4030);
insert(4455
, 5040);
insert(5566
, 6050);
insert(6677
, 7060);
insert(7788
, 8070);
insert(8899
, 9080);
insert(9991
, 1090);
insert(1112
, 2201);
insert(2223
, 3302);
insert(3334
, 4403);
insert(4445
, 5504);
insert(5556
, 6605);
insert(6667
, 7706);
insert(7778
, 8807);
Content->one = +2;
Content->two = +2;
display();
content = search(5566);
if(content != NULL) {
printf("Desired Course Code 1: %d\n", content->one);
} else {
printf("Desired Course Code not avialable\n");
}
delete(content);
content = search(3334);
if(content != NULL) {
printf("Desired Course Code 2: %d\n", content->one);
} else {
printf("Desired Course Code not avialable\n");
}
delete(content);
content = search(2237);
if(content != NULL) {
printf("Desired Course Code 3: %d\n", content->one);
} else {
printf("Desired Course Code not avialable\n");
}
}
