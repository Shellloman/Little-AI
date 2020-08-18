include "game.h"

const int SCREEN_WIDTH = 1920;
const int SCREEN_HEIGHT = 1080;

int main(int argc, const char * argv[]){
    // initialisation de la SDL
    if( SDL_Init( SDL_INIT_VIDEO |SDL_INIT_AUDIO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
    }
    TTF_Init();

    //création de la fenetre
    SDL_Window* fenetre = SDL_CreateWindow( "UPTOWER", 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN|SDL_WINDOW_ALLOW_HIGHDPI|SDL_WINDOW_FULLSCREEN);
    SDL_Renderer* rendu = SDL_CreateRenderer(fenetre,-1,SDL_RENDERER_ACCELERATED);
    SDL_ShowCursor(SDL_DISABLE);
    // initialisation des classes principales

    // si aucun argument n'est donné on saute le menu en développement
    bool Continue = true;
    int ret = 0;
    int save = 1;

    game.play();


    // on libère la mémoire de la SDL avant de quitter
    IMG_Quit();
    SDL_Quit();
    return 0;
}
