using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace MarkdownParser
{
    class MarkdownParserCore
    {
        [DllImport("MarkdownParserCore.dll")]
        public static extern double Add(double a, double b);

        [DllImport("msvcrt.dll")]
        public static extern int puts(string c);
    }
}
