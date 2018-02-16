package demo.jni;

public class Jni{

	static {
		System.loadLibrary("jni");	
	}
	public native void heyMath();

	public native void heyMath(int i,int j);
	public static void main(String[] args){
			new Jni().heyMath();
	}

}
