using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace HelloWorldLambda
{
    public class Program
    {
        public static void Main(string[] args)
        {
            
            Func<String,int> HelloWorld = text => {
                        Console.WriteLine(text);
                        Console.WriteLine("Hello, world!");
                        return 0;
                    };
            
            HelloWorld.Invoke("lambda function");
        }
     }
}
