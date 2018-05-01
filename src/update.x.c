#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./update 
#endif

static  char data [] = 
#define      date_z	1
#define      date	((&data[0]))
	"\334"
#define      opts_z	1
#define      opts	((&data[1]))
	"\107"
#define      msg1_z	42
#define      msg1	((&data[9]))
	"\137\226\264\115\270\315\310\273\155\173\336\206\250\156\273\115"
	"\063\056\217\046\152\054\055\242\273\124\306\370\027\167\332\100"
	"\226\060\122\045\251\257\205\142\027\313\374\330\005\032\337\335"
	"\303\206\246\233\366"
#define      tst1_z	22
#define      tst1	((&data[59]))
	"\267\123\176\273\052\344\265\203\173\102\040\316\133\127\234\106"
	"\263\053\103\040\102\131\013\257\143\074\203\244\266"
#define      shll_z	10
#define      shll	((&data[86]))
	"\373\232\150\033\011\205\033\275\130\375\133\342\112"
#define      pswd_z	256
#define      pswd	((&data[142]))
	"\152\021\216\036\136\106\354\047\314\222\302\303\014\170\127\303"
	"\313\326\176\117\172\064\202\116\327\175\351\042\176\233\031\350"
	"\254\250\007\012\356\364\061\273\206\364\176\223\155\053\065\071"
	"\376\263\264\027\126\335\142\250\165\216\307\051\240\043\227\066"
	"\042\150\320\052\365\217\300\303\020\344\122\113\020\207\204\016"
	"\072\070\045\221\026\207\072\213\026\001\264\266\044\114\355\107"
	"\265\276\161\253\116\062\156\136\026\300\252\047\107\057\065\202"
	"\150\133\023\176\342\116\012\370\117\277\257\164\013\235\273\301"
	"\133\054\154\251\136\332\010\165\233\262\235\343\341\322\145\112"
	"\055\171\310\020\310\323\011\027\222\270\214\236\126\110\137\261"
	"\164\314\133\323\247\143\111\102\026\346\045\370\271\213\102\347"
	"\005\013\367\315\336\000\345\161\271\162\017\017\272\157\301\057"
	"\073\035\003\342\201\114\044\227\063\112\220\354\326\323\323\334"
	"\336\313\251\275\313\217\056\205\001\075\225\274\254\126\353\350"
	"\163\356\312\364\073\357\214\157\072\035\134\021\360\060\355\316"
	"\373\226\213\307\046\272\114\050\370\342\344\245\070\317\215\254"
	"\276\130\241\372\107\056\152\202\113\306\223\073\366\200\012\362"
	"\027\226\271\075\120\006\145\110\350\111\355\041\031\173\316\330"
	"\323\157\323\032\236\075\234\351\004\060\045\372\260\326\126\070"
	"\255\324\207\050\011\012\167\341\210\140\003\006\373\035\357\247"
	"\305\367\262\264\353\344\157\162\331\356\005\106\305\133\177\162"
	"\060\007\232\072\021\021\033\232\162\036\241\155\073\221\025\000"
	"\210\310\264\164\254\044\346\205\022\354\314"
#define      text_z	700
#define      text	((&data[509]))
	"\112\170\122\344\262\143\366\315\376\150\354\237\326\047\061\353"
	"\050\271\263\335\055\140\002\024\346\025\000\262\355\110\375\067"
	"\301\117\034\163\263\023\101\262\173\056\122\121\126\203\075\176"
	"\075\050\377\115\272\036\271\101\254\371\310\262\151\225\326\161"
	"\131\000\255\004\010\141\063\070\107\357\104\101\307\127\322\332"
	"\273\025\267\132\375\125\023\372\057\322\352\251\320\267\152\146"
	"\337\134\261\274\071\112\057\312\304\241\265\203\014\312\223\107"
	"\014\322\103\035\106\313\073\053\124\053\011\011\256\062\031\211"
	"\106\030\333\271\126\257\012\115\316\337\356\257\244\061\256\170"
	"\142\052\141\161\113\074\371\141\135\376\130\220\160\040\300\024"
	"\034\140\342\346\017\054\001\066\205\142\173\362\327\033\235\105"
	"\120\126\363\253\362\275\111\014\142\341\330\044\101\020\341\263"
	"\160\361\351\327\074\016\172\107\327\255\257\112\337\271\260\354"
	"\127\342\126\072\114\202\060\042\347\051\004\277\003\022\253\201"
	"\075\320\206\031\063\361\254\003\116\226\036\135\116\333\205\245"
	"\353\145\017\234\105\053\202\172\202\112\334\166\103\000\005\157"
	"\333\253\232\064\047\052\146\146\026\346\172\170\145\315\104\073"
	"\375\302\012\034\347\035\101\326\143\122\146\323\202\332\165\374"
	"\345\006\057\176\231\222\335\041\342\113\070\144\260\237\230\065"
	"\010\140\257\027\237\314\310\077\356\301\372\307\367\231\037\212"
	"\306\227\051\210\234\326\067\001\157\015\131\306\142\113\371\204"
	"\047\157\344\136\025\017\253\056\152\242\251\175\351\245\352\264"
	"\347\154\213\052\374\017\100\232\210\314\146\327\057\232\101\165"
	"\370\331\155\014\254\166\364\105\117\246\276\371\041\264\037\304"
	"\036\377\107\034\340\037\063\362\101\146\236\214\315\237\315\151"
	"\045\252\012\232\161\017\364\330\113\051\020\275\336\034\205\062"
	"\254\327\142\171\264\202\151\226\356\340\025\305\262\346\032\111"
	"\003\270\165\304\077\351\243\207\027\304\233\360\135\034\316\373"
	"\045\310\244\325\156\075\250\047\320\112\140\120\350\221\371\073"
	"\267\237\125\063\051\326\124\343\316\062\350\347\335\300\246\043"
	"\207\031\221\047\350\040\025\316\223\147\207\214\210\034\077\050"
	"\321\053\344\276\376\330\067\337\155\033\314\052\122\247\320\044"
	"\347\274\011\226\265\253\240\014\312\165\215\034\004\123\203\317"
	"\216\031\262\040\004\072\224\076\010\022\371\014\266\165\077\173"
	"\223\143\331\334\036\337\106\006\176\276\130\212\357\346\034\274"
	"\151\307\125\244\347\353\152\140\353\352\174\070\327\165\316\231"
	"\017\252\143\042\130\330\167\000\001\177\002\355\254\366\101\247"
	"\066\030\226\251\236\027\227\127\341\125\066\062\217\000\366\206"
	"\075\156\143\106\070\102\376\153\110\025\353\201\372\247\067\063"
	"\133\333\351\300\365\115\203\316\325\011\042\326\352\347\106\056"
	"\104\103\074\320\362\365\300\302\171\353\274\031\311\132\267\122"
	"\245\055\014\357\042\060\260\313\210\266\027\150\132\223\103\273"
	"\327\261\350\354\370\107\234\215\272\341\365\377\107\153\201\375"
	"\152\270\206\142\045\123\137\257\202\353\012\102\344\140\254\160"
	"\070\005\324\051\175\235\063\316\154\320\371\143\111\162\072\324"
	"\242\036\063\251\130\124\353\353\107\341\204\050\127\157\214\371"
	"\241\360\323\274\207\135\175\376\341\017\036\266\236\360\134\153"
	"\121\137\177\067\164\200\352\141\310\350\231\212\070\265\376\354"
	"\310\077\236\104\156\360\226\304\163\323\103\260\304\237\033\025"
	"\376\233\115\163\033\070\324\344\040\156\156\130\044\154\104\354"
#define      rlax_z	1
#define      rlax	((&data[1260]))
	"\247"
#define      inlo_z	3
#define      inlo	((&data[1261]))
	"\257\127\061"
#define      tst2_z	19
#define      tst2	((&data[1265]))
	"\042\263\147\143\132\003\330\260\270\374\170\007\052\202\162\322"
	"\200\025\020\310\367\137\301"
#define      xecc_z	15
#define      xecc	((&data[1288]))
	"\257\017\113\362\065\327\024\046\257\021\161\244\316\202\302\234"
	"\302\063\312"
#define      chk2_z	19
#define      chk2	((&data[1306]))
	"\042\130\033\210\177\150\017\015\300\173\315\260\005\332\135\101"
	"\301\061\331\032\167\036"
#define      lsto_z	1
#define      lsto	((&data[1328]))
	"\307"
#define      chk1_z	22
#define      chk1	((&data[1332]))
	"\232\271\123\077\060\367\164\024\050\356\177\075\322\147\067\130"
	"\064\041\055\214\201\273\347\264\277\156"
#define      msg2_z	19
#define      msg2	((&data[1355]))
	"\070\005\053\333\013\026\231\263\153\271\014\133\253\311\375\041"
	"\134\262\261\034\124\254"/* End of data[] */;
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
