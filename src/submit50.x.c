#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./submit50 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[6]))
	"\205\213\335\236\136\262\313\110\055\334\125\273\213\006\136\332"
	"\366\050\363\071\172\220\151\252\364\171\230\045\320\243\117\266"
	"\203\200\313\356\133\120\366\325\155\321\311\324\266\244\353\115"
	"\044\253\003\362"
#define      msg2_z	19
#define      msg2	((&data[52]))
	"\171\074\115\152\325\135\161\060\356\106\075\203\112\277\200\057"
	"\261\061\112\247\033\052"
#define      chk2_z	19
#define      chk2	((&data[77]))
	"\066\262\230\270\066\363\305\177\207\321\066\063\325\154\135\065"
	"\307\001\265\337\007\050\344\067\035\352"
#define      inlo_z	3
#define      inlo	((&data[100]))
	"\152\246\304"
#define      tst2_z	19
#define      tst2	((&data[104]))
	"\165\221\031\143\053\327\360\241\374\071\042\113\252\220\275\376"
	"\343\314\200\033\052\054"
#define      text_z	1368
#define      text	((&data[421]))
	"\200\340\103\041\343\365\310\377\040\303\257\033\371\141\264\335"
	"\230\321\307\350\265\317\323\002\135\111\055\212\035\012\333\236"
	"\353\037\277\316\025\210\316\066\113\175\121\105\336\005\043\167"
	"\327\353\140\215\272\063\220\030\175\275\243\232\310\177\070\263"
	"\236\370\202\264\200\120\352\314\315\074\022\254\102\065\044\031"
	"\040\204\247\333\270\067\364\065\365\227\320\276\026\011\162\265"
	"\001\364\152\202\105\124\117\023\221\141\277\323\227\344\355\267"
	"\150\224\223\041\313\207\127\301\036\047\177\065\061\362\353\062"
	"\347\125\265\054\252\004\100\073\146\377\016\375\344\373\265\115"
	"\220\110\156\134\320\306\035\357\355\235\045\037\217\020\121\166"
	"\145\007\243\017\014\343\113\162\343\132\160\307\126\046\024\346"
	"\157\203\102\077\111\137\057\067\375\124\126\214\144\250\003\311"
	"\260\247\331\274\212\044\057\156\176\237\066\324\305\112\272\065"
	"\316\375\164\027\135\243\117\132\367\245\347\134\116\352\046\376"
	"\221\377\272\034\044\352\212\243\211\301\167\117\013\062\205\332"
	"\060\371\362\215\235\101\350\225\347\317\361\066\272\030\064\114"
	"\027\357\150\074\331\363\337\143\264\127\263\300\212\070\233\272"
	"\062\215\107\317\317\057\145\266\377\127\355\271\157\041\005\207"
	"\021\156\303\353\141\243\116\026\267\162\106\066\044\036\152\057"
	"\051\231\204\066\067\056\050\324\113\224\214\012\132\273\311\214"
	"\022\201\226\371\257\001\142\255\134\010\265\314\114\317\253\360"
	"\115\341\172\047\067\233\204\115\044\131\122\245\000\161\100\363"
	"\270\320\136\336\240\036\237\166\075\106\161\037\271\354\157\324"
	"\064\073\226\034\211\210\012\137\015\130\272\321\206\036\106\243"
	"\344\043\227\220\213\301\342\227\364\057\016\061\126\233\062\065"
	"\114\105\034\354\373\340\336\271\004\376\354\253\342\162\361\176"
	"\132\206\102\330\166\302\264\126\047\037\026\347\072\166\154\343"
	"\303\377\314\116\013\134\012\066\053\374\315\304\011\164\113\060"
	"\316\305\201\154\270\305\346\224\105\311\252\034\115\133\154\323"
	"\001\330\205\146\363\347\142\162\022\016\173\363\173\130\170\344"
	"\110\154\131\263\143\171\347\255\115\071\111\240\266\012\215\300"
	"\010\134\074\236\352\376\377\232\212\005\022\161\033\224\177\225"
	"\150\301\120\065\206\110\124\003\267\352\351\137\161\065\211\350"
	"\164\243\065\150\343\251\334\131\170\232\271\322\117\344\011\362"
	"\330\123\013\325\032\323\232\072\225\136\354\104\117\353\102\025"
	"\046\114\324\344\151\072\052\233\053\005\210\065\246\164\256\230"
	"\366\200\075\242\223\065\336\242\137\036\113\313\270\164\045\235"
	"\216\272\361\231\327\230\267\004\330\212\130\003\156\371\366\247"
	"\141\137\147\345\315\206\333\067\055\140\246\333\237\101\051\151"
	"\011\374\051\242\103\327\221\326\175\334\037\034\247\260\172\151"
	"\067\016\036\355\075\211\162\352\270\247\136\313\325\356\271\270"
	"\271\231\324\310\223\163\356\271\173\116\133\242\311\157\146\344"
	"\011\367\224\233\374\061\154\362\200\367\171\265\221\341\263\343"
	"\243\213\010\071\065\000\123\013\063\166\127\242\055\204\125\117"
	"\236\155\346\372\361\023\262\215\151\362\015\152\071\207\233\115"
	"\121\361\211\245\124\344\050\347\206\314\231\261\372\007\134\011"
	"\016\220\333\340\070\025\003\231\161\116\316\266\361\343\155\371"
	"\233\234\152\157\362\236\210\045\337\374\004\276\124\151\354\123"
	"\062\142\247\207\307\130\240\164\163\202\220\340\332\260\017\131"
	"\046\310\162\117\323\357\160\276\105\127\010\124\044\247\114\132"
	"\237\065\155\032\317\040\100\335\376\310\331\237\055\177\103\163"
	"\334\116\226\267\061\363\061\004\111\245\067\170\345\156\325\177"
	"\030\047\246\360\301\353\117\243\375\043\252\121\166\043\105\365"
	"\152\057\214\100\342\163\227\235\003\273\143\226\356\064\346\224"
	"\311\373\333\255\306\133\214\152\052\050\222\302\225\273\031\117"
	"\214\353\220\264\032\234\143\206\210\154\244\204\005\170\330\131"
	"\273\332\034\031\266\315\234\373\004\001\116\372\272\231\036\010"
	"\124\342\165\057\204\031\031\210\247\100\322\057\022\207\046\201"
	"\377\317\112\147\330\303\264\243\105\277\071\205\114\056\354\173"
	"\342\271\227\024\266\340\023\027\301\262\226\157\132\115\034\056"
	"\230\055\264\271\262\070\266\141\311\264\104\264\166\137\221\042"
	"\324\101\245\112\230\210\235\362\001\231\163\361\243\064\042\045"
	"\265\140\100\237\222\210\101\305\175\140\366\076\025\305\344\266"
	"\257\135\066\116\266\261\135\177\303\217\143\145\054\153\037\240"
	"\002\304\017\224\156\056\154\160\262\225\013\373\211\276\270\166"
	"\043\374\160\324\236\161\022\271\016\000\361\012\141\247\170\022"
	"\020\147\050\246\263\301\325\031\151\354\104\173\034\173\074\320"
	"\325\250\340\174\242\233\354\134\253\373\241\010\216\275\213\175"
	"\016\202\146\120\026\310\343\271\370\120\145\266\223\211\246\102"
	"\007\255\211\344\203\127\177\172\254\304\035\076\032\336\070\044"
	"\034\274\051\351\235\242\377\133\135\173\313\350\174\001\077\252"
	"\047\256\224\274\000\247\231\360\266\345\366\064\043\042\367\277"
	"\206\106\003\322\366\076\237\230\311\300\323\352\263\154\227\060"
	"\247\301\170\061\276\255\147\322\064\146\315\324\162\310\337\137"
	"\200\072\150\374\007\163\232\167\213\046\115\360\257\131\131\021"
	"\342\247\360\054\200\325\120\341\201\020\152\060\144\022\233\244"
	"\164\031\316\304\327\161\027\330\221\163\172\037\174\147\277\226"
	"\365\133\117\001\012\070\044\313\126\343\144\157\247\221\243\326"
	"\114\324\112\217\156\130\265\111\247\216\262\135\077\117\225\005"
	"\325\102\111\000\003\125\340\122\363\026\263\273\113\142\106\253"
	"\326\012\166\306\221\006\016\022\105\252\054\227\243\273\215\126"
	"\324\266\322\332\166\163\013\356\240\144\277\127\355\324\167\312"
	"\331\305\211\265\257\000\050\277\206\311\035\244\223\116\110\053"
	"\301\060\043\107\133\361\316\135\236\317\263\040\130\136\344\135"
	"\133\370\237\117\331\317\263\116\117\267\343\105\053\061\122\173"
	"\031\147\305\337\007\267\227\075\101\116\275\262\274\245\146\165"
	"\314\064\201\163\037\344\144\011\156\330\226\125\020\035\062\140"
	"\131\143\121\002\070\216\131\013\156\175\336\273\362\203\071\031"
	"\043\030\345\327\304\245\053\320\256\246\356\160\065\375\176\066"
	"\073\363\314\153\204\016\172\263\206\277\233\365\135\330\046\024"
	"\274\343\157\134\335\136\015\331\162\001\107\261\112\014\005\344"
	"\267\335\107\372\134\050\125\313\137\333\124\103\130\330\115\050"
	"\341\203\101\340\171\216\025\106\062\163\224\273\116\352\254\044"
	"\311\260\204\310\235\344\117\347\341\122\007\214\226\253\117\255"
	"\277\273\143\236\366\071\317\153\076\174\076\012\045\313\011\104"
	"\306\107\060\140\267\337\315\317\003\324\245\245\227\111\336\204"
	"\305\322\234\055\317\203\013\347\006\246\217\322\337\100\037\103"
	"\374\166\211\226\015\334\206\326\372\371\274\101\340\376\032\055"
	"\013\372\106\166\360\324\116\160\372\224\324\145\137\206\351\236"
	"\211\240\367\333\144\306\133\302\110\163\132\364\074\122\201\203"
	"\377\115\063\064\123\366\022\253\120\014\240\317\265\047\032\146"
	"\312\102\253\367\276\104\232\360\303\376\076\015\035\303\171\305"
	"\313\012\072\004\157\216\254\251\036\237\272\123\001\242\257\050"
	"\307\264\302\240\343\376\177\034\241\130\131\135\212\247\073\072"
	"\372\002\327\204\073\162\077\155\377\207\075\317\267\242\206\266"
	"\372\163\157\151\225\165\361\246\343\264\221\105\130\340\134\122"
	"\342\063\327\036\245\026\213\245\235\311\164\124\154\372\013\146"
	"\156\172\320\003\360\301\251\323\166\073\031\316\033\165\041\376"
	"\250\370\034\116\017\250\364\255\161\151\002\335\144\015\103\322"
	"\210\024\326\170\325\177\114\113\273\145\032\327\333\073\326\204"
	"\064\363\322\104\233\307\362\015\061\364\352\225\002"
#define      date_z	1
#define      date	((&data[1898]))
	"\023"
#define      shll_z	10
#define      shll	((&data[1899]))
	"\064\310\042\005\022\136\342\361\370\066"
#define      xecc_z	15
#define      xecc	((&data[1911]))
	"\144\172\154\360\100\040\220\306\352\122\036\106\175\100\237\214"
	"\251\266"
#define      tst1_z	22
#define      tst1	((&data[1928]))
	"\273\325\323\127\205\006\076\110\141\164\024\125\263\127\164\303"
	"\151\302\170\334\344\222\147\047\025\357"
#define      lsto_z	1
#define      lsto	((&data[1953]))
	"\204"
#define      rlax_z	1
#define      rlax	((&data[1954]))
	"\074"
#define      opts_z	1
#define      opts	((&data[1955]))
	"\172"
#define      pswd_z	256
#define      pswd	((&data[1986]))
	"\335\340\250\041\037\254\071\336\375\236\130\263\035\252\105\330"
	"\321\133\310\354\103\374\243\364\043\147\325\077\026\115\111\304"
	"\241\357\315\010\122\257\074\355\344\331\004\315\242\160\163\341"
	"\265\013\066\004\315\360\204\364\361\327\275\057\113\006\364\355"
	"\366\301\365\110\161\062\065\126\014\072\043\257\252\227\221\140"
	"\242\307\144\157\270\351\144\251\300\041\331\014\050\315\372\036"
	"\217\360\146\001\043\234\127\057\326\173\337\201\022\160\341\265"
	"\067\105\044\357\057\211\231\360\253\162\375\323\077\367\362\317"
	"\347\130\320\012\365\050\072\314\243\032\115\266\212\056\153\302"
	"\164\220\262\244\031\113\224\305\275\222\230\375\211\213\314\161"
	"\343\235\174\331\305\266\245\151\320\363\037\133\042\212\036\227"
	"\032\320\073\064\033\320\371\331\142\222\326\354\035\243\135\001"
	"\101\331\332\006\220\200\160\140\164\217\274\226\032\332\056\064"
	"\252\151\150\306\072\142\237\234\364\165\210\021\031\346\023\132"
	"\277\355\141\117\156\321\260\342\141\155\171\173\107\247\257\362"
	"\021\030\270\114\172\127\350\157\315\161\201\347\130\224\101\030"
	"\202\242\147\360\164\030\323\325\205\115\120\315\365\000\277\006"
	"\030\170\122\223\320\073\003\235\255\204\204\005\030\306\134\364"
	"\055\005\025\115\262"
#define      chk1_z	22
#define      chk1	((&data[2250]))
	"\355\115\070\267\137\221\004\155\265\257\266\077\072\122\014\254"
	"\360\371\341\257\303\301\031\203\143\012\055"/* End of data[] */;
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
