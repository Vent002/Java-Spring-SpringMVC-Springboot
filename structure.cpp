#include<stdio.h>
#include<string.h>

struct student{
	int num;
	char name[20];
	char sex;
	float score;
}stu1,stu2;

struct student1{
	int num;//ѧ��
	char name[20];//����
	char sex[4];//�Ա�
	float score;//�ɼ�
};

struct teacher{
	int teacher_num;
	char teacher_name[32];
	char teacher_sex[4];
	int teacher_rank;
	float teacher_salary;
};

/*
int main(){
	struct student stu = {2016,"����","��",79};

	struct teacher tea = {1110,"����","��",002,6434.89};
	
	printf("ѧ����Ϣ��\n");
	printf("Name:%s\n",stu.name);
	printf("Sex:%s\n",stu.sex);
	printf("Score:%d",stu.score);
	printf("\n\n\n");
	printf("��ʦ��Ϣ��\n");
	printf("Name:%s\n",tea.teacher_name);
	printf("Sex:%s\n",tea.teacher_sex);


	
	return 0;

}

//�����߷�
int main(){

	printf("student info 1:\n");
	scanf("%d%s%s%f", &stu1.num , stu1.name , stu1.sex , &stu1.score);
	
	printf("student info 2:\n");
	scanf("%d%s%s%f", &stu2.num , stu2.name , stu2.sex , &stu2.score);

	if(stu1.score >= stu2.score){
		printf("the best student��\n Name:%s\tScore:%.2f\n",stu1.name,stu1.score);
	}else
		printf("the best student��\n Name:%s\tScore:%.2f\n",stu2.name,stu2.score);

	return 0;

}

//�ṹ������

int main(){
	struct student stu[5];
	cout<<"����ѧ����Ϣ\n\n\n";
	for(int i=0;i<5;i++){
		cout<<"�����%d��ѧ����Ϣ",i);
		scanf("%d%s%s%f",&stu[i].num,stu[i].name,stu[i].sex,&stu[i].score);
	}




 return 0;
}


//�ṹ��ָ��
//ָ��ṹ�����ݵ�ָ�����

int main(){

	struct student1 stu,*p;
	p=&stu;
	p->num=1;
	strcpy(p->name,"beijing");
	p->sex='��';
	p->score=991;

	printf("%d%s%s%f",stu.num,stu.name,p->sex,p->score);

	return 0;
}
*/

struct student{
	int stu_num;
	char stu_name[20];
	char stu_sex[4];
	int stu_sorce;
};

int main(){

	struct student *next,*p;
	



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

