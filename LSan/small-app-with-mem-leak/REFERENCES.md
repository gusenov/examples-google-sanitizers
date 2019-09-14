# Stack Overflow

- [macos - Mac OS: Leaks Sanitizer](https://stackoverflow.com/a/55778432)
- [Build LLVM / Clang on MacOS](https://gist.github.com/datlife/c754535f18b422f6b8d59028c7f31bac)

If we are using XCode 10, you will notice that if you navigate to /usr in the
Finder, you will not see a folder called 'include' anymore which is why the
terminal complains of the absence of the header files which is contained inside
the 'include' folder. In this [release statement](https://developer.apple.com/documentation/xcode_release_notes/xcode_10_release_notes),
(you navigate to _/Library/Developer/CommandLineTools/Packages/macOS_SDK_headers_for_macOS_10.14.pkg_
and run that package to have the 'include' folder installed). Then you should be
good to go.

- [c++ - Getting llvm/clang (from brew) working on OSX](https://stackoverflow.com/a/54659928)
- [macos - Can't compile C program on a Mac after upgrade to Mojave](https://stackoverflow.com/questions/52509602/cant-compile-c-program-on-a-mac-after-upgrade-to-mojave/52530212#comment91963866_52509602)

# Homebrew

- [Clang can no longer find /usr/include header files? fatal error: 'stdlib.h' file not found](https://discourse.brew.sh/t/clang-can-no-longer-find-usr-include-header-files-fatal-error-stdlib-h-file-not-found/4523/2)
