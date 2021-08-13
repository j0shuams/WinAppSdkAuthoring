#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace WinRTComponent;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::CppApp::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        // We also have a CustomButton written into the XAML 
        CustomButton customButton = CustomButton();
        auto str = customButton.GetText();
    }

    void MainWindow::myCustomButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myCustomButton().Content(box_value(L"Clicked the Custom Button"));
    }
}
