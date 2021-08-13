#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "MainWindow.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::CppApp::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        void myCustomButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::CppApp::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
