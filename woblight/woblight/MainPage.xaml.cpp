//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <iostream>
#include <time.h>

using namespace woblight;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

MainPage::MainPage()
{
	InitializeComponent();
	wobNum = 0;
	wobEnabled = false;
}

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
	(void) e;	// Unused parameter
}

//#####################################################################
// Wobber : Changes Colors	
//#####################################################################

void woblight::MainPage::myWobber(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	if( wobEnabled )
	{
		SolidColorBrush^ backgroundColor = ref new SolidColorBrush();
		SolidColorBrush^ textColor = ref new SolidColorBrush();

		switch( wobNum % 6 ) {
			case 0:
				backgroundColor->Color = Windows::UI::Colors::AliceBlue;
				textColor->Color = Windows::UI::Colors::Orange;
				break;
			case 1:
				backgroundColor->Color = Windows::UI::Colors::Red;
				textColor->Color = Windows::UI::Colors::Blue;
				break;
			case 2:
				backgroundColor->Color = Windows::UI::Colors::Pink;
				textColor->Color = Windows::UI::Colors::Black;
				break;
			case 3:
				backgroundColor->Color = Windows::UI::Colors::Purple;
				textColor->Color = Windows::UI::Colors::Green;
				break;
			case 4:
				backgroundColor->Color = Windows::UI::Colors::PeachPuff;
				textColor->Color = Windows::UI::Colors::Yellow;
				break;
			default:
				backgroundColor->Color = Windows::UI::Colors::OrangeRed;
				textColor->Color = Windows::UI::Colors::CadetBlue;
				break;
		}

		wobNum++;

		myBackground->Fill = backgroundColor;
		myTextOverlay->Foreground = textColor;
	}
	
	else
	{
		// do nothing
	}
}

//#####################################################################
// Custom Wob: Allows Custom Text				
//#####################################################################

void woblight::MainPage::CustomWobClicked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	myTextOverlay->Text = customWobInput->Text;

	myMenu->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	myTextOverlay->Visibility = Windows::UI::Xaml::Visibility::Visible;

	myWoblightOverlay->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	wobEnabled = true;
}

//#####################################################################
// Vintage Wob: Wob With the Woblight Logo				
//#####################################################################

void woblight::MainPage::VintageWobClicked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	myTextOverlay->Text = "";

	myMenu->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	myTextOverlay->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	myWoblightOverlay->Visibility = Windows::UI::Xaml::Visibility::Visible;

	wobEnabled = true;
}

//#####################################################################
// Classic Wob: Wob with No Extra Stuff			
//#####################################################################

void woblight::MainPage::ClassicWobClicked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	myTextOverlay->Text = "";

	myMenu->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	myTextOverlay->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	myWoblightOverlay->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	wobEnabled = true;
}
