#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./install 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[1]))
	"\205\045\022\234\255\277\250\231\053\343\302\202\331\356\152\377"
	"\272\027\243\170\257"
#define      shll_z	10
#define      shll	((&data[23]))
	"\042\207\171\216\072\175\361\240\363\132\065\044"
#define      chk2_z	19
#define      chk2	((&data[33]))
	"\375\215\116\327\343\352\311\131\276\330\062\245\216\024\271\026"
	"\246\212\066\111\051\305"
#define      rlax_z	1
#define      rlax	((&data[55]))
	"\203"
#define      lsto_z	1
#define      lsto	((&data[56]))
	"\032"
#define      msg1_z	42
#define      msg1	((&data[65]))
	"\136\214\155\242\164\243\217\305\347\033\015\270\242\207\030\374"
	"\161\072\232\372\323\012\375\351\370\307\154\050\221\340\002\051"
	"\231\033\024\237\247\120\013\251\002\160\163\301\264\167\330\007"
	"\220\333\350\025\164"
#define      date_z	8
#define      date	((time_t*)(&data[112]))
	"\105\121\241\363\253\325\150\172\204\054\267\117"
#define      pswd_z	256
#define      pswd	((&data[122]))
	"\322\257\047\013\374\306\336\006\267\317\235\100\046\152\336\015"
	"\051\116\036\251\342\103\305\236\312\161\246\026\317\044\341\241"
	"\324\010\255\320\317\213\326\206\132\164\307\201\336\245\217\007"
	"\363\255\261\326\360\167\164\273\351\033\321\270\077\263\131\024"
	"\273\007\344\212\222\272\021\355\056\330\157\015\176\376\025\162"
	"\254\306\110\235\075\275\130\047\330\052\337\030\335\071\054\231"
	"\100\021\044\323\313\065\301\372\016\060\010\215\057\035\000\333"
	"\344\110\170\041\006\321\111\336\373\050\367\330\142\044\161\242"
	"\065\225\166\001\313\070\374\332\150\004\147\230\041\147\163\005"
	"\260\353\047\267\274\160\226\270\231\215\220\373\261\002\236\346"
	"\230\025\350\143\115\344\076\266\350\245\116\012\015\301\017\276"
	"\255\067\165\152\250\013\042\101\230\263\075\112\266\333\061\116"
	"\360\031\262\075\376\360\364\346\225\102\360\243\004\000\141\261"
	"\070\326\034\340\342\077\042\173\362\137\305\250\072\367\366\053"
	"\021\251\151\017\231\135\365\056\240\346\322\244\347\063\126\040"
	"\012\162\000\354\261\042\150\244\202\055\114\274\045\103\350\066"
	"\321\274\243\203\051\361\235\073\300\345\231\115\122\073\301\366"
	"\312\207\336\340\374\002\252\300\110\373\167\227\006\170"
#define      inlo_z	3
#define      inlo	((&data[408]))
	"\234\125\271"
#define      opts_z	1
#define      opts	((&data[411]))
	"\040"
#define      msg2_z	19
#define      msg2	((&data[416]))
	"\147\336\062\264\075\065\274\166\153\171\354\112\207\301\162\065"
	"\254\173\374\076\356\110\132\061\156"
#define      tst1_z	22
#define      tst1	((&data[437]))
	"\101\347\032\336\200\117\130\313\043\116\107\030\304\015\323\265"
	"\364\110\354\354\374\027\375"
#define      xecc_z	15
#define      xecc	((&data[460]))
	"\077\307\257\224\206\110\245\237\224\264\210\212\222\105\076\010"
	"\303\271"
#define      chk1_z	22
#define      chk1	((&data[482]))
	"\350\305\251\371\211\170\064\325\200\241\325\105\314\105\064\326"
	"\326\126\352\247\251\360\264\011\347\001\235"
#define      text_z	843
#define      text	((&data[648]))
	"\074\125\362\326\274\321\011\160\002\167\346\052\261\344\060\312"
	"\335\071\216\227\212\115\311\162\023\163\154\261\121\033\252\216"
	"\160\235\144\054\156\155\235\161\345\204\234\226\150\315\141\106"
	"\006\360\335\220\075\247\003\120\032\160\002\153\213\254\372\373"
	"\112\137\050\270\315\305\052\262\112\306\111\262\223\253\371\232"
	"\233\327\053\330\176\057\051\230\237\053\004\052\330\376\045\042"
	"\135\116\333\053\023\005\336\136\314\047\020\140\323\012\372\156"
	"\341\046\107\137\125\160\367\365\234\373\037\165\371\105\230\127"
	"\223\163\202\247\171\140\005\106\210\026\246\133\040\241\311\072"
	"\151\070\163\117\025\073\134\251\110\346\136\015\034\353\015\366"
	"\015\132\116\243\004\205\017\160\365\120\146\077\127\073\117\326"
	"\271\270\164\131\342\067\016\052\070\220\352\100\346\355\373\024"
	"\327\013\000\257\344\366\310\060\150\330\135\071\313\250\311\025"
	"\260\146\261\072\261\222\174\035\007\026\161\004\000\326\204\050"
	"\150\156\376\313\167\253\125\215\212\233\124\020\240\043\256\262"
	"\310\006\003\053\204\304\056\306\305\057\145\042\326\073\372\251"
	"\103\177\274\203\262\070\311\014\247\223\350\323\066\146\202\240"
	"\311\337\066\021\173\326\056\101\252\276\162\324\256\265\177\305"
	"\313\156\064\176\310\200\257\233\116\135\156\075\167\237\121\177"
	"\353\270\152\110\064\237\332\217\045\327\007\363\316\364\312\005"
	"\174\055\157\270\255\317\122\177\025\332\024\075\076\117\116\225"
	"\161\241\353\140\325\324\146\143\372\037\245\245\036\242\301\153"
	"\012\166\122\142\313\276\150\137\327\371\131\037\075\026\205\313"
	"\162\156\353\305\033\222\153\153\150\342\013\164\214\224\027\135"
	"\237\027\027\125\242\270\033\372\302\057\046\311\311\120\144\171"
	"\154\233\125\107\275\353\046\265\211\101\306\123\015\121\125\223"
	"\275\276\141\273\001\345\212\252\255\044\055\320\257\013\053\165"
	"\104\111\370\235\202\054\214\166\362\276\005\366\232\106\356\245"
	"\366\256\123\226\054\240\370\271\142\235\260\303\307\062\307\131"
	"\372\266\203\054\101\252\127\256\235\014\212\175\376\327\171\076"
	"\076\114\024\311\311\213\027\204\322\226\040\374\170\227\047\347"
	"\210\044\037\037\305\054\352\011\362\310\312\054\061\106\306\304"
	"\111\123\004\227\262\006\355\354\306\032\347\256\105\060\117\254"
	"\160\347\375\260\231\226\231\276\274\362\103\002\273\352\211\175"
	"\177\177\354\340\172\137\233\137\056\346\254\004\201\014\164\353"
	"\157\160\020\116\217\153\174\003\335\350\157\146\254\274\173\334"
	"\234\170\356\133\070\272\064\333\365\313\352\061\227\371\200\247"
	"\355\334\102\176\161\123\347\044\366\210\235\062\061\165\040\112"
	"\362\067\030\124\362\005\017\035\053\034\241\111\310\112\014\225"
	"\074\136\327\246\221\041\254\070\131\335\223\001\255\136\330\271"
	"\354\215\101\171\073\340\271\237\233\243\016\026\252\357\100\270"
	"\074\353\204\052\213\337\216\102\225\373\125\060\311\074\211\312"
	"\256\352\307\021\152\255\374\155\253\010\246\066\141\075\057\012"
	"\145\073\211\242\106\262\176\046\261\117\210\122\313\311\137\013"
	"\261\214\312\000\060\243\036\156\057\245\271\270\142\237\350\104"
	"\357\245\152\062\014\113\342\066\312\057\315\370\345\212\213\341"
	"\324\323\377\376\371\302\233\234\327\024\115\375\232\174\110\366"
	"\071\276\053\007\177\346\121\232\006\200\005\125\220\017\163\121"
	"\336\015\371\211\101\247\047\157\214\054\272\355\241\152\171\243"
	"\006\267\117\224\035\245\155\130\353\143\064\247\211\104\300\204"
	"\105\107\211\245\040\367\311\177\145\362\052\177\202\152\074\131"
	"\353\051\226\335\113\247\165\211\226\270\242\037\136\303\170\307"
	"\053\351\106\362\343\315\055\056\367\151\352\154\152\174\115\116"
	"\245\150\204\267\155\036\176\325\104\321\145\315\022\230\121\140"
	"\132\261\030\222\017\036\203\110\377\347\365\050\344\004\231\273"
	"\365\163\353\300\305\100\343\316\073\016\072\141\062\256\310\005"
	"\163\141\117\067\220\361\074\272\244\140\032\326\162\263\043\151"
	"\146\122\124\207\271\323\372\326\023\326\132\370\210\335\212\147"
	"\031\125\314\241\234\275\102\353\007\324\205\021\057\314\067\306"
	"\116\001\272\237\032\274\076\213\176\067\100\162\010\153\025\114"
	"\306\046\165\235\127\065\070\243\173\174\353\167\237\233\143\104"
	"\127\362\344\062\325\367\271\373\147\307\001\310\021\140\035\201"
	"\127\022\036\122\062\223\114\170\053\244\013\237\046\262\031\207"
	"\270\137\020\316\006\153\356\247\065\360\160\106\120\215\310\250"
	"\240\347\373\323\173\107\113\247\354\127\106\023\012\137\232\302"
	"\277\252\220\305\026\177\155\114\157\335\223\300\153\134\150\014"
	"\103\143\337\277\253\053\146\227\202\255\252\214\014\105\116\314"
	"\360\337\221\007\137\376\123\317\333\346\220\107\103\370\123\206"
	"\134\062\105\010\135\254\240\337\131\113\154\146\221\273\062\201"
	"\232\303\210\372\302\334\311\236\303\131\345\006\122\070\215\257"
	"\152\323\270\310\177\130\250\330\244\025\076\065\320\161\267\153"
	"\064\100\145\367\034\057\225\340\211\172\346\334\262\164\213\035"
	"\107\104\346\307\234\216\240\101\243\337\166\164\120\055\337\205"
	"\155\104\174\212\164\021\152\375\213\121\332\075\305\146\133\015"
	"\252\101\325\107\320\165\210"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

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
	unsigned mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned)chkenv;
	mask ^= (unsigned)getpid() * ~mask;
	sprintf(buff, "x%x", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%u %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%u %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

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
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && date[0]<time(NULL))
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
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
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
