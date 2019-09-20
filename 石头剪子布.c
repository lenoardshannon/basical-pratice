package array;

import java.util.Scanner;

public class youxi1 {

	public static void main(String[] args) {
		Scanner console = new Scanner(System.in);
		System.out.println("游戏开始");

		int sum=0;//记总分变量sum
		for(int i=0;i<10;i++){
			int size = console.nextInt();//用户输入的数
			switch(size){
			case 0:
				System.out.println("石头");
				break;
			case 1:
				System.out.println("剪刀");
				break;
			case 2:
				System.out.println("布");
				break;
			default:
				System.out.println("输入错误");
				break;
			}

			int answer = (int)(Math.random()*10);//随机数
			int n = answer%3;//随机数余3=0、1、2三个数
			switch(n){
			case 0:
				System.out.println("石头");
				break;
			case 1:
				System.out.println("剪刀");
				break;
			case 2:
				System.out.println("布");
				break;
			}

			if(size==n){
				System.out.println("平局"+"》目前得分是"+sum+"分");
			}else if(size==1 && n==0){
				sum -= 10;
				System.out.println("你输了,减10分"+"》目前得分是"+sum+"分");
			}else if(size==2 && n==1){
				sum -= 10;
				System.out.println("你输了,减10分"+"》目前得分是"+sum+"分");
			}else if(size==0 && n==2){
				sum -= 10;
				System.out.println("你输了,减10分"+"》目前得分是"+sum+"分");
			}else if(size==0 && n==1){
				sum += 10;
				System.out.println("你输了,加10分"+"》目前得分是"+sum+"分");
			}else if(size==1 && n==2){
				sum += 10;
				System.out.println("你输了,加10分"+"》目前得分是"+sum+"分");
			}else if(size==2 && n==0){
				sum += 10;
				System.out.println("你输了,加10分"+"》目前得分是"+sum+"分");
			}

		}

		System.out.println("总分:"+sum+"分");
	}

}
