typedef struct{
    ElemType data;
    struct LNode *next;
}LNose,*LinkList;
void look(LinkList &L,Elemtype x){
    LNode *p=L->next；
    LNode *q=NULL；
    LNod *s=L;
    while(p!=NULL){
        if(p->data==x){
            q=p;
            s->next=p->next;
            p=p->next;
            free(q);
        }
        else
            s=p;
        p=p->next;
    }
}
