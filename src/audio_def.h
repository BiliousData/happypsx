#define XA_LENGTH(x) (((u64)(x) * 75) / 100 * IO_SECT_SIZE) //Centiseconds to sectors in bytes (w)

typedef struct
{
	XA_File file;
	u32 length;
} XA_TrackDef;

static const XA_TrackDef xa_tracks[] = {
	//MENU.XA
	{XA_Menu, XA_LENGTH(11295)}, //XA_GettinFreaky
	{XA_Menu, XA_LENGTH(3840)},  //XA_GameOver
	//FLIP.XA
	{XA_Flip, XA_LENGTH(11100)}, //Triggered
	{XA_Flip, XA_LENGTH(18100)}, //Slaughter
};

static const char *xa_paths[] = {
	"\\MUSIC\\MENU.XA;1",   //XA_Menu
	"\\MUSIC\\FLIP.XA;1",
	NULL,
};

typedef struct
{
	const char *name;
	boolean vocal;
} XA_Mp3;

static const XA_Mp3 xa_mp3s[] = {
	//MENU.XA
	{"freaky", false},   //XA_GettinFreaky
	{"gameover", false}, //XA_GameOver
	//WEEK1A.XA
	{"triggered", true}, //XA_Triggered
	{"slaughter", true}, //XA_Slaughter
	
	{NULL, false}
};
