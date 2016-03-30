static void Main(string[]a){Console.WriteLine(a.Skip(1).Select(x=>int.Parse(x)).Sum(x=>x*x));}
