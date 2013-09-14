//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace woblight
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>

	public ref class MainPage sealed
	{
	public:
		MainPage();
		property int wobNum;
		property bool wobEnabled;

	protected:
		virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

	private:
		void myWobber(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void CustomWobClicked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void VintageWobClicked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void ClassicWobClicked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}

