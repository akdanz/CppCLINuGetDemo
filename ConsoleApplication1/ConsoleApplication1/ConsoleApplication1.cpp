#include "pch.h"

using namespace System;
using namespace Grpc::Net::Client;

int main(array<System::String ^> ^ args) {
  Console::WriteLine("Hello World!");

  auto options = gcnew GrpcChannelOptions();
  options->HttpHandler = gcnew System::Net::Http::WinHttpHandler();
  auto channel = GrpcChannel::ForAddress("http://localhost:6001", options);

  Console::WriteLine("Channel created successfully!");

  return 0;
}
