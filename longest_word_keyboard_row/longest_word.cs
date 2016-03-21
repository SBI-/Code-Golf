// http://codegolf.stackexchange.com/questions/75674/longest-word-using-a-single-row-of-the-qwerty-keyboard/75767#75767
static void Main(string[]a){Console.WriteLine(a.Where(x=>Regex.IsMatch(x,"^([qwertzuiop]+|[asdfghjkl]+|[yxcvbnm]+)$")).OrderBy(x=>x.Length).Last());}


// shorter version that doesn't use Where.
static void f() 
{
    Console.WriteLine(a.OrderBy(x=>x.Length).Last(x=>Regex.IsMatch(x,"^([qwertzuiop]+|[asdfghjkl]+|[yxcvbnm]+)$")));
}
