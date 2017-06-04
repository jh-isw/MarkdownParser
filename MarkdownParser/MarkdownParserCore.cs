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
        [DllImport(@"..\..\..\Debug\MarkdownParserCore.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern double Add(double a, double b); // TODO: just a test

        [DllImport(@"..\..\..\Debug\MarkdownParserCore.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern int parse();
    }
}
