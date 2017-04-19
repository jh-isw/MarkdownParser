using System;
using System.Linq;

namespace MarkdownParser
{
    using GalaSoft.MvvmLight.Messaging;
    using Microsoft.Win32;

    /// <summary>
    /// Central listenere for all messages of the app.
    /// </summary>
    public class MessageListener
    {
        #region constructors and destructors

        public MessageListener()
        {
            InitMessenger();
        }

        #endregion

        #region methods

        /// <summary>
        /// Is called by the constructor to define the messages we are interested in.
        /// </summary>
        private void InitMessenger()
        {
            Messenger.Default.Register<NotificationMessageAction<string>>(this, openFile);
        }

        private void openFile(NotificationMessageAction<string> obj)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            if (openFileDialog.ShowDialog() == true)
            {
                obj.Execute(openFileDialog.FileName);
            }
        }

        #endregion

        #region properties

        /// <summary>
        /// We need this property so that this type can be put into the ressources.
        /// </summary>
        public bool BindableProperty => true;

        #endregion
    }
}