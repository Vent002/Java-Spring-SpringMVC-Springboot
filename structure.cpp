struct node{
	int data;
	struct node *next;
};


int main(){

	int n,x;

	struct node *head,*p;

	printf("Create List ,Enter n : ");
	scanf("%d",&n);
	head = create_number(n);//�Զ�����N����������
	printf("List: ");      //��ӡ������
	out_list(head);
	printf("x: ");        //����Ҫ���ҵ�ֵ
	scanf("%d",&x);
	p = find(head,x);

	head = delete(head,p);//����ɾ������
	printf("Result:");
	out_list(head);

	return 0;

}

struct node *create_number(int n){
	int i;
	//struct node data = 
	for(i=0;i< n;i++){
		
	}


}

//ɾ�����
struct node *delete(struct node *head,struct node *p){
	struct node *q;
	//������
	if(p == null){
		return(head);
	}
	//ɾ����һ�����
	if(p == head)
		head = head->next;

	//��Ҫɾ���Ľڵ����һ��ָ��ָ��ɾ��������һ�����ĵ�ַ
	else{
		while(q->next!=p)
			q=q->next;
		q->next = p->next;
	}
	//�ͷ�����ռ䣬�Դﵽɾ�������Ч��
	free(p);
	return(head);

}

//����Ĳ���
struct node *find(struct node *head,int m){
	//ָ��pָ�������׵�ַ
	struct node *p = head;
	while(p!=null&&p->data!=m)
		p=p->next;
	if(p==null)
		return(null);
	else 
		return(p);

}
