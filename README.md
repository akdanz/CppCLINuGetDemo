Steps to demonstrate that NuGet references are not properly supported for C++/CLI .NET Framework projects:

1. Right-Click "ConsoleApplication1" -> Manage Nuget Packages -> Install "Grpc.Net.Client" => Notice that no dependencies (like Grpc.Net.Common) will be installed and the install will finally fail.
2. Try to do it on command line: Tools -> Nuget Package Manager -> Package Manager Console => "Install-Package Grpc.Net.Client" => fails


The only thing that is possible is to manually create a packages.config and run Nuget restore. But this means that
- all dependencies of the Nuget that we want to install need to be added manualle to the file.
- all related dlls need to be added manually as a reference to the project 