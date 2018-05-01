#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./update 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\322"
#define      chk1_z	22
#define      chk1	((&data[2]))
	"\321\134\167\172\153\076\046\161\041\135\130\331\172\357\156\010"
	"\346\073\143\146\327\014\263"
#define      xecc_z	15
#define      xecc	((&data[26]))
	"\032\165\326\207\050\266\145\237\103\340\120\116\257\260\256\300"
	"\020\230"
#define      rlax_z	1
#define      rlax	((&data[42]))
	"\317"
#define      shll_z	10
#define      shll	((&data[43]))
	"\241\261\322\364\176\064\154\351\223\276"
#define      msg1_z	42
#define      msg1	((&data[53]))
	"\225\376\112\240\300\113\362\336\213\017\257\245\120\125\260\105"
	"\236\167\370\251\112\102\062\353\165\322\024\274\026\006\261\367"
	"\167\037\022\003\324\276\105\164\327\172\231\243\007\071\210\162"
	"\210\327\015\376"
#define      tst1_z	22
#define      tst1	((&data[110]))
	"\271\006\144\025\277\126\111\274\350\146\024\140\274\204\142\125"
	"\124\374\246\204\256\130\246\166\221\311\302\324\060\065"
#define      msg2_z	19
#define      msg2	((&data[139]))
	"\137\035\125\154\216\274\243\174\036\224\173\113\367\236\113\137"
	"\362\064\217\375\337\324\056"
#define      inlo_z	3
#define      inlo	((&data[158]))
	"\334\311\133"
#define      text_z	728
#define      text	((&data[342]))
	"\016\206\316\227\135\334\226\343\325\051\234\334\216\262\233\143"
	"\343\321\320\311\325\057\347\053\233\042\206\361\367\204\115\006"
	"\013\034\235\150\370\064\114\316\136\350\253\354\233\107\120\176"
	"\030\040\107\356\120\057\031\354\121\240\335\111\044\052\120\057"
	"\107\355\230\077\041\344\016\200\315\271\154\151\000\275\347\031"
	"\336\057\007\056\136\040\033\260\300\370\371\345\043\111\025\152"
	"\067\255\252\131\222\271\331\140\162\106\311\163\003\260\214\342"
	"\337\223\020\076\264\054\356\165\045\347\133\110\061\160\263\150"
	"\036\136\302\260\027\234\021\212\342\332\376\346\213\213\310\153"
	"\036\331\251\323\006\227\111\053\177\244\164\260\024\047\031\063"
	"\206\334\344\236\170\365\051\133\320\047\102\133\262\012\307\321"
	"\344\161\244\352\010\255\033\025\143\103\156\122\102\325\343\227"
	"\147\326\144\274\223\006\060\126\121\267\306\157\204\256\105\311"
	"\155\125\252\077\005\060\105\263\257\312\267\223\101\047\270\121"
	"\254\155\267\252\032\135\346\040\366\100\351\034\313\231\220\130"
	"\235\334\257\307\233\041\054\107\047\336\116\162\342\167\034\030"
	"\102\106\236\031\036\240\344\046\354\101\117\162\336\164\224\136"
	"\046\362\107\124\332\163\237\234\164\073\354\126\064\177\073\076"
	"\132\326\252\017\347\146\344\035\007\257\137\165\304\263\222\170"
	"\150\133\033\016\255\111\026\132\202\271\040\347\146\176\317\212"
	"\317\327\230\352\260\041\314\135\123\267\121\146\201\375\104\104"
	"\266\343\331\067\164\042\133\114\101\363\101\232\016\251\102\055"
	"\074\345\301\025\103\314\222\064\311\314\177\040\056\133\032\236"
	"\071\260\345\375\141\311\071\153\236\205\321\241\161\176\100\161"
	"\123\044\107\236\072\315\276\375\320\046\336\166\150\066\175\032"
	"\245\330\374\365\373\252\201\025\234\317\352\107\323\033\065\324"
	"\054\223\101\107\117\227\163\211\277\233\162\225\350\311\307\177"
	"\055\221\233\003\135\373\121\074\200\122\361\122\344\275\320\054"
	"\252\251\353\202\215\304\222\212\205\055\306\250\235\236\175\070"
	"\377\072\253\131\144\016\320\044\024\117\007\262\377\141\312\317"
	"\032\310\233\104\172\065\371\021\074\257\135\060\046\371\174\146"
	"\142\165\334\341\374\062\370\114\233\332\116\302\007\022\224\166"
	"\266\033\270\372\332\101\215\154\106\147\010\114\035\262\315\014"
	"\111\364\070\354\020\027\075\267\151\007\175\135\322\217\006\231"
	"\033\213\116\207\120\204\022\213\145\061\172\163\074\005\050\220"
	"\302\355\176\356\306\326\030\364\111\321\257\040\304\076\171\370"
	"\342\243\140\016\113\167\375\162\210\373\371\055\223\041\071\215"
	"\244\070\037\251\264\365\172\226\331\215\312\304\301\354\133\125"
	"\226\144\231\333\005\031\247\150\247\002\131\222\314\045\021\012"
	"\327\345\212\042\211\176\224\257\062\125\334\040\211\136\264\020"
	"\227\120\371\340\041\260\046\103\325\177\353\227\131\072\113\202"
	"\315\176\270\335\241\306\117\103\012\324\361\220\127\160\261\310"
	"\201\120\243\353\174\122\336\041\366\361\130\217\123\114\146\031"
	"\240\075\216\071\264\331\234\307\256\362\157\140\136\105\357\366"
	"\060\267\164\120\137\274\336\113\246\044\045\016\355\161\312\033"
	"\167\143\106\014\053\261\255\057\312\025\157\011\341\126\202\213"
	"\300\260\004\312\274\265\152\003\253\155\225\000\241\022\266\026"
	"\013\215\304\212\236\200\110\340\220\223\364\014\263\301\233\302"
	"\137\067\160\011\255\305\034\025\136\203\336\354\171\066\332\311"
	"\130\160\250\126\337\035\124\144\107\013\134\136\313\166\007\130"
	"\271\227\153\111\113\057\336\025\356\361\136\272\300\212\221\344"
	"\377\230\044\222\243\377\173\372\174\057\165\316\245\105\044\011"
	"\173\130\330\356\116\172\131\144\005\336\055\355\064\271\275\341"
	"\212\332\361\075\273\046\163\277\171\261\100\105\011\164\143\073"
	"\323\127\240\223\070\251\376\231\160\317\274\010\156\140\112\142"
	"\221\207\316\025\171\207\100\236\140\354\345\306\055\245\112\135"
	"\037\026\175\072\150\147\366\155\150\222\005\321\252\356\026\210"
	"\222\212\071\247\262\123\332\070\057\276\326\250\264\377\003\204"
	"\047\105\340\331\120\247\253\065\031\117\040\041\076\066\252\320"
	"\300\343\170\162\067\122\253\146\021\202\017\305\202\022\112\251"
	"\130\052\203\251\322\056\336\353\176\377\015\274\066\267"
#define      opts_z	1
#define      opts	((&data[1135]))
	"\031"
#define      pswd_z	256
#define      pswd	((&data[1162]))
	"\127\024\071\151\226\110\056\031\133\170\302\264\243\105\135\165"
	"\163\074\141\362\073\156\256\161\046\073\066\236\372\215\022\021"
	"\030\277\104\155\257\350\364\234\172\325\157\177\063\040\072\377"
	"\170\167\113\103\170\341\101\145\227\167\003\222\005\026\243\036"
	"\326\350\213\206\321\177\042\113\125\221\312\210\261\005\207\052"
	"\174\323\156\365\264\257\133\114\047\136\336\054\165\202\112\114"
	"\153\325\322\074\125\364\207\252\206\122\062\070\127\272\142\324"
	"\215\321\311\102\200\044\216\250\203\154\324\371\357\037\105\132"
	"\364\030\226\111\014\036\363\223\160\046\313\310\340\056\234\156"
	"\377\146\260\200\213\077\050\017\253\375\010\233\034\116\365\020"
	"\146\214\132\163\253\116\006\033\164\322\343\124\000\200\303\000"
	"\346\163\201\161\262\252\200\136\247\211\372\303\327\360\324\076"
	"\174\057\261\047\175\267\103\362\211\047\107\212\250\012\212\216"
	"\175\014\000\060\266\201\217\135\012\211\041\342\171\366\040\366"
	"\045\321\036\243\211\142\225\022\211\334\234\061\346\047\300\144"
	"\063\301\225\351\102\044\107\115\256\151\057\047\137\120\036\205"
	"\041\074\050\252\236\276\275\050\232\131\132\201\201\032\346\264"
	"\333\173\235\036\240\345\153\116\116\233\150\301\100\322\224\230"
	"\346\315\001\175\025\057\226\161\250\131\045\113\237\202\301\023"
	"\277\042\005\372\220\263\154\266\357\325\170\057\247\014\307\216"
	"\332\310\013\360\370\242\141\240\374\206\354\233\011\255\256"
#define      tst2_z	19
#define      tst2	((&data[1475]))
	"\303\140\147\060\126\144\233\075\271\351\164\276\104\152\246\307"
	"\100\113\372\165\356\212\132\027\126\005"
#define      chk2_z	19
#define      chk2	((&data[1499]))
	"\234\115\044\217\252\163\356\140\370\166\310\326\144\101\074\143"
	"\264\221\321\134\131\072\166\025"
#define      date_z	1
#define      date	((&data[1521]))
	"\354"/* End of data[] */;
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
