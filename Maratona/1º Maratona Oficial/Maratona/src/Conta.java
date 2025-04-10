import java.util.Scanner;
public class Conta {
	public static void main(String[] args) {
			Scanner in = new Scanner(System.in);
				
			int v,a,f,p,i=0;
			
			v = in.nextInt();
			do {
			a = in.nextInt();
			f = in.nextInt();
			p = in.nextInt();
			
			
				
			while(v >= a || v >= f || v >= p) {
				if(a <= v && a < f || a < p) {
			
					v = v-a;
					a = v+1;
	
				}else if(f <= v && f < a || f < p) {
					v = v-f;
					f = v+1;
					
				}else {
					v = v-p;
					p = v+1;
				}
				i++;
			}
			System.out.println(+i);
			i=i-i;
			v = in.nextInt();	
		}while(v>0);
			in.close();
	}
}
