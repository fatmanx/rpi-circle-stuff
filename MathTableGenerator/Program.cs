using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MathTableGenerator
{
    class Program
    {
        static void Main(string[] args)
        {
            var sine = new SineGenerator().Generate(0.005);
            var file = new System.IO.StreamWriter("isine.h");
            file.WriteLine(sine);
            file.Close();

            Console.ReadLine();
        }
    }
}
