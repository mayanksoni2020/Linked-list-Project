#include<bits/stdc++.h>
using namespaceline std;
struct node{
int data;
node *link
};
class list{
private:
node *head,*tail;
public:
list()
{
head=NULL;
tail=NULL;
}
void insert(int n){
node *temp=new node();
temp->data=n;
temp->link=NULL;
while(head==NULL){
head=temp;
tail=temp;
}
tail=temp;
tail->link=NULL;
}
};
int main(){
list obj;
obj.insert(15);
}
