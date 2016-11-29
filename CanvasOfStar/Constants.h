#define FPS 60.00
#define APS 180.00
#define SCREEN_W 1200
#define SCREEN_H 600
#define IMAGE_SIZE_WIDTH 32
#define IMAGE_SIZE_HEIGHT 32
#define ACCELERATION 0.3
#define SPEED_LIMIT 5
#define SAMPLE_GAIN 1.0
#define SAMPLE_PAN 0
#define SAMPLE_SPEED 1.0
#define SAMPLE_PLAY_ONCE ALLEGRO_PLAYMODE_ONCE

#define BULLET_SMALL_SIZE_X 32
#define BULLET_SMALL_SIZE_Y 32

#define PLAYER_BULLET_SPEED 6.0
#define ENEMY_BULLET_SPEED (-6.0)

#define BULLET_SMALL_DAMAGE 50
#define BULLET_LIFE 1

#define SHOOT_LOCK 20

#define ENEMY_LIFE 200
#define ENEMY_DAMAGE 1000
#define ENEMY_SPEED_X -5

enum MYKEYS {
	KEY_W, KEY_A, KEY_S, KEY_D, KEY_SPACE
};

enum GAME_STATUS {
	HOME, INSTRUCTIONS, LV1, LV2, LV3, NO_LIFE, WON
};
