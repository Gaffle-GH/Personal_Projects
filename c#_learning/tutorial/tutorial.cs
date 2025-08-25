using System;

namespace testrun
{
    class Program
    {
        static void Main(string[] args)
        {
            // WriteLine
            Console.WriteLine("This is a test run!");
            Console.WriteLine("Of a simple C# program.");
            Console.WriteLine("Hello World!");
            Console.WriteLine(" ");

            // Number Values
            Console.WriteLine("1 + 2 = " + (1 + 2));
            Console.WriteLine(" ");

            // Write
            Console.Write("This is a test run! ");
            Console.WriteLine("Of a simple C# program.");
            Console.WriteLine(" ");

            // Variables
            int age;
            string firstname = "John";
            string lastname = "Doe";
            age = 25;
            Console.WriteLine("Name: " + firstname);
            Console.WriteLine("Last Name: " + lastname);
            Console.WriteLine("Age: " + age);
            Console.WriteLine(" ");

            // Constants
            const int foreverNum = 100;
            Console.WriteLine("Forever Number: " + foreverNum);
            Console.WriteLine(" ");

            // Combonation of Variables
            int num1, num2;
            int sum;
            num1 = 10;
            num2 = 20;
            sum = num1 + num2;
            Console.WriteLine("Number 1: " + num1);
            Console.WriteLine("Number 2: " + num2);
            Console.WriteLine("Number 1 + Number 2: " + sum);
            Console.WriteLine(" ");
            string fullName = firstname + " " + lastname;
            Console.WriteLine("Full Name: " + fullName);
            Console.WriteLine(" ");
            
            // Types
            long numInt = 150000000000L;
            float numFloat = 3.22F;
            double numDouble = 30.22D;
            Console.WriteLine("Int Type: " + numInt);
            Console.WriteLine("Float Type: " + numFloat);
            Console.WriteLine("Double Type: " + numDouble);
            Console.WriteLine(" ");
            float numFloat2 = 32e6F;
            double numDouble2 = 44E2D;
            Console.WriteLine("Float Type: " + numFloat2);
            Console.WriteLine("Double Type: " + numDouble2);
            Console.WriteLine(" ");
            bool isTrue = true;
            bool isFalse = false;
            Console.WriteLine("Is True: " + isTrue);
            Console.WriteLine("Is False: " + isFalse);
            Console.WriteLine(" ");
            char character = 'C';
            Console.WriteLine("Character: " + character);
            Console.WriteLine(" ");

            // Type Casting (Implicit)
            int num3 = 1;
            double num4 = num3;
            Console.WriteLine("Int to Double: " + num4);

            // Type Casting (Explicit)
            num4 = (int) num3;
            Console.WriteLine("Double to Int: " + num4);
            Console.WriteLine(" ");

            // Conversion Methods
            Console.WriteLine("Int to String: " + Convert.ToString(num3));
            Console.WriteLine("Int to Double: " + Convert.ToDouble(num3));
            
        }
    }
}