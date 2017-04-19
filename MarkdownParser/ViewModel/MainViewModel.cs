using System;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.CommandWpf;
using GalaSoft.MvvmLight.Messaging;
using System.IO;

namespace MarkdownParser.ViewModel
{
    /// <summary>
    /// This class contains properties that the main View can data bind to.
    /// <para>
    /// Use the <strong>mvvminpc</strong> snippet to add bindable properties to this ViewModel.
    /// </para>
    /// <para>
    /// You can also use Blend to data bind with the tool's support.
    /// </para>
    /// <para>
    /// See http://www.galasoft.ch/mvvm
    /// </para>
    /// </summary>
    public class MainViewModel : ViewModelBase
    {
        public string WindowTitle { get; private set; }
        private string theContent;

        public string TheContent
        {
            get { return theContent; }
            set
            {
                if (theContent == value)
                {
                    return;
                }

                theContent = value;
                RaisePropertyChanged();
            }
        }

        public RelayCommand GenerateHtmlCommand { get; private set; }
        public RelayCommand MenuItemOpenCommand { get; private set; }
        public RelayCommand MenuItemExitCommand { get; private set; }

        /// <summary>
        /// Initializes a new instance of the MainViewModel class.
        /// </summary>
        public MainViewModel()
        {
            if (IsInDesignMode)
            {
                // Code runs in Blend --> create design time data.
                WindowTitle = "MarkdownParser (Designmode)";
                TheContent = "This is our sample content";
            }
            else
            {
                // Code runs "for real"
                WindowTitle = "MarkdownParser";
                TheContent = "";

                GenerateHtmlCommand = new RelayCommand(OnGenerateHtmlExecuted, OnGenerateHtmlCanExecute);
                MenuItemOpenCommand = new RelayCommand(OnMenuItemOpenExecuted, null);
                MenuItemExitCommand = new RelayCommand(OnMenuItemExitExecuted, null);
            }
        }

        private void OnMenuItemOpenExecuted()
        {
            Messenger.Default.Send<NotificationMessageAction<string>>(new NotificationMessageAction<string>("open", receiveFilename));
        }

        private void OnMenuItemExitExecuted()
        {
            //Application.Current.MainWindow.Close();
            Console.WriteLine("2 + 3 = " + MarkdownParserCore.Add(2.0, 3.0));
            /*
             * Assistent für verwaltetes Debuggen "PInvokeStackImbalance"  ist aufgetreten.
  HResult=0x00000000
  Nachricht = **Assistent für verwaltetes Debuggen "PInvokeStackImbalance" :** "Ein Aufruf an die PInvoke-Funktion "MarkdownParser!MarkdownParser.MarkdownParserCore::Add" hat das Gleichgewicht des Stapels gestört. Wahrscheinlich stimmt die verwaltete PInvoke-Signatur nicht mit der nicht verwalteten Zielsignatur überein. Überprüfen Sie, ob die Aufrufkonvention und die Parameter der PInvoke-Signatur mit der nicht verwalteten Zielsignatur übereinstimmen."
            */
        }

        private void OnGenerateHtmlExecuted()
        {
            Console.WriteLine(TheContent);
        }

        private bool OnGenerateHtmlCanExecute()
        {
            return !String.IsNullOrEmpty(TheContent);
        }

        private void receiveFilename(string filename)
        {
            TheContent = File.ReadAllText(filename);
        }
    }
}