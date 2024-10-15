import java.util.Scanner;
class ArmstrongNum{

public static void main(String args[]){

int OriginalNum,digit.CubeSum=0,num;
System.out.println("Enter Number:");

Scanner sc = new Scanner(System.in);
num = sc.nextInt();
OriginalNum = num;

while(num!=0){
digit = num%10;
CubeSum+=Math.pow(digit,3);
num/=10;
}

if(CubeSum==OriginalNum)
System.out.println(OriginalNum +" is an Armstrong Number");

else
System.out.println(OriginalNum +"is not an Armstrong Number");
}
}
S

