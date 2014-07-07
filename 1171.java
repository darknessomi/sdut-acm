import java.util.regex.*;
import java.io.*;
public class Main {
	public static void main(String args[]) throws Exception{
		BufferedReader buf=null;
		buf =new BufferedReader(new InputStreamReader(System.in));
		String str=null;
		str=buf.readLine();
		String pat="\\D+";		
		Pattern p=Pattern.compile(pat);
		Matcher m=p.matcher(str);
		String s=m.replaceAll("*");
		System.out.println(s);
	}

}
