#include <Renderer/Renderer.h>
#include <Logic/Player.h>
#include <Core/Timer.h>

Renderer::Renderer() {
    startGame();
}

void Renderer::startGame() {
    std::string pName;

    std::cout << "Enter your name: ";
    std::cin >> pName;

    std::cout << "A mighty Dragon stands before you" << std::endl;

    Player player(pName, 360, 480);
    const std::string dragon = R"(
                     ^    ^ 
                    / \  //\ 
      |\___/|      /   \//  \ 
      /O  O  \__  /    //  | \ \ 
     /     /  \/_/    //   |  \  \ 
     @___@'    \/_   //    |   \   \  
        |       \/_ //     |    \    \
        |        \///      |     \     \ 
       _|_ /   )  //       |      \     \ 
       '/,_ _ _/  ( ; -.    |    _ \.-~        .-~~~^-.
       ,-{        _      `-.|.-~-.           .~         `.
       '/\      /                 ~-. _ .-~      .-~^-. \ 
          `.   {            }                   /      \  \ 
          .----~-.\        \-'                 .~         \  `. \^-. 
        ///.----..>    c   \             _ -~             `.  ^-`   ^-_
          ///-._ _ _ _ _ _ _}^ - - - - ~                     ~--,   .-~ 
                                                                 /.-'  
)";
    while (open) {
        std::this_thread::sleep_for(std::chrono::milliseconds(15));
        clear();
        std::cout << dragon << std::endl;     
    }
}

void Renderer::clear() {
    int lnt;
#ifndef _WIN32
    lnt = system("clear");
#else
    lnt = system("cls");
#endif

    if (lnt) {
        std::cout << "Error for system: " << lnt << std::endl;
        open = false;
    }
}

void Renderer::input(bool& bOpen) {
    while (bOpen) {
        std::string buf;
        std::cin >> buf;
        if (buf == "Q" || buf == "q")
        {
            bOpen = false;
        }
    }
}