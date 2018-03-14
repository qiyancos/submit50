#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./submit50 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[4]))
	"\001\374\372\115\121\350\331\122\107\132\137\057\207\102\222\326"
	"\360\075\070\164\306\271\126\270\265\322\005\345\113\221\241\251"
	"\126\103\112\331\175\320\146\264\176\027\216\276\205\157\151\371"
	"\373"
#define      msg2_z	19
#define      msg2	((&data[49]))
	"\064\242\044\331\055\275\221\131\363\053\366\204\323\224\142\357"
	"\360\047\034\060\277\035"
#define      text_z	945
#define      text	((&data[196]))
	"\252\051\342\126\111\015\133\376\214\374\332\230\016\071\340\017"
	"\066\332\135\240\323\131\112\326\045\173\226\102\112\035\147\364"
	"\106\112\113\217\127\246\216\344\243\150\174\261\242\134\301\331"
	"\067\036\171\013\170\304\341\235\077\170\337\212\225\107\177\334"
	"\222\312\154\352\161\372\316\024\143\113\306\006\250\207\337\337"
	"\246\130\352\036\035\314\274\135\104\234\347\332\343\146\266\166"
	"\061\042\140\242\035\057\267\201\172\175\207\042\005\146\002\254"
	"\277\354\313\334\271\207\071\376\043\041\330\007\210\321\365\071"
	"\014\171\027\044\207\272\201\273\023\077\321\221\374\065\306\251"
	"\143\267\072\331\277\215\261\173\371\067\177\323\334\270\026\340"
	"\032\206\101\206\220\307\104\340\212\061\124\236\340\172\035\313"
	"\344\250\150\375\223\362\171\236\130\063\321\204\207\150\307\035"
	"\220\034\300\036\022\140\166\040\175\333\127\352\062\211\342\272"
	"\344\070\324\226\225\026\105\007\272\035\125\335\067\012\227\214"
	"\370\214\145\274\204\276\205\130\201\114\330\272\165\035\032\031"
	"\344\140\346\141\173\113\133\372\002\053\163\165\147\332\140\057"
	"\160\257\125\315\010\170\123\067\066\275\305\275\163\362\004\056"
	"\330\303\175\125\002\035\223\034\111\017\132\176\212\350\177\223"
	"\337\175\213\015\014\132\203\030\243\117\133\245\141\256\262\154"
	"\335\210\017\067\056\343\347\345\365\137\253\345\162\377\321\316"
	"\176\254\162\122\076\050\077\266\152\244\316\015\277\273\262\226"
	"\234\031\127\224\131\244\264\034\010\171\267\006\230\373\026\020"
	"\144\327\327\170\045\214\330\026\045\250\162\032\147\041\065\156"
	"\061\067\124\056\345\274\353\147\232\212\126\275\176\327\000\250"
	"\251\112\240\235\170\177\105\054\316\022\057\035\315\073\157\153"
	"\147\124\372\173\337\364\355\347\365\060\316\211\305\066\246\305"
	"\373\100\057\133\074\070\150\330\221\171\027\370\063\343\051\047"
	"\106\232\061\345\154\325\367\375\061\022\056\004\250\074\355\150"
	"\377\261\343\151\340\060\051\245\021\315\256\270\263\366\166\327"
	"\305\344\001\153\170\010\213\243\243\051\127\112\333\044\051\343"
	"\155\265\253\350\176\244\171\117\351\176\355\140\334\360\203\347"
	"\136\121\031\120\113\055\262\133\110\160\134\363\374\342\054\355"
	"\012\014\001\205\273\360\211\113\046\331\243\223\166\335\242\010"
	"\122\103\152\060\230\105\236\346\066\341\052\173\222\306\242\236"
	"\232\035\003\030\145\354\227\131\066\131\307\224\171\101\253\367"
	"\152\314\033\207\366\105\057\045\130\170\216\126\065\142\301\344"
	"\356\217\153\372\072\051\066\025\215\072\031\214\137\106\263\251"
	"\126\262\105\111\225\304\107\165\224\305\120\327\160\154\320\356"
	"\220\211\145\104\143\313\155\370\355\376\204\346\054\275\143\323"
	"\005\051\050\353\223\016\372\256\213\166\152\246\065\244\351\356"
	"\217\076\056\343\046\044\203\232\036\363\025\231\052\005\101\045"
	"\021\275\271\243\303\242\004\131\203\077\056\017\154\165\001\100"
	"\147\041\244\023\323\323\161\124\101\172\044\301\205\043\376\023"
	"\026\227\075\102\352\323\236\311\306\345\216\316\223\231\140\031"
	"\252\327\027\210\365\204\115\036\326\060\051\224\050\171\135\371"
	"\351\236\242\377\063\235\346\130\073\112\334\154\111\021\127\112"
	"\217\162\061\330\124\106\160\131\011\241\333\352\272\225\243\051"
	"\100\121\171\103\225\062\355\312\271\022\041\226\101\016\232\357"
	"\212\325\265\353\122\066\336\007\211\110\105\240\320\244\175\114"
	"\164\225\262\212\365\337\372\061\017\200\024\176\033\221\177\077"
	"\267\335\347\267\244\202\170\051\230\310\206\051\063\067\347\261"
	"\235\217\311\303\143\135\022\244\135\134\136\111\166\005\230\321"
	"\037\200\253\315\266\162\034\242\312\104\070\054\246\251\000\373"
	"\302\064\360\107\362\065\354\256\345\251\023\365\255\051\106\024"
	"\214\144\342\253\134\335\117\022\323\200\344\134\244\305\052\067"
	"\105\154\062\146\314\264\267\105\373\127\270\355\303\113\042\334"
	"\064\275\007\110\050\176\320\060\216\364\102\152\115\022\153\015"
	"\051\327\211\201\344\352\060\320\057\241\063\355\150\243\276\202"
	"\306\300\171\221\252\070\374\157\041\225\364\211\316\363\332\302"
	"\214\365\236\170\142\035\335\042\143\006\262\331\077\110\073\234"
	"\207\172\365\161\350\043\356\070\267\046\105\303\103\025\137\326"
	"\166\227\030\025\061\163\261\312\227\035\127\234\123\315\367\314"
	"\206\227\351\075\152\360\352\111\045\215\167\010\002\163\130\216"
	"\267\234\062\132\202\117\357\015\005\367\310\376\217\353\023\265"
	"\040\071\337\240\337\254\037\323\042\213\054\076\107\051\011\163"
	"\115\045\220\274\125\234\345\352\105\252\240\176\122\315\015\356"
	"\120\101\273\101\334\061\221\246\357\356\154\124\275\371\217\175"
	"\271\262\336\134\317\015\023\120\207\220\327\252\226\076\254\102"
	"\375\231\015\331\123\225\023\121\270\065\052\277\275\271\074\166"
#define      lsto_z	1
#define      lsto	((&data[1175]))
	"\045"
#define      shll_z	10
#define      shll	((&data[1176]))
	"\247\045\023\004\062\160\132\231\243\334\213\257"
#define      tst1_z	22
#define      tst1	((&data[1190]))
	"\015\241\232\341\127\207\306\051\203\066\042\144\232\223\063\000"
	"\236\231\312\133\273\321\265\273\006\120"
#define      rlax_z	1
#define      rlax	((&data[1214]))
	"\270"
#define      chk1_z	22
#define      chk1	((&data[1220]))
	"\214\104\253\301\156\173\163\332\121\340\066\144\105\123\255\120"
	"\166\242\242\242\302\041\260\037\263\337\375\152\176\047\247\365"
#define      opts_z	1
#define      opts	((&data[1247]))
	"\231"
#define      tst2_z	19
#define      tst2	((&data[1252]))
	"\132\232\044\275\336\371\252\031\177\163\040\341\211\316\035\021"
	"\246\306\301\136\100\106\211\364\062\137"
#define      chk2_z	19
#define      chk2	((&data[1276]))
	"\232\340\140\313\232\013\144\335\105\105\373\271\041\370\131\207"
	"\006\164\311\123\135\166\214\323\002"
#define      pswd_z	256
#define      pswd	((&data[1331]))
	"\077\351\102\146\220\067\372\122\377\310\075\255\042\327\322\340"
	"\313\004\077\306\206\075\140\146\264\354\071\266\275\270\173\374"
	"\211\155\370\003\202\230\027\073\120\230\255\164\116\225\106\020"
	"\201\106\156\124\345\327\116\314\167\245\142\033\256\143\016\067"
	"\321\007\073\123\240\122\217\361\353\074\145\072\322\254\113\124"
	"\362\271\250\327\221\367\244\010\234\007\043\112\152\062\202\073"
	"\072\276\217\332\021\036\314\374\133\062\067\055\336\203\202\320"
	"\074\053\247\316\042\114\326\277\123\372\012\276\055\214\371\147"
	"\113\211\102\134\250\016\131\003\100\220\061\036\023\264\357\120"
	"\337\226\036\002\343\365\301\066\360\313\364\035\130\356\204\243"
	"\170\307\000\040\326\131\044\027\351\125\066\375\011\045\115\351"
	"\273\154\353\237\141\255\325\121\171\312\157\322\270\363\166\060"
	"\273\166\120\221\317\164\251\271\312\337\266\324\004\004\275\300"
	"\161\251\137\322\126\064\044\320\377\223\242\267\207\030\347\103"
	"\217\070\325\137\255\176\030\167\135\317\114\141\324\012\041\105"
	"\263\201\030\012\266\074\332\265\320\175\154\130\226\124\234\045"
	"\215\161\204\072\357\235\262\114\154\377\256\100\011\320\206\274"
	"\121\236\307\007\333\242\275\254\037\052\004\265\177\240\333\014"
	"\241\276\143\062\366\135\205\365\046\302\243\111\232\165\051\145"
	"\171\150\054\377\246\214\145\132\171\237\021\066\130\214\063\371"
	"\112\227\053\100\365\261\066\034\163\331\145\015\116\216\163\307"
	"\367"
#define      date_z	8
#define      date	((time_t*)(&data[1640]))
	"\054\055\367\245\232\073\151\322\325\237\241\157\314"
#define      inlo_z	3
#define      inlo	((&data[1649]))
	"\106\123\367"
#define      xecc_z	15
#define      xecc	((&data[1652]))
	"\104\263\043\171\266\045\275\072\275\260\041\274\301\222\273"/* End of data[] */;
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
