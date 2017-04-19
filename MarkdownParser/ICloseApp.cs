using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace MarkdownParser
{
    interface ICloseApp
    {
        void closeApp();
    }

    public class CloseApp : ICloseApp
    {
        public void closeApp()
        {
            Application.Current.MainWindow.Close();
        }
    }
}
