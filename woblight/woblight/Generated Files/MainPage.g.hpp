﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "MainPage.xaml.h"




void ::woblight::MainPage::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///MainPage.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the Rectangle named 'rectangle_background'
    rectangle_background = safe_cast<::Windows::UI::Xaml::Shapes::Rectangle^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"rectangle_background"));
    // Get the Image named 'image_woblightOverlay'
    image_woblightOverlay = safe_cast<::Windows::UI::Xaml::Controls::Image^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"image_woblightOverlay"));
    // Get the TextBlock named 'textblock_CustomOverlay'
    textblock_CustomOverlay = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textblock_CustomOverlay"));
    // Get the StackPanel named 'stackpanel_MainMenu'
    stackpanel_MainMenu = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"stackpanel_MainMenu"));
    // Get the StackPanel named 'stackpanel_CustomWobMenu'
    stackpanel_CustomWobMenu = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"stackpanel_CustomWobMenu"));
    // Get the TextBox named 'customWobInput'
    customWobInput = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"customWobInput"));
}

void ::woblight::MainPage::Connect(int connectionId, Platform::Object^ target)
{
    switch (connectionId)
    {
    case 1:
        (safe_cast<::Windows::UI::Xaml::UIElement^>(target))->KeyUp +=
            ref new ::Windows::UI::Xaml::Input::KeyEventHandler(this, (void (::woblight::MainPage::*)(Platform::Object^, Windows::UI::Xaml::Input::KeyRoutedEventArgs^))&MainPage::myMenu_KeyUp);
        (safe_cast<::Windows::UI::Xaml::UIElement^>(target))->PointerMoved +=
            ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::woblight::MainPage::*)(Platform::Object^, Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::myWobber);
        break;
    case 2:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::woblight::MainPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&MainPage::SubmitCustomWobText);
        break;
    case 3:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::woblight::MainPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&MainPage::ClassicWobClicked);
        break;
    case 4:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::woblight::MainPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&MainPage::CustomWobClicked);
        break;
    case 5:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::woblight::MainPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&MainPage::VintageWobClicked);
        break;
    }
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}

