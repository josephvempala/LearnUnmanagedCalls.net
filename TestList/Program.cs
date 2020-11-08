using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading;
namespace TestList
{
    class Program
    {
        static void Main(string[] args)
        {
            Random r = new Random();
            LinkedList linked = new LinkedList();
            int[] lis = new int[4000000];
            for (int i = 0; i < 4000000; i++)
                lis[i] = r.Next(10, 99);
            Stopwatch s = new Stopwatch();
            s.Start();
            foreach(int i in lis)
            {
                linked.Add(i);
            }
            s.Stop();
            Console.WriteLine(s.ElapsedMilliseconds);
        }
    }
}