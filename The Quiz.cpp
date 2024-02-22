#include <stdio.h>
int fir(){
		printf("1.What is the Expansion of Iot?\n");
		printf("1)Idea of thought\n");
		printf("2)Internet of Thoughts\n");
		printf("3)Internet of Things\n");
		printf("4)International of Trade\n");}
int sec(){
		printf("2.Who coined the term 'Internet of Things'?\n");
		printf("1)Kevin Aston\n");
		printf("2)Alexanfer Graham bell\n");
		printf("3)Edward Jameson\n");
		printf("4)Charles Babbage\n");
}
int thi(){
		printf("3.Which layer is used for wireless connection in IoT devices?\n");
		printf("1)Transport Layer\n");
		printf("2)Networking Layer\n");
		printf("3)Application Layer\n");
		printf("4)Data link Layer\n");
}
int fo(){
		printf("4.IoT-A stands for?\n");
		printf("1)Internet of Things Area\n");
		printf("2) Industrial of things Architecture\n");
		printf("3) Internet of Things Address\n");
		printf("4)Internet of Things Architecture\n");
}
int fi(){
		printf("5.Identify the java extension file in IoT.\n");
		printf("1).exe\n");
		printf("2).py\n");
		printf("3).jar\n");
		printf("4).c\n");
}
int se()
{
		printf("7.What is the full form of 'AI'?\n");
		printf("1)Artificial Intelligence \n");
		printf("2)Artificially Intelligent\n");
		printf("3)Artificially Intelligence\n");
		printf("4)Advanced Intelligence\n");
}
int si()
{
		printf("6.Total types of voice communications in IoT environment is?\n");
		printf("1)2\n");
		printf("2)4\n");
		printf("3)3\n");
		printf("4)6\n");
}
int ei()
{
		printf("8.Which of the following is considered as a subset of AI?\n");
		printf("1)Machine Learning\n");
		printf("2)Virtual Reality\n");
		printf("3)Robotics\n");
		printf("4)All of the above\n");
}
int ni()
{
		printf("9.Which programming language is commonly used in AI development?\n");
		printf("1)Javascript\n");
		printf("2)Python\n");
		printf("3)C++\n");
		printf("4)All of the above\n");
}
int te()
{
		printf("10.Which type of machine learning algorithm learns by example and experience?\n");
		printf("1)Supervised Learning\n");
		printf("2)Unsupervised Learning\n");
		printf("3)Reinforcement Learning\n");
		printf("4)Semi-Supervised Learning\n");
}

int main()
{
	int a,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,d,c=0;
	printf("Enter '1' to START the game\n");
	printf("Enter '0' to END the game\n");
	scanf("%d",&a);
	if(a==1)
	 printf("The Game is Started.....\n\n");
	else if (a==0)
	 printf("The Game is Ended\n");
	if (a==1)
	{
		printf("Rules:\n\t");
		printf("1.Totally 10 questions are available.\n\t");
		printf("2.If the answer is correct,it awards 3 points and if it is wrong,it reduce 2 points for each questions.\n\t");
		printf("3.If one scores 30 points,it presents them a 'THE LEGEND' tittle.\n\t");
		printf("4.If one scores less than 9 points,they have to try again.\n\n");
		fir();
	}
		printf("Enter your answer: ");
		scanf("%d",&a1);
		if (a1==3)
		 {
		 printf("You Scored 3 points!\n\n");
		 sec();
		 c=c+3;}
		else 
		 {
		 printf("You lost 2 points!\n\n");
		 sec();
		 c=c-2;}	
		
		printf("Enter your answer: ");
		scanf("%d",&a2);
		if (a2==1)
		 {
		 printf("You Scored 3 points!\n\n");
		 thi();
		 c=c+3;}
		else 
		 {
		 printf("You lost 2 points!\n\n");
		 c=c-2;
		 thi();}
		
		
		printf("Enter your answer: ");
		scanf("%d",&a3);
		if (a3==4)
		 {
		 printf("You Scored 3 points!\n\n");
		 fo();
		 c=c+3;}
		else 
		 {
		 printf("You lost 2 points!\n\n");
		 fo();
		 c=c-2;}
		
		printf("Enter your answer: ");
		scanf("%d",&a4);
		if (a4==4)
		 {
		 printf("You Scored 3 points!\n\n");
		 fi();		 
		 c=c+3;}
		else 
		 {
		 printf("You lost 2 points!\n\n");
		 fi();
		 c=c-2;}
		 
		printf("Enter your answer: ");
		scanf("%d",&a5);
		if (a5==3)
		 {
		 printf("You Scored 3 points!\n\n");
		 si();
		 c=c+3;}
		else 
		 {
		 printf("You lost 2 points!\n\n");
		 si();
		 c=c-2;}

		printf("Enter your answer: ");
		scanf("%d",&a6);
		if (a6==3)
		 {
		 printf("You Scored 3 points!\n\n");
		 se();
		 c=c+3;}
		else
		 {
		 printf("You lost 2 points!\n\n");
		 se();
		 c=c-2;}

		printf("Enter your answer: ");
		scanf("%d",&a7);
		if (a7==1)
		 {
		 printf("You Scored 3 points!\n\n");
		 ei();
		 c=c+3;}
		else 
		 {
		 printf("You lost 2 points!\n\n");
		 ei();
		 c=c-2;}
		 
		printf("Enter your answer: ");
		scanf("%d",&a8);
		if (a8==4)
		 {
		 printf("You Scored 3 points!\n\n");
		 ni();		 
		 c=c+3;}
		else 
		 {
		 printf("You lost 2 points!\n\n");
		 ni();
		 c=c-2;}
		 
		printf("Enter your answer: ");
		scanf("%d",&a9);
		if (a9==4)
		 {
		 printf("You Scored 3 points!\n\n");
		 te();
		 c=c+3;}
		else
		 {
		 printf("You lost 2 points!\n\n");
		 te();		 
		 c=c-2;}
		
		printf("Enter your answer: ");
		scanf("%d",&a10);
		if (a10==1)
		 {
		 printf("You Scored 3 points!\n\n");
		 c=c+3;}
		else
		 {
		 printf("You lost 2 points!\n\n");
		 c=c-2;}
		 
		if(c==30)
		 printf("You won'THE LEGEND' tittle\n");
		else if (c>9 && c<=29)
		 printf("You are great!\n");
		else 
		 printf("You scored %d, so Try-Again!\n",c);
		return 0;
}

