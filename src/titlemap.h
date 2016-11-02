struct Hud_image {
	__str font;
	
	int width;
	int height;
	
	int msg_id;
	
	accum hold_time;
	
	accum fadein_time; // 0.0 means HUDMSG_FADEOUT, unless >
	accum fadeout_time; // 0.0 means HUDMSG_PLAIN
	
	int delay;
};

void titlemap(void);

void reset_player(void);

[[call("ScriptS")]]
void print_msg(void);

[[call("ScriptS")]]
void show_cutscene(void);

void display_image(struct Hud_image);
