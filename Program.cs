using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace FolderConverter
{
	class Program
	{
		static void Main(string[] args)
		{
			if (args.Length != 2)
			{
				Console.WriteLine("Error arguments...");
				return;
			}

			//string inputFile = args[0];
			//string outputFile = args[1];

			//if (!File.Exists(inputFile))
			//{
			//	Console.WriteLine("FolderConverter [input file] [output file(bat)]");
			//	return;
			//}

			St	reamWriter sw = File.CreateText(outputFile);

			string[] lines = File.ReadAllLines(inputFile);
			IEnumerable<string> revLines = lines.Reverse();

			sw.Close();
			
			//////////////////////////////////////
			// last edit
			//////////////////////////////////////
			
			//////////////////////////////////////
			// last edit2
			//////////////////////////////////////
			
			//////////////////////////////////////
			// last edit3
			//////////////////////////////////////			
		}
	}
}
