2#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int ppss,cpss,win,i=1,pcnt=0,ccnt=0;
	char temp1,temp2='a';
	string name;
	cout<<"��ӭ����ʯͷ������[�汾v1.5.2]��\n\n��ע�⣺�ں�����Ϸ��������Ϻ��밴�س�����ʾ������ϣ�\n�������ϸ���Ҫ�����룬\n���򽫻��Զ��������˳���Ϸ��\n\n���������մ�����" ; 
	cin>>name;
	while(temp2=='a'){
		i=1;pcnt=0;ccnt=0;
		cout<<"����ȵ���Ϸ��ʽ��\na.������ʤ	b.�����ʤ	c.�Զ���\n";
		cin>>temp1;
		switch(temp1){
			case 'a':win=2;break;
			case 'b':win=3;break;
			case 'c':cout<<"������ʤ����ҪӮ�ûغ���:";cin>>win;break;
			default:return 0;;
		}
		if(temp1!='a'&&temp1!='b'&&temp1!='c')break;
		cout<<"��ǰ��ʽ��"<<win*2-1<<"��"<<win<<"ʤ\n\n";
		srand(time(NULL));
		while(pcnt!=win&&ccnt!=win){
			cout<<"��"<<i<<"�غ�"<<"\n�����������ʲô��\n1.ʯͷ	2.����	3.��\n"; 
			cin>>ppss;
			if(ppss!=1&&ppss!=2&&ppss!=3)return 0;
			cpss=rand()%3+1;
			cout<<"���Գ����ǣ�"; 
			if(cpss==1)cout<<"ʯͷ\n";
				else if(cpss==2)cout<<"����\n";
					else if(cpss==3)cout<<"��\n"; 
			if(ppss==1&&cpss==2){cout<<"ʤ\n\n";pcnt++;}
				else if(ppss==2&&cpss==3){cout<<"ʤ\n\n";pcnt++;}
					else if(ppss==3&&cpss==1){cout<<"ʤ\n\n";pcnt++;}
						else if(cpss==1&&ppss==2){cout<<"��\n\n";ccnt++;}
							else if(cpss==2&&ppss==3){cout<<"��\n\n";ccnt++;}
								else if(cpss==3&&ppss==1){cout<<"��\n\n";ccnt++;}
									else if(cpss==ppss)cout<<"ƽ\n\n"; 
			i++;
		}
		if(ppss!=1&&ppss!=2&&ppss!=3)break;
		cout<<"���յ�Ӯ���ǣ�";
		if(pcnt==win)cout<<name<<"\n\n";
			else cout<<"����\n\n"; 
		cout<<"�Ƿ�������һ�֣�\na.��	b.��\n�����ѡ�񡰷�����Զ��˳���\n";
		cin>>temp2;
		switch(temp2){
			case 'a':break;
			case 'b':break;
			default:return 0;
		}
		if(temp1!='a'&&temp1!='b'&&temp1!='c')break;
		if(ppss!=1&&ppss!=2&&ppss!=3)break;
	}
	return 0; 
}

