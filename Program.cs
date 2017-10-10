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

			string inputFile = args[0];
			string outputFile = args[1];

			if (!File.Exists(inputFile))
			{
				Console.WriteLine("FolderConverter [input file] [output file(bat)]");
				return;
			}

			StreamWriter sw = File.CreateText(outputFile);

			string[] lines = File.ReadAllLines(inputFile);
			IEnumerable<string> revLines = lines.Reverse();
			foreach (string line in revLines)
			{
				Console.WriteLine(line);

				string sourceKey = "이동: D:\\eTorrent 15-08-11\\";
				string tragetKey = "-> D:\\eTorrent 15-08-11\\";

				string source, target;

				int pos = line.IndexOf(sourceKey);
				int sourceStartPos = pos + sourceKey.Length;
				int sourceEndPos = line.IndexOf(" -> ");
				source = line.Substring(sourceStartPos, sourceEndPos - sourceStartPos);

				pos = line.IndexOf(tragetKey);
				int targetStartPos = pos + tragetKey.Length;
				target = line.Substring(targetStartPos);

				sw.WriteLine("ren " + "\"" + target + "\" \"" + source + "\"");
			}

			sw.Close();
		}
	}
}
