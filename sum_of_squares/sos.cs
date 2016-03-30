static void Main(string[]args){Console.WriteLine(args.Skip(1).Select(x=>Int32.Parse(x)).Sum(x=>x*x));}
