public class MyHello
{
	public static void main(String[] args)
	{
		System.loadLibrary("hello");
		MyHello mh = new MyHello();
		mh.Hello();
	}
	public native void Hello();
}
