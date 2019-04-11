﻿#include "pch.h"
#include "App.h"

// The main function is only used to start the script host
[Platform::MTAThread] int main(Platform::Array<Platform::String ^> ^) {
    auto scriptHost = ref new HoloJs::UWP::HoloJsScriptHost();
	auto viewConfiguration = ref new HoloJs::UWP::ViewConfiguration();
	viewConfiguration->enableQrCodeNavigation();
	viewConfiguration->enableVoiceCommands();
	viewConfiguration->setViewMode(HoloJs::UWP::ViewMode::Default);
    if (scriptHost->initialize(viewConfiguration)) {
#ifdef _DEBUG
        scriptHost->enableDebugger();
#endif
        auto uri = ref new Platform::String(L"http://192.168.1.110/Temporary_Listen_Addresses/holojs/hololens-surface-mapping.xrs");
		scriptHost->startUri(uri);
        //scriptHost->start();
    }

    return 0;
}