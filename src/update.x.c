#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./update 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[2]))
	"\202\254\063\147\044\124\116\106\011\244\012\270"
#define      rlax_z	1
#define      rlax	((&data[12]))
	"\362"
#define      xecc_z	15
#define      xecc	((&data[14]))
	"\146\023\117\375\344\050\367\260\235\123\256\140\300\311\346\147"
#define      tst1_z	22
#define      tst1	((&data[29]))
	"\214\371\103\011\325\034\242\205\251\233\172\233\167\002\257\305"
	"\376\266\045\064\002\057\037\133\063"
#define      inlo_z	3
#define      inlo	((&data[54]))
	"\102\125\207"
#define      lsto_z	1
#define      lsto	((&data[57]))
	"\225"
#define      chk1_z	22
#define      chk1	((&data[63]))
	"\227\116\254\211\212\046\071\275\007\123\336\340\243\331\105\061"
	"\007\200\223\366\324\176\242\042\217\047\213\221\322\015\075"
#define      msg2_z	19
#define      msg2	((&data[92]))
	"\340\006\330\250\157\301\040\035\053\063\351\111\344\322\227\074"
	"\101\276\261\247\034\241\106\200\360"
#define      text_z	831
#define      text	((&data[243]))
	"\007\360\121\312\142\351\301\235\337\210\065\056\064\276\270\305"
	"\221\305\003\023\164\256\363\173\206\072\373\166\016\233\302\025"
	"\213\024\340\356\375\241\213\335\051\301\013\136\200\304\043\021"
	"\212\047\044\376\325\030\171\133\122\165\322\141\020\225\167\234"
	"\251\127\213\247\370\026\204\042\330\217\200\130\124\244\152\336"
	"\313\217\335\241\247\127\374\372\315\317\133\336\145\323\172\017"
	"\052\005\266\043\034\072\105\365\312\306\115\037\152\270\376\066"
	"\107\333\327\356\063\324\350\000\243\104\336\011\027\130\030\102"
	"\136\207\264\344\051\240\251\245\332\164\247\220\355\260\274\232"
	"\053\330\161\110\075\022\357\050\353\162\107\103\370\321\231\164"
	"\340\136\362\201\366\140\071\320\146\275\075\331\010\116\051\152"
	"\344\237\215\131\123\012\260\074\076\104\350\142\245\245\311\237"
	"\136\045\005\100\232\312\162\351\330\171\135\007\136\047\111\101"
	"\123\025\164\352\075\165\302\026\325\156\353\365\226\272\167\112"
	"\261\375\025\131\032\227\105\274\255\352\121\166\175\205\261\052"
	"\160\273\155\056\063\255\136\066\156\305\333\147\262\307\200\360"
	"\117\243\077\037\072\137\346\042\015\020\064\060\056\375\154\230"
	"\357\176\373\103\361\305\020\115\213\202\010\201\101\107\020\237"
	"\025\001\234\215\132\351\347\212\271\061\000\126\047\077\016\362"
	"\151\223\360\106\034\300\062\347\231\131\003\133\255\122\017\054"
	"\217\175\056\103\020\224\053\272\013\177\072\220\211\337\326\266"
	"\247\275\345\254\301\362\314\210\053\042\365\200\034\272\200\167"
	"\167\165\050\355\026\272\177\017\012\337\265\046\252\067\011\365"
	"\250\212\335\163\012\145\315\244\251\015\267\226\041\110\276\235"
	"\251\231\374\133\010\074\136\233\300\244\131\367\140\020\242\021"
	"\310\146\054\230\274\211\145\323\251\311\376\345\276\220\316\227"
	"\166\245\307\007\144\046\354\324\070\156\316\140\123\330\126\247"
	"\373\005\307\347\027\341\215\371\074\176\104\362\101\207\377\017"
	"\131\051\210\150\063\241\266\267\371\372\025\011\210\146\373\024"
	"\321\237\073\077\302\016\377\254\212\013\163\014\031\006\220\200"
	"\135\220\005\165\230\256\231\042\340\331\144\237\033\264\243\246"
	"\206\307\127\024\365\370\337\021\114\172\106\357\255\121\077\110"
	"\050\353\226\302\114\052\112\037\366\177\066\267\212\202\051\030"
	"\026\011\061\037\266\105\265\216\056\354\074\351\315\323\254\075"
	"\146\153\141\367\351\006\031\174\120\361\114\365\025\101\055\030"
	"\221\041\326\260\014\223\054\122\227\260\211\126\045\235\054\316"
	"\345\270\111\052\342\044\353\167\171\005\015\333\206\310\236\263"
	"\305\201\160\146\213\005\353\330\134\021\116\050\366\131\171\260"
	"\000\115\107\045\175\303\276\267\373\365\167\267\223\115\370\113"
	"\154\271\021\160\050\273\257\025\064\361\103\326\374\021\024\000"
	"\274\155\277\172\141\051\037\365\160\136\123\135\362\176\061\351"
	"\346\363\133\176\364\215\123\004\312\133\117\070\176\032\155\137"
	"\137\256\334\324\273\102\017\100\222\333\175\374\337\171\152\052"
	"\255\255\034\031\042\321\331\132\262\223\155\362\004\313\263\172"
	"\136\024\341\273\370\352\167\234\172\065\171\226\137\256\204\322"
	"\255\171\105\201\003\027\211\112\241\261\266\124\046\100\376\057"
	"\011\075\025\204\022\150\340\010\242\131\177\205\161\376\345\351"
	"\130\161\020\057\071\214\273\162\056\217\134\016\073\205\127\337"
	"\200\113\004\301\217\046\012\264\120\160\200\360\124\331\275\153"
	"\124\023\221\152\215\355\113\306\115\022\341\340\014\262\124\202"
	"\157\345\341\005\043\362\042\015\336\335\246\234\206\240\313\113"
	"\343\351\170\065\057\255\153\033\163\323\142\116\316\012\131\071"
	"\263\326\351\173\166\147\253\061\134\115\131\106\006\141\007\120"
	"\126\311\063\327\062\014\132\135\303\065\102\324\321\153\273\273"
	"\001\102\340\270\123\375\126\011\151\133\315\340\022\311\305\356"
	"\026\313\100\107\023\306\206\174\331\027\055\121\251\004\043\071"
	"\244\125\333\111\135\022\345\133\336\047\052\265\011\036\351\004"
	"\334\042\125\131\026\254\107\045\067\070\061\023\004\340\114\344"
	"\161\340\033\011\314\017\265\263\351\152\143\246\133\232\045\110"
	"\310\051\167\213\171\317\212\063\256\037\001\204\112\127\101\054"
	"\316\145\173\011\253\161\324\161\277\363\334\167\361\022\276\315"
	"\351\255\000\275\225\000\141\332\336\153\362\067\203\064\226\122"
	"\232\022\134\105\203\061\267\102\045\223\271\026\245\167\344\217"
	"\044\344\115\272\345\257\225\304\032\207\373\236\274"
#define      opts_z	1
#define      opts	((&data[1135]))
	"\023"
#define      tst2_z	19
#define      tst2	((&data[1137]))
	"\047\174\126\360\321\337\106\047\347\272\064\163\073\064\007\101"
	"\300\134\134\076\176\123\151"
#define      chk2_z	19
#define      chk2	((&data[1163]))
	"\272\213\233\236\026\124\163\346\015\373\352\373\173\211\206\143"
	"\160\325\370\140\335\117\301"
#define      msg1_z	42
#define      msg1	((&data[1190]))
	"\150\172\151\027\020\055\062\230\271\224\203\216\313\377\216\366"
	"\157\042\342\306\034\110\265\346\326\363\060\155\216\043\167\245"
	"\275\027\356\273\346\104\271\055\077\264\363\054\032\046\275\271"
	"\310\034\050\320\124\273\300"
#define      pswd_z	256
#define      pswd	((&data[1261]))
	"\106\206\214\231\360\057\200\024\351\014\257\210\047\157\013\217"
	"\352\164\247\372\242\331\222\313\237\053\230\152\072\007\214\013"
	"\016\306\356\040\251\267\021\140\026\377\137\200\035\031\211\256"
	"\225\235\016\235\125\103\122\365\156\353\137\250\362\354\264\000"
	"\262\243\040\133\132\062\274\161\061\033\361\117\064\172\375\312"
	"\030\014\147\155\117\272\143\275\246\303\146\230\257\033\231\141"
	"\276\272\275\031\355\171\212\037\225\174\156\312\367\153\224\017"
	"\167\373\175\306\266\340\204\134\243\352\365\123\006\217\265\304"
	"\112\162\336\067\354\150\127\202\345\305\114\334\061\340\353\251"
	"\334\151\160\223\111\364\357\355\337\345\100\345\164\365\252\276"
	"\150\210\366\124\361\116\326\326\023\042\262\104\003\236\356\340"
	"\007\136\163\120\122\142\076\062\110\176\027\274\164\301\173\334"
	"\111\162\060\073\300\007\021\323\052\303\030\055\142\006\016\151"
	"\145\201\272\270\344\370\352\054\167\001\351\353\303\144\307\015"
	"\327\370\110\227\000\131\153\052\035\204\130\177\213\146\351\360"
	"\350\244\250\314\234\222\371\024\224\342\377\130\107\307\146\036"
	"\300\256\266\300\010\041\352\046\245\103\246\060\251\217\041\222"
	"\063\311\136\320\134\130\344\361\251\347\206"
#define      date_z	1
#define      date	((&data[1520]))
	"\163"/* End of data[] */;
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
