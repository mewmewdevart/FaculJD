#include <allegro.h>

void init();
void deinit();

int main() {
	init();

    
    BITMAP *buffer;
	
    BITMAP *imgcenario;
    BITMAP *imgcocozinho;
    PALLETE pal; //Paleta de cores

    buffer = create_bitmap(800,600);
    imgcenario = load_bitmap("imagens\\cenario.bmp", pal);
    imgcocozinho = load_bitmap("imagens\\cocozinho.bmp", pal);
    
	while (!key[KEY_ESC]) {
		/* put your code here */
		
	clear_bitmap(buffer);

    draw_sprite(buffer,imgcenario,0,0); 
    draw_sprite(buffer,imgcocozinho,400,300);

    draw_sprite(screen,buffer,0,0);
	}

	deinit();
	return 0;
}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
