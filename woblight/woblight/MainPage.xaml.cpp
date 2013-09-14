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


void woblight::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//myText->Text = "HEY";
	//myButton->Background = ref new SolidColorBrush(Colors.Red);

	// THIS WORKS
	/*
	SolidColorBrush^ myBrush = ref new SolidColorBrush();
	myBrush->Color = Windows::UI::Colors::AliceBlue;

	myButton->Background = myBrush;
	*/

	//SolidColorBrush^ myBrush = ref new SolidColorBrush();
	//myBrush->Color = Windows::UI::Colors::AliceBlue;


	SolidColorBrush^ myBrush = ref new SolidColorBrush();

	switch( wobNum % 6 ) {
		case 0:
			myBrush->Color = Windows::UI::Colors::AliceBlue;
			break;
		case 1:
			myBrush->Color = Windows::UI::Colors::Black;
			break;
		case 2:
			myBrush->Color = Windows::UI::Colors::Blue;
			break;
		case 3:
			myBrush->Color = Windows::UI::Colors::Red;
			break;
		case 4:
			myBrush->Color = Windows::UI::Colors::Yellow;
			break;
		default:
			myBrush->Color = Windows::UI::Colors::Orange;
			break;
	}

	wobNum++;

	myBackground->Fill = myBrush;

}

