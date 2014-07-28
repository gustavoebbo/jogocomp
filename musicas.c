#include <SDL/SDL_mixer.h>

if( Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 4096 ) == -1 )
    {
        return false;
    }
// LOAD MÚSICA.
Mix_Music *theme = NULL;
// LOAD FALAS.
Mix_Chunk *diesob = NULL;
Mix_Chunk *gameover = NULL;
Mix_Chunk *hail = NULL;
Mix_Chunk *kickuass = NULL;
Mix_Chunk *letgod = NULL;
Mix_Chunk *myname = NULL;
Mix_Chunk *hell = NULL;
Mix_Chunk *yipie = NULL;
Mix_Chunk *pissin = NULL;
Mix_Chunk *faceass = NULL;
Mix_Chunk *bubble = NULL;
Mix_Chunk *quit = NULL;
Mix_Chunk *hurts = NULL;
// LOAD EXPLOSAO
Mix_Chunk *explosao = NULL;

theme = Mix_LoadMUS( "theme.wav" );

if(theme== NULL)
	printf("Erro ao carregar a música\n")

diesob = Mix_LoadWAV( "diesob.wav" );
gameover = Mix_LoadWAV( "gameover.wav" );
hail = Mix_LoadWAV( "hail.wav" );
kickuass = Mix_LoadWAV( "kickuass.wav" );
letgod = Mix_LoadWAV( "letgod.wav" );
myname = Mix_LoadWAV( "myname.wav" );
hell = Mix_LoadWAV( "hell.wav" );
yipie = Mix_LoadWAV( "yipie.wav" );
pissin = Mix_LoadWAV( "pissin.wav" );
faceass = Mix_LoadWAV( "faceass.wav" );
bubble = Mix_LoadWAV( "bubble.wav" );
explosao = Mix_LoadWAV( "explosao.wav" );
quit = Mix_LoadWAV ("quit.wav");
hurts = Mix_LoadWAV ("hurts.wav");

if (diesob == NULL || gameover == NULL || hail == NULL || kickuass == NULL || letgod == NULL || myname == NULL || hell == NULL || yipie == NULL || pissin == NULL || faceass == NULL || bubble == NULL || explosao == NULL || quit == NULL || hurts == NULL)
	printf("Erro ao carregar os efeitos sonoros / falas \n");

