#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./submit50 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[1]))
	"\351\256\065\266\221\306\253\014\266\347\103\227\377\321\326\332"
	"\063\110\224\235\152\230\020\110"
#define      inlo_z	3
#define      inlo	((&data[24]))
	"\346\254\242"
#define      lsto_z	1
#define      lsto	((&data[27]))
	"\112"
#define      tst1_z	22
#define      tst1	((&data[29]))
	"\232\121\177\132\352\106\152\017\333\140\355\212\362\300\371\111"
	"\244\263\324\147\244\241\316"
#define      shll_z	10
#define      shll	((&data[51]))
	"\275\340\037\202\072\027\372\373\072\077"
#define      msg2_z	19
#define      msg2	((&data[63]))
	"\234\110\074\342\021\177\356\023\150\254\315\252\054\167\320\170"
	"\026\355\153\376\141\133"
#define      rlax_z	1
#define      rlax	((&data[83]))
	"\025"
#define      chk1_z	22
#define      chk1	((&data[88]))
	"\207\257\060\037\005\310\006\250\136\130\004\150\167\060\136\220"
	"\315\037\130\204\345\316\040\367\346\046\277\170\160\223"
#define      msg1_z	42
#define      msg1	((&data[123]))
	"\022\136\313\062\371\011\151\066\252\205\007\324\216\164\314\103"
	"\051\077\136\237\133\375\144\301\027\202\027\211\106\247\253\055"
	"\320\037\204\316\005\077\274\331\161\257\205\033\256\365\161\343"
	"\040\335\031\324\177\107\035\333"
#define      tst2_z	19
#define      tst2	((&data[174]))
	"\200\253\036\010\073\377\044\055\031\331\177\365\246\264\175\244"
	"\327\311\123\245\017\367\362\132"
#define      xecc_z	15
#define      xecc	((&data[194]))
	"\146\300\351\236\015\030\111\200\023\371\122\336\206\007\267"
#define      opts_z	1
#define      opts	((&data[209]))
	"\173"
#define      pswd_z	256
#define      pswd	((&data[242]))
	"\363\336\362\046\327\374\217\015\246\144\214\356\202\147\330\147"
	"\277\131\022\335\141\155\054\211\207\363\042\064\324\241\133\310"
	"\071\250\343\170\353\104\035\226\177\163\214\053\043\263\076\021"
	"\241\254\025\327\230\366\353\333\006\167\356\346\134\127\200\226"
	"\377\144\016\353\251\054\201\051\237\016\124\302\301\222\324\142"
	"\076\351\072\327\337\046\263\345\235\241\314\372\371\115\220\371"
	"\261\236\344\133\312\146\204\151\164\330\054\065\152\000\230\251"
	"\351\323\200\311\371\064\257\226\326\173\220\317\311\041\310\172"
	"\277\255\326\211\023\132\363\210\063\040\276\236\040\127\107\012"
	"\052\310\324\043\374\203\272\322\377\113\242\310\154\152\103\053"
	"\027\031\265\053\164\251\264\247\311\162\105\352\311\215\365\363"
	"\125\311\027\122\114\321\045\113\034\307\024\210\062\127\264\111"
	"\160\152\165\344\023\051\214\334\234\321\306\146\137\273\132\264"
	"\205\161\006\321\103\053\035\137\362\061\350\044\210\235\156\371"
	"\007\344\336\032\016\152\367\253\074\276\021\233\171\153\120\377"
	"\335\126\320\040\202\355\200\165\037\151\232\247\006\011\241\016"
	"\355\177\050\374\352\040\247\047\336\271\303\130\044\023\127\002"
	"\152\050\042\354\025\242\142\065\013\374\335\022\005\176\040\363"
	"\177\116\357\126\113\176\144\362\343"
#define      date_z	1
#define      date	((&data[507]))
	"\014"
#define      text_z	1352
#define      text	((&data[751]))
	"\030\021\340\366\162\115\042\374\324\025\036\010\352\277\144\262"
	"\077\262\242\226\375\041\372\357\004\353\320\152\104\210\070\135"
	"\231\030\123\014\146\165\010\073\212\046\104\165\346\250\050\045"
	"\133\312\274\130\353\266\110\357\242\031\132\347\241\222\104\072"
	"\253\227\106\021\014\117\114\227\165\220\015\133\070\065\201\224"
	"\377\076\355\353\365\065\332\227\117\065\176\360\307\303\052\162"
	"\133\161\204\147\300\320\377\066\141\015\222\232\102\023\056\102"
	"\121\033\055\106\121\010\336\240\075\135\220\005\040\273\170\173"
	"\055\374\343\355\314\343\044\056\360\266\310\063\312\366\165\034"
	"\022\242\143\143\252\101\003\350\237\224\355\277\117\145\073\175"
	"\141\037\153\056\003\217\135\364\105\045\047\017\034\234\054\056"
	"\077\217\221\351\320\225\322\157\051\277\057\171\045\153\366\207"
	"\213\141\266\216\360\023\203\066\070\252\106\124\107\162\203\206"
	"\001\024\160\322\252\102\101\324\002\161\115\047\335\104\256\150"
	"\246\145\367\226\170\172\315\260\045\023\005\154\206\210\362\207"
	"\235\142\131\301\264\176\215\116\062\017\337\142\227\316\156\056"
	"\241\062\065\221\351\045\200\356\157\277\146\012\071\266\253\133"
	"\344\217\065\170\121\223\346\130\205\372\373\011\160\207\201\114"
	"\301\204\020\147\155\006\331\006\240\236\023\221\062\166\002\137"
	"\274\101\246\232\015\266\266\007\343\135\042\233\264\242\247\365"
	"\015\345\314\332\127\321\033\344\351\042\051\141\353\140\112\363"
	"\133\173\010\327\076\046\222\360\255\360\025\310\042\206\316\065"
	"\144\246\304\074\342\157\263\203\137\361\073\067\347\117\002\261"
	"\017\327\061\344\065\375\231\012\101\266\302\050\214\177\000\021"
	"\024\207\351\133\054\335\013\204\146\042\304\007\045\261\124\236"
	"\315\055\124\155\122\013\170\177\307\204\211\010\050\064\266\065"
	"\056\222\130\042\222\134\115\353\253\307\235\073\123\302\250\026"
	"\204\306\132\267\256\222\344\236\151\325\004\322\373\064\054\147"
	"\055\007\351\301\326\123\340\242\040\354\231\100\104\253\274\061"
	"\050\043\044\260\132\157\275\161\037\115\054\146\334\235\340\327"
	"\316\175\201\017\211\240\123\072\221\005\356\255\363\071\261\321"
	"\372\033\147\342\101\025\145\054\226\017\005\374\372\351\140\010"
	"\366\163\367\207\017\125\225\007\367\005\236\022\151\167\144\063"
	"\302\237\137\100\307\061\375\311\042\030\123\345\345\224\316\125"
	"\253\371\263\066\121\043\014\325\255\337\275\165\270\153\332\130"
	"\013\333\040\342\214\312\113\320\207\074\100\205\172\201\066\075"
	"\125\137\121\165\003\143\151\361\222\242\125\004\373\356\062\277"
	"\237\162\057\033\337\335\230\066\357\322\362\013\211\074\233\210"
	"\072\255\337\364\237\252\074\037\235\144\117\132\164\026\320\256"
	"\050\312\027\302\104\045\215\060\345\134\024\316\132\061\237\176"
	"\163\042\164\045\173\172\236\063\243\320\130\232\347\263\326\241"
	"\054\133\256\353\265\314\051\152\204\271\143\265\021\002\171\007"
	"\102\041\062\333\176\035\117\050\067\044\361\373\143\255\203\301"
	"\201\115\305\165\205\056\132\216\306\233\137\054\373\345\063\052"
	"\212\376\001\036\051\043\112\151\371\274\321\324\101\312\244\135"
	"\104\236\254\141\070\204\246\230\336\133\111\154\171\327\224\165"
	"\202\227\307\347\127\153\361\242\332\243\262\172\121\053\102\017"
	"\026\043\060\203\040\335\252\002\324\216\066\263\253\324\236\303"
	"\306\005\077\221\222\215\175\332\255\356\374\167\201\023\155\304"
	"\275\024\006\040\066\317\022\377\114\234\304\013\346\142\320\041"
	"\322\042\206\136\275\342\330\274\347\272\363\130\250\106\371\220"
	"\103\012\163\102\214\217\026\147\236\271\153\123\174\306\206\053"
	"\340\203\111\310\243\230\327\312\231\375\120\145\320\126\374\362"
	"\025\226\144\174\007\353\321\004\351\117\031\351\255\077\130\157"
	"\062\067\323\006\135\033\325\246\232\352\265\017\203\144\165\313"
	"\323\054\337\115\225\111\277\075\045\247\066\204\230\332\240\213"
	"\041\205\013\334\127\333\004\017\314\245\263\052\276\041\052\221"
	"\123\263\073\313\234\305\306\102\116\201\226\011\003\365\177\224"
	"\321\035\255\305\336\040\344\142\371\152\002\245\052\035\061\267"
	"\004\223\327\246\204\161\130\307\372\115\273\161\104\322\066\144"
	"\112\113\227\044\172\032\016\325\170\107\120\044\202\374\371\013"
	"\210\014\026\102\025\251\032\054\373\074\157\120\101\050\165\117"
	"\300\340\265\244\332\302\250\257\263\151\243\112\053\337\276\111"
	"\046\375\343\060\102\377\276\037\100\113\327\165\117\171\005\155"
	"\163\051\233\264\046\214\013\003\112\071\060\045\014\012\130\233"
	"\131\176\004\014\315\223\224\351\213\001\242\241\274\013\056\317"
	"\231\334\047\275\063\330\120\215\167\317\375\276\006\207\124\057"
	"\273\050\023\147\317\264\261\134\247\207\162\145\374\366\372\047"
	"\346\134\225\076\176\134\032\303\123\306\131\002\327\233\211\174"
	"\106\023\204\273\041\260\165\177\026\213\127\344\364\207\114\344"
	"\353\133\310\275\167\322\330\016\150\161\326\315\056\254\271\333"
	"\351\175\346\067\141\156\203\374\312\052\364\105\237\022\017\305"
	"\277\017\112\161\114\014\260\306\310\176\035\147\222\266\236\324"
	"\230\031\000\353\322\073\165\262\114\006\020\144\040\213\120\255"
	"\324\147\167\005\055\166\372\073\035\317\352\033\060\066\044\166"
	"\277\172\307\035\245\355\246\313\046\041\343\124\375\175\200\264"
	"\073\154\044\154\017\376\206\210\147\222\014\057\357\035\200\042"
	"\171\356\222\263\201\124\177\322\202\361\115\141\105\001\152\027"
	"\201\100\232\304\074\122\345\257\006\262\356\103\006\127\137\274"
	"\114\016\354\106\072\066\013\171\116\325\224\170\076\315\203\105"
	"\365\342\123\067\334\160\302\116\204\050\355\060\300\012\315\330"
	"\300\262\353\245\211\050\320\303\176\112\011\334\066\213\043\031"
	"\265\140\162\357\310\065\117\330\073\103\225\011\054\334\023\015"
	"\277\034\033\170\110\011\310\111\350\306\257\361\100\340\124\000"
	"\300\346\327\307\211\326\221\115\031\242\321\176\277\317\212\067"
	"\120\365\356\330\341\272\332\277\205\271\336\245\031\210\156\236"
	"\344\372\007\174\003\002\077\262\246\026\151\252\150\304\367\345"
	"\111\204\024\123\246\313\114\123\047\313\336\102\261\103\226\325"
	"\321\344\031\037\341\256\132\045\347\243\311\143\220\307\064\371"
	"\003\357\107\174\102\050\325\355\267\301\171\132\221\151\054\240"
	"\065\112\017\020\136\323\361\327\170\377\326\053\374\360\275\034"
	"\105\327\352\322\335\201\020\246\066\345\232\200\311\204\073\104"
	"\063\326\311\326\166\247\170\203\006\304\020\064\266\113\307\372"
	"\014\273\263\252\207\041\203\174\153\274\166\043\277\377\371\064"
	"\366\137\116\043\243\253\100\062\102\216\140\252\326\015\351\143"
	"\110\034\151\060\125\215\106\274\346\374\050\136\305\317\273\106"
	"\077\072\035\143\147\060\156\035\037\020\366\203\111\204\075\330"
	"\010\106\112\053\320\042\013\004\250\216\211\375\123\117\062\117"
	"\067\212\050\323\007\320\112\266\232\246\335\016\115\046\356\016"
	"\333\165\312\254\360\275\266\031\107\253\375\110\245\233\034\247"
	"\015\152\316\353\256\175\123\125\342\113\354\132\306\271\013\354"
	"\315\021\130\123\232\113\333\070\256\064\200\123\320\235\372\336"
	"\007\310\311\266\106\035\013\050\150\367\203\057\261\216\033\176"
	"\240\164\322\072\277\255\162\155\342\363\300\262\220\273\220\227"
	"\203\132\116\311\167\132\362\340\122\165\017\003\004\053\202\244"
	"\240\124\336\137\002\121\315\344\104\216\227\324\111\050\154\315"
	"\202\273\227\371\025\211\331\150\377\351\154\003\025\356\250\265"
	"\103\207\025\105\330\343\051\035\161\300\361\273\350\136\210\153"
	"\032\040\144\060\251\076\230\250\047\004\254\074\363\124\361\066"
	"\333\006\173\264\352\245\321\133\145\303\027\116\042\240\271\074"
	"\300\036\154\151\134\004\022\203\011\277\300\374\023\262\062\357"
	"\271\256\244\243\123\165\376\271\071\026\007\133\266\301\230\166"
	"\340\004\340\074\011\363\300\022\262\200\017\306\063\101\265\354"
	"\357\132\217\103\317\216\374\011\244\004\145\133\305\375\321\246"
	"\001\262\342\013\245\243\036\127\044\055\035\127\156\323\103\136"
	"\055\322\241\375\141\236\007\006\242\154\141\150\151\062\016\153"
	"\344\360\167\212\224\225\341\270\302\377\017"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !defined(TRACEABLE)

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !defined(TRACEABLE) */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
