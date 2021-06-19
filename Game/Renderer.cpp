#include "Renderer.h"
#include "Player.h"
Renderer::Renderer()
{
	startGame();
}

void Renderer::startGame()
{
	std::string pName;
	bool open = true;
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
        std::cout << dragon << std::endl;
	
        clear();
	}
}

void Renderer::clear()
{
#ifndef _WIN32
    
#else 
    
#endif // !_WIN32
}
