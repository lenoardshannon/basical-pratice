package array;

import java.util.Scanner;

public class youxi1 {

	public static void main(String[] args) {
		Scanner console = new Scanner(System.in);
		System.out.println("��Ϸ��ʼ");

		int sum=0;//���ֱܷ���sum
		for(int i=0;i<10;i++){
			int size = console.nextInt();//�û��������
			switch(size){
			case 0:
				System.out.println("ʯͷ");
				break;
			case 1:
				System.out.println("����");
				break;
			case 2:
				System.out.println("��");
				break;
			default:
				System.out.println("�������");
				break;
			}

			int answer = (int)(Math.random()*10);//�����
			int n = answer%3;//�������3=0��1��2������
			switch(n){
			case 0:
				System.out.println("ʯͷ");
				break;
			case 1:
				System.out.println("����");
				break;
			case 2:
				System.out.println("��");
				break;
			}

			if(size==n){
				System.out.println("ƽ��"+"��Ŀǰ�÷���"+sum+"��");
			}else if(size==1 && n==0){
				sum -= 10;
				System.out.println("������,��10��"+"��Ŀǰ�÷���"+sum+"��");
			}else if(size==2 && n==1){
				sum -= 10;
				System.out.println("������,��10��"+"��Ŀǰ�÷���"+sum+"��");
			}else if(size==0 && n==2){
				sum -= 10;
				System.out.println("������,��10��"+"��Ŀǰ�÷���"+sum+"��");
			}else if(size==0 && n==1){
				sum += 10;
				System.out.println("������,��10��"+"��Ŀǰ�÷���"+sum+"��");
			}else if(size==1 && n==2){
				sum += 10;
				System.out.println("������,��10��"+"��Ŀǰ�÷���"+sum+"��");
			}else if(size==2 && n==0){
				sum += 10;
				System.out.println("������,��10��"+"��Ŀǰ�÷���"+sum+"��");
			}

		}

		System.out.println("�ܷ�:"+sum+"��");
	}

}
