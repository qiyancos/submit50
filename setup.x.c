#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./setup 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\320"
#define      shll_z	10
#define      shll	((&data[2]))
	"\046\314\215\256\326\043\046\221\257\247\377\243\362"
#define      tst1_z	22
#define      tst1	((&data[18]))
	"\260\370\243\324\157\147\013\225\342\344\165\062\126\375\357\357"
	"\156\120\070\213\111\014\364\127\063\322\367\015\205"
#define      msg2_z	19
#define      msg2	((&data[43]))
	"\331\227\260\314\113\112\160\105\212\243\116\001\163\202\175\303"
	"\020\145\076\066"
#define      opts_z	1
#define      opts	((&data[63]))
	"\003"
#define      tst2_z	19
#define      tst2	((&data[64]))
	"\243\013\333\371\352\311\156\071\072\111\324\374\332\013\056\102"
	"\035\275\351\262"
#define      xecc_z	15
#define      xecc	((&data[87]))
	"\173\034\026\177\240\131\030\167\371\167\032\002\202\010\256\164"
	"\040\223\165"
#define      inlo_z	3
#define      inlo	((&data[103]))
	"\354\154\052"
#define      text_z	4815
#define      text	((&data[619]))
	"\165\145\223\112\134\241\317\376\245\057\064\105\215\251\057\260"
	"\341\341\022\310\127\216\345\156\003\050\050\154\355\226\134\143"
	"\373\360\255\127\221\174\126\066\254\212\173\071\064\253\351\025"
	"\214\374\336\344\212\304\123\216\354\173\372\332\022\126\075\015"
	"\106\352\145\330\146\273\016\022\106\212\114\173\065\066\221\302"
	"\062\157\246\274\064\371\112\040\165\105\372\210\233\067\225\342"
	"\042\373\272\210\267\311\233\375\124\347\171\212\035\012\115\117"
	"\172\363\014\256\355\127\317\143\234\312\353\070\001\201\033\043"
	"\174\326\254\064\237\110\062\364\057\253\177\115\266\314\235\060"
	"\300\251\337\256\001\256\021\236\170\375\326\172\177\361\236\374"
	"\307\113\060\147\223\142\134\303\016\333\020\304\250\255\365\150"
	"\127\324\026\130\203\050\366\374\046\315\167\245\277\026\241\207"
	"\141\321\356\365\064\113\270\102\047\310\007\317\166\374\070\315"
	"\321\117\046\125\167\035\121\235\352\311\102\251\337\344\060\101"
	"\265\037\066\352\153\356\054\222\266\063\142\054\060\233\372\001"
	"\352\040\127\141\076\251\377\050\162\101\322\121\046\002\222\334"
	"\042\310\306\215\267\363\040\155\047\203\232\127\036\225\131\010"
	"\266\260\152\364\131\151\034\313\253\357\035\321\362\260\255\024"
	"\171\163\242\060\147\303\236\216\106\071\345\145\316\077\156\204"
	"\357\330\171\111\101\226\024\355\205\062\276\167\342\154\214\134"
	"\340\056\214\107\362\053\325\071\144\273\236\062\372\014\267\351"
	"\345\061\062\047\307\107\024\114\172\322\303\135\077\120\271\037"
	"\176\106\146\160\161\073\251\325\367\110\010\361\125\300\332\072"
	"\361\015\141\270\125\165\005\317\110\311\054\207\031\346\247\230"
	"\054\015\010\235\111\262\163\100\373\173\061\120\074\014\213\055"
	"\032\354\346\157\142\353\077\253\265\154\063\316\123\332\146\177"
	"\350\157\035\061\042\220\162\035\014\243\155\110\260\371\166\312"
	"\345\134\072\110\110\172\364\375\346\047\313\071\001\062\271\352"
	"\241\327\033\304\150\215\341\164\061\117\275\341\110\063\254\056"
	"\220\347\167\330\142\153\326\111\222\241\202\224\324\074\176\166"
	"\023\232\072\173\047\034\360\131\153\256\073\264\342\350\342\162"
	"\317\131\113\062\304\041\173\127\303\376\354\227\072\153\015\116"
	"\005\347\146\365\020\354\044\111\356\302\057\311\220\333\053\331"
	"\024\276\020\203\122\030\015\334\045\211\221\100\262\007\235\257"
	"\306\270\140\315\364\153\350\161\256\223\233\204\065\343\212\316"
	"\011\124\132\022\361\120\302\115\037\156\151\135\337\274\373\216"
	"\135\300\035\276\123\172\166\173\001\015\272\044\042\324\232\046"
	"\101\034\033\076\071\320\067\024\250\017\220\365\346\151\157\140"
	"\334\253\220\322\131\240\144\172\036\136\274\364\105\063\176\135"
	"\322\321\344\316\313\154\202\305\145\122\053\157\314\225\165\154"
	"\347\212\374\307\342\022\206\240\153\311\303\335\262\237\246\272"
	"\151\346\340\201\357\176\204\377\373\072\347\237\130\202\321\100"
	"\137\054\131\011\264\162\201\241\027\155\307\120\266\340\004\244"
	"\275\244\266\111\106\061\070\346\213\212\152\067\031\127\273\301"
	"\113\013\075\315\131\211\357\037\126\153\344\120\324\262\363\111"
	"\350\015\101\004\330\155\375\030\057\054\144\343\267\143\302\140"
	"\136\360\220\357\010\313\114\001\162\200\024\154\030\025\136\143"
	"\043\052\200\176\004\324\240\204\043\327\253\311\372\140\374\154"
	"\005\356\252\235\116\151\354\366\150\154\263\115\100\223\267\035"
	"\350\334\261\143\260\170\037\221\327\246\121\222\376\217\072\366"
	"\254\043\025\340\040\177\313\255\207\044\133\333\022\207\006\171"
	"\331\244\200\050\350\254\324\232\077\055\052\067\157\030\222\323"
	"\242\345\354\101\037\122\153\301\372\031\067\317\216\021\345\056"
	"\331\056\371\147\356\345\037\272\275\013\300\112\010\277\250\346"
	"\054\147\362\302\347\316\133\265\065\366\257\276\112\042\051\202"
	"\071\357\276\122\113\027\075\144\251\021\062\010\105\334\006\017"
	"\072\213\036\216\153\067\076\105\071\025\275\034\322\237\201\302"
	"\325\344\064\204\212\045\264\241\347\077\356\237\361\153\060\120"
	"\362\015\040\317\033\334\261\271\342\237\301\022\057\056\240\001"
	"\024\166\061\346\345\046\064\355\026\036\251\253\017\166\317\173"
	"\220\251\267\325\222\056\110\302\162\206\162\226\020\106\103\211"
	"\355\245\200\153\160\327\144\116\040\076\064\171\325\370\261\004"
	"\142\134\217\254\251\176\162\034\172\130\240\240\377\056\201\344"
	"\064\276\134\161\131\176\152\107\157\367\252\062\223\237\204\131"
	"\011\030\035\123\023\152\037\011\151\114\126\252\245\114\124\153"
	"\344\251\127\275\325\076\320\077\277\376\325\105\345\025\133\340"
	"\033\134\052\262\012\375\361\057\066\243\306\115\254\173\320\000"
	"\225\240\323\145\107\215\246\062\101\114\316\113\254\304\237\162"
	"\167\040\237\261\030\310\375\177\167\075\013\204\310\257\273\073"
	"\352\174\044\112\122\305\245\021\202\373\051\037\273\146\026\352"
	"\175\240\026\144\317\055\344\203\123\042\373\220\201\263\115\075"
	"\245\204\134\032\007\366\014\074\245\332\060\356\323\205\012\052"
	"\376\022\070\346\127\342\074\060\142\024\022\004\012\114\157\033"
	"\071\324\054\156\107\223\326\014\060\263\150\336\174\345\375\277"
	"\114\071\040\215\022\176\314\053\170\023\237\335\236\362\035\050"
	"\107\354\033\244\321\234\207\101\162\252\027\215\016\100\112\135"
	"\014\363\351\022\275\257\312\336\152\373\075\241\356\232\305\352"
	"\062\314\236\346\313\233\033\023\226\045\053\045\262\342\345\167"
	"\231\373\026\364\220\153\254\127\305\162\207\010\260\013\374\325"
	"\175\235\373\121\013\027\075\132\003\104\161\261\220\305\173\213"
	"\111\142\210\213\035\365\362\010\023\270\241\052\161\366\133\310"
	"\017\133\251\236\027\301\026\244\261\131\136\004\026\323\154\243"
	"\315\164\206\062\210\335\137\335\145\044\142\006\010\266\311\203"
	"\061\063\365\143\104\302\027\134\004\055\076\114\251\133\174\314"
	"\174\012\172\053\026\164\116\056\067\310\264\201\150\353\161\277"
	"\246\013\037\120\003\046\070\140\315\265\110\037\333\133\031\301"
	"\240\353\030\266\233\052\241\176\146\346\004\243\072\254\001\076"
	"\234\367\117\007\101\124\353\226\201\204\240\221\251\331\311\343"
	"\357\316\353\315\040\047\370\026\024\163\333\176\015\176\136\372"
	"\126\022\273\223\156\061\326\143\105\345\136\220\327\113\046\233"
	"\312\313\024\176\237\120\304\050\053\337\374\323\051\142\305\325"
	"\135\245\170\267\125\143\011\136\260\162\377\231\374\010\123\041"
	"\077\310\371\224\131\226\016\313\137\177\225\351\344\375\040\060"
	"\160\366\053\354\153\337\335\257\226\116\335\063\065\114\003\337"
	"\246\206\151\077\245\057\001\252\056\221\163\321\025\261\005\253"
	"\302\255\367\313\351\274\207\207\053\224\172\031\233\002\157\151"
	"\272\034\314\042\115\041\304\104\235\043\302\031\325\032\065\002"
	"\144\211\206\023\003\127\230\034\311\032\107\320\221\002\073\213"
	"\067\170\002\106\144\027\206\020\101\233\002\002\070\165\177\031"
	"\166\305\261\150\055\302\077\350\364\162\205\114\331\355\354\076"
	"\366\055\200\336\113\147\024\201\360\342\175\226\345\241\175\063"
	"\222\074\320\253\300\323\153\174\217\205\012\350\306\147\276\332"
	"\326\022\140\250\330\346\001\344\134\262\151\334\017\317\310\256"
	"\274\012\115\254\351\020\251\316\146\341\244\111\340\330\056\030"
	"\242\345\125\304\035\131\024\012\064\043\066\243\113\332\057\305"
	"\116\250\266\054\131\015\155\130\123\170\232\310\300\244\055\024"
	"\014\331\013\217\150\317\260\313\353\227\337\140\165\237\132\126"
	"\203\264\046\124\033\266\217\022\366\030\023\370\032\077\300\141"
	"\021\344\067\043\031\257\361\243\275\020\244\034\201\047\337\061"
	"\031\037\272\054\223\256\162\352\075\242\025\167\021\120\111\170"
	"\113\373\257\143\117\344\245\231\023\175\327\207\137\203\055\156"
	"\154\243\171\272\256\027\114\270\161\271\011\147\033\032\236\157"
	"\325\230\002\132\012\244\337\352\252\074\367\275\105\314\057\250"
	"\166\073\354\343\136\176\251\276\057\313\312\043\075\000\340\012"
	"\165\235\137\350\305\360\130\010\001\365\151\045\266\252\070\010"
	"\025\030\244\041\226\364\027\053\004\206\050\004\152\137\065\234"
	"\311\031\306\001\247\150\364\060\177\072\216\240\353\324\062\110"
	"\166\376\316\313\277\242\041\036\053\232\216\240\270\160\002\035"
	"\356\317\155\006\043\015\225\075\263\026\336\262\375\167\053\166"
	"\301\125\205\054\260\036\210\146\127\374\003\277\016\251\054\301"
	"\207\327\070\070\300\076\140\346\123\312\312\121\261\266\155\213"
	"\337\007\213\115\041\360\244\226\047\354\140\157\067\355\116\333"
	"\276\130\124\121\221\274\107\231\156\227\053\262\252\070\067\021"
	"\124\134\314\200\014\150\341\331\205\220\052\043\273\253\356\100"
	"\017\365\037\055\064\015\361\307\077\273\211\247\040\055\070\152"
	"\212\303\347\354\121\313\353\243\340\005\122\031\214\205\302\233"
	"\211\345\342\215\115\007\106\362\355\176\127\103\136\235\237\117"
	"\116\111\123\354\101\047\177\123\237\301\070\207\166\002\274\040"
	"\315\171\333\016\140\156\363\064\072\047\237\126\363\056\315\271"
	"\225\053\323\202\336\145\371\314\026\010\217\063\032\312\333\067"
	"\212\346\254\213\144\141\237\330\255\163\100\044\340\357\161\123"
	"\013\077\320\065\033\155\317\267\120\062\022\206\213\165\114\333"
	"\347\044\364\046\173\122\213\020\160\247\375\355\256\276\323\051"
	"\016\005\000\071\126\231\057\003\070\165\165\242\317\262\376\317"
	"\207\217\160\371\066\014\223\332\151\126\021\303\063\244\310\331"
	"\374\150\215\131\022\362\250\303\111\100\370\161\024\132\060\102"
	"\271\045\340\327\261\037\070\215\365\012\073\033\337\343\153\220"
	"\127\001\354\324\345\215\260\003\344\126\212\351\023\353\266\266"
	"\210\120\367\354\222\164\312\215\165\324\222\134\246\123\144\144"
	"\260\005\232\352\231\221\233\264\276\347\140\044\214\020\343\112"
	"\321\264\023\337\173\303\245\165\265\016\335\264\166\203\102\352"
	"\120\236\301\040\263\004\327\165\062\153\175\006\102\236\263\314"
	"\336\044\114\045\243\075\362\274\065\101\125\133\105\174\306\364"
	"\270\257\311\112\000\243\237\204\052\165\237\214\163\076\116\207"
	"\066\301\315\220\253\263\272\150\041\120\346\356\011\267\365\254"
	"\361\137\235\045\214\077\210\370\337\301\241\124\331\061\117\127"
	"\104\130\326\377\242\201\061\031\235\232\213\346\072\260\245\147"
	"\014\056\113\064\346\176\015\366\054\176\375\102\171\025\225\037"
	"\032\361\272\162\257\223\052\305\312\001\002\377\056\312\356\346"
	"\032\106\307\110\372\273\347\322\354\016\351\255\162\230\114\371"
	"\032\122\232\366\021\144\151\027\135\212\000\132\237\356\366\000"
	"\366\316\123\360\233\116\040\241\313\156\113\337\314\332\020\252"
	"\252\024\116\277\123\015\224\246\043\137\031\254\215\327\247\203"
	"\112\312\235\326\364\207\322\271\300\023\217\102\230\307\043\322"
	"\165\354\104\352\221\010\136\355\026\360\067\355\203\050\041\066"
	"\121\210\206\232\034\002\373\141\026\135\071\033\156\331\045\105"
	"\055\171\034\365\326\004\063\300\055\056\052\051\352\076\340\110"
	"\233\014\215\265\154\337\035\315\037\206\316\013\163\247\277\312"
	"\152\071\000\111\277\117\136\015\074\355\333\044\165\264\017\067"
	"\247\205\252\345\047\102\057\236\235\147\222\211\372\130\303\024"
	"\125\242\243\262\317\364\325\144\234\254\246\020\325\171\342\117"
	"\012\303\056\313\050\145\236\077\107\012\206\003\171\332\033\046"
	"\046\210\305\101\034\210\003\157\301\064\271\310\102\227\275\377"
	"\206\122\353\014\002\371\342\356\101\017\340\225\032\212\210\265"
	"\351\050\232\154\242\115\033\127\221\076\246\100\325\241\261\272"
	"\272\236\073\212\160\064\144\004\026\310\251\263\164\042\376\136"
	"\317\043\247\306\000\245\131\213\365\267\263\311\022\341\132\175"
	"\230\047\336\104\031\044\254\142\057\057\072\036\157\010\166\221"
	"\232\246\016\361\110\230\172\257\015\350\133\112\067\103\373\277"
	"\277\141\024\067\145\040\321\357\365\263\115\227\136\102\234\161"
	"\376\166\334\044\310\227\122\310\112\353\137\030\265\165\006\315"
	"\067\001\332\376\204\203\253\223\222\062\031\072\152\253\200\305"
	"\315\343\215\177\146\117\331\030\352\322\300\025\325\106\330\054"
	"\031\243\351\270\143\006\331\277\210\005\225\347\272\027\374\230"
	"\231\003\242\320\130\343\237\021\320\026\261\272\111\270\131\074"
	"\166\375\036\062\341\107\340\141\004\313\247\215\025\163\344\206"
	"\227\050\235\050\047\164\035\121\261\245\251\364\116\120\147\027"
	"\107\016\142\075\336\372\076\131\335\056\365\176\134\057\165\321"
	"\073\024\305\046\227\124\037\055\105\247\122\346\237\337\071\166"
	"\370\370\321\310\140\022\042\205\366\026\107\375\113\156\230\272"
	"\047\017\014\040\115\255\230\250\313\214\335\361\047\124\321\344"
	"\044\333\142\351\246\345\125\256\340\161\356\015\070\165\364\067"
	"\153\340\206\143\200\120\264\335\016\172\024\300\123\112\302\271"
	"\342\202\100\120\340\336\205\003\151\211\251\207\272\256\365\344"
	"\120\245\352\014\353\047\361\355\376\315\352\035\377\013\314\202"
	"\311\237\065\222\263\175\341\144\060\271\316\017\035\073\057\225"
	"\015\261\111\024\164\354\125\360\170\020\150\373\372\173\262\123"
	"\242\137\007\226\034\066\171\216\172\222\102\165\163\020\024\220"
	"\333\150\105\111\241\322\260\141\154\216\260\202\250\112\216\376"
	"\326\021\357\272\366\133\200\307\215\345\357\165\240\212\324\224"
	"\115\044\267\245\341\154\263\247\342\305\351\161\036\007\222\151"
	"\170\002\353\222\113\057\034\372\320\303\356\152\060\115\255\024"
	"\021\127\165\371\060\250\202\216\175\216\166\004\224\040\345\111"
	"\252\243\040\221\332\237\350\002\071\105\227\350\106\314\344\203"
	"\004\141\032\235\342\317\225\307\346\300\327\237\266\357\075\277"
	"\231\004\140\123\176\254\370\063\160\046\167\262\366\140\272\166"
	"\010\345\260\000\223\025\012\227\226\064\375\365\031\154\134\106"
	"\060\127\311\046\112\047\222\165\324\255\204\344\164\217\015\316"
	"\300\004\110\247\260\070\251\240\161\060\202\200\254\265\340\061"
	"\136\044\002\226\105\260\176\111\202\123\125\357\147\133\160\036"
	"\077\235\244\207\166\030\337\065\242\352\315\075\035\351\361\001"
	"\231\241\261\301\057\335\237\067\302\023\153\302\301\043\234\247"
	"\253\017\253\152\220\025\071\107\162\176\327\005\052\233\125\132"
	"\337\276\156\333\202\127\311\174\153\055\121\373\100\143\371\043"
	"\247\302\255\160\370\161\170\307\265\053\153\301\011\136\162\030"
	"\124\031\110\166\275\205\046\167\017\112\241\342\161\377\262\116"
	"\355\015\216\217\351\312\334\101\063\102\307\336\077\236\311\273"
	"\144\217\002\124\315\125\073\012\275\000\337\344\270\214\352\057"
	"\325\030\320\137\223\034\337\365\230\346\032\225\226\255\236\000"
	"\065\036\312\232\117\317\305\371\375\347\036\221\361\075\103\306"
	"\074\265\254\303\151\353\246\162\377\144\351\335\060\344\237\323"
	"\143\241\343\320\075\207\155\364\073\113\206\335\177\051\007\140"
	"\343\000\353\303\062\220\073\053\201\156\043\264\332\203\273\055"
	"\336\304\274\374\372\122\306\043\070\117\117\323\024\300\010\244"
	"\327\247\333\350\060\376\165\203\217\113\342\375\301\111\272\171"
	"\036\101\266\230\354\031\260\261\104\145\251\345\331\031\034\244"
	"\070\352\015\374\305\104\246\021\264\042\024\262\246\125\076\034"
	"\344\304\205\273\364\153\242\203\247\362\360\227\311\115\024\166"
	"\147\031\016\146\330\063\261\024\074\023\161\070\017\370\357\253"
	"\305\276\372\117\321\044\040\010\374\262\374\126\374\337\170\020"
	"\355\221\102\014\015\023\151\313\221\151\203\210\046\245\244\334"
	"\024\362\060\105\362\366\104\321\216\126\241\370\026\220\354\135"
	"\210\373\200\201\247\145\056\133\256\225\324\026\114\073\310\232"
	"\353\227\342\151\211\277\257\372\364\231\053\066\255\150\252\252"
	"\245\267\334\107\060\003\170\361\261\363\055\020\341\222\274\277"
	"\177\034\132\005\354\107\031\053\071\256\117\052\263\076\167\170"
	"\242\324\064\040\260\372\340\343\162\315\344\175\044\071\207\344"
	"\036\035\310\250\370\234\217\064\136\204\117\357\026\051\175\045"
	"\020\212\223\222\170\263\030\130\054\276\246\020\363\050\134\206"
	"\037\064\264\113\265\343\206\250\303\300\103\114\174\171\211\010"
	"\163\274\015\045\354\257\265\360\006\051\107\020\233\126\152\346"
	"\165\160\121\240\205\074\163\365\254\215\173\204\167\361\360\036"
	"\077\314\000\372\207\236\114\356\171\301\066\321\101\236\051\112"
	"\227\250\205\323\036\206\324\055\265\042\111\053\026\234\213\051"
	"\355\062\274\073\162\324\172\015\244\076\277\043\154\012\112\371"
	"\310\075\034\136\214\071\367\136\356\306\223\157\074\114\061\312"
	"\250\145\207\365\231\323\165\316\335\344\364\037\011\141\272\250"
	"\245\145\270\233\246\053\321\306\170\003\332\213\152\235\375\143"
	"\171\073\063\232\016\027\161\124\036\136\245\325\301\150\257\123"
	"\312\066\347\210\045\232\310\123\020\313\264\302\134\117\207\250"
	"\342\022\061\256\320\341\242\362\272\203\000\261\073\031\243\327"
	"\242\035\014\323\304\100\326\213\105\064\105\050\237\135\027\107"
	"\312\141\106\262\104\053\125\332\106\355\365\130\062\302\261\241"
	"\174\253\237\223\112\331\025\220\072\155\166\360\156\123\252\165"
	"\264\276\303\175\026\164\366\367\351\204\061\002\147\075\360\123"
	"\074\037\154\370\317\057\122\373\053\034\201\016\116\122\277\215"
	"\103\003\307\360\343\100\365\026\147\073\201\003\200\360\240\223"
	"\341\010\326\037\351\173\230\075\367\362\365\211\153\170\005\267"
	"\005\266\343\032\355\034\315\121\122\334\257\026\074\203\323\373"
	"\322\241\301\203\161\347\307\040\052\211\016\117\100\275\133\252"
	"\041\272\022\135\004\350\335\124\046\141\251\225\056\354\144\317"
	"\205\327\327\110\010\312\010\046\140\244\237\206\267\127\036\154"
	"\306\234\264\001\201\076\115\026\344\375\154\346\241\160\115\104"
	"\143\307\156\251\245\207\375\146\176\207\170\066\064\232\231\304"
	"\026\176\304\354\116\312\155\223\133\132\013\327\011\027\346\074"
	"\272\013\335\351\237\057\075\071\131\011\144\320\145\311\271\316"
	"\045\332\137\164\063\106\355\214\317\263\155\115\370\254\065\075"
	"\113\110\142\022\253\041\065\127\211\206\260\030\142\263\276\323"
	"\240\213\003\167\043\001\161\014\161\225\224\303\274\275\006\153"
	"\045\134\340\101\367\335\115\166\002\351\227\362\074\371\155\017"
	"\071\070\033\153\035\323\051\146\247\323\364\016\365\113\013\012"
	"\101\040\115\301\171\063\253\132\011\057\114\032\023\055\060\037"
	"\374\005\370\023\303\163\320\174\330\175\173\103\234\142\342\062"
	"\367\227\171\065\231\172\037\176\000\214\075\301\364\135\223\357"
	"\046\123\033\373\060\072\152\357\332\314\077\143\363\102\266\044"
	"\000\200\275\037\161\040\026\057\130\271\276\023\342\256\061\376"
	"\120\154\272\360\306\322\110\232\212\334\062\272\067\372\363\050"
	"\362\261\101\013\320\151\132\326\303\151\215\011\245\154\252\302"
	"\324\257\140\313\040\241\333\342\346\063\264\141\116\160\127\242"
	"\343\303\253\310\331\237\235\110\363\223\055\256\120\246\275\004"
	"\164\300\003\154\050\047\323\024\162\363\135\337\301\364\004\333"
	"\027\072\364\206\123\104\307\153\146\261\042\127\342\170\015\367"
	"\004\364\333\022\040\053\125\025\075\315\063\233\300\025\361\114"
	"\130\346\272\357\174\066\224\206\303\066\161\133\320\156\230\336"
	"\334\271\367\025\235\215\021\236\005\350\160\232\211\050\130\353"
	"\330\013\214\002\104\207\117\112\376\377\271\251\025\337\111\125"
	"\310\135\257\226\323\265\034\365\101\367\060\201\146\050\126\151"
	"\237\124\052\234\271\271\067\323\117\205\370\355\363\120\173\004"
	"\136\244\117\022\262\105\231\026\247\142\107\201\113\314\235\145"
	"\151\072\055\117\271\252\125\141\071\034\142\106\052\170\137\215"
	"\315\271\064\162\234\065\004\152\313\162\165\167\177\025\041\047"
	"\253\031\155\072\321\124\203\041\020\310\002\240\311\347\206\377"
	"\177\200\171\020\224\024\354\163\132\021\374\301\110\024\032\306"
	"\056\265\147\131\363\065\105\363\351\267\244\247\327\212\220\036"
	"\346\237\317\025\303\017\273\013\264\136\077\213\010\307\307\103"
	"\244\173\134\033\335\113\152\120\220\025\057\070\033\013\074\260"
	"\003\140\106\050\331\114\106\330\322\126\350\072\013\243\020\031"
	"\250\300\370\114\206\046\002\122\122\323\127\306\271\114\253\311"
	"\333\132\203\063\052\223\102\043\023\351\372\002\216\327\122\155"
	"\000\124\024\254\362\333\346\257\143\123\375\241\014\235\324\357"
	"\326\240\110\073\131\006\133\150\027\102\372\135\270\102\243\327"
	"\340\331\273\040\021\103\174\067\372\124\237\102\160\030\344\105"
	"\033\330\074\175\105\320\021\034\251\365\131\162\151\317\313\036"
	"\162\361\177\312\271\305\363\022\075\251\255\024\145\122\376\217"
	"\354\317\102\031\300\206\312\170\257\364\027\171\014\336\305\320"
	"\174\322\117\140\120\307\076\213\175\304\210\154\301\346\324\354"
	"\136\353\126\216\144\012\243\320\166\025\302\127\167\252\227\006"
	"\300\212\026\212\365\023\060\314\067\173\042\050\276\356\130\261"
	"\140\147\327\076\216\161\044\210\352\147\200\107\035\227\210\262"
	"\071\170\215\034\215\251\050\322\157\036\245\337\205\322\045\152"
	"\113\262\342\100\030\155\351\135\262\322\060\200\010\157\244\372"
	"\172\077\376\223\167\006\027\105\027\034\354\210\244\153\016\142"
	"\012\206\377\267\202\033\323\247\311\264\112\320\003\041\075\372"
	"\216\275\263\334\072\371\350\200\135\302\041\230\333\153\344\041"
	"\122\145\152\305\252\274\343\374\016\301\263\121\147\256\273\040"
	"\042\307\104\132\313\207\216\370\214\104\314\333\157\124\371\326"
	"\116\100\001\251\042\251\167\263\344\317\245\144\172\045\264\131"
	"\242\276\053\011\345\125\215\040\067\250\147\270\117\045\062\172"
	"\050\221\351\011\051\032\140\006\102\223\243\267\156\362\246\233"
	"\037\040\304\300\121\151\226\032\236\244\367\023\232\070\176\011"
	"\277\273\051\050\242\021\342\242\223\205\155\025\253\101\236\222"
	"\255\302\375\134\055\250\111\002\175\312\333\133\254\126\045\120"
	"\225\114\034\033\131\336\140\211\131\250\055\114\321\207\155\327"
	"\110\076\224\313\244\172\067\025\141\137\151\233\006\115\322\327"
	"\345\020\113\241\327\211\121\203\344\051\300\067\103\225\215\262"
	"\220\370\165\100\156\063\026\225\037\324\360\301\212\172\362\372"
	"\377\271\166\271\062\275\276\073\066\352\375\140\305\254\102\115"
	"\223\002\106\252\062\323\111\323\317\256\111\011\151\051\106\113"
	"\217\262\077\201\267\101\326\303\132\166\356\211\210\117\160\136"
	"\350\017\357\127\364\033\126\257\254\311\070\172\117\374\302\267"
	"\011\057\300\005\137\054\360\236\121\337\155\044\353\244\161\014"
	"\163\173\353\255\227\203\341\342\044\273\151\000\133\023\314\034"
	"\364\307\155\316\264\123\327\265\316\361\365\270\344\337\371\061"
	"\253\166\077\106\112\376\177\142\200\373\156\312\255\024\300\010"
	"\335\037\251\273\033\311\334\045\105\221\141\315\234\101\235\202"
	"\263\206\236\010\237\333\374\174\070\273\114\074\127\367\065\330"
	"\336\352\104\107\344\234\063\324\145\237\211\236\262\046\266\246"
	"\157\043\364\332\342\135\245\127\302\023\041\113\303\233\056\351"
	"\041\335\103\374\170\364\213\161\146\164\063\050\176\215\072\026"
	"\042\017\200\270\377\107\167\365\213\024\161\227\317\345\330\002"
	"\215\032\132\324\364\051\005\301\026\331\153\116\074\044\154\073"
	"\016\327\337\263\337\351\034\062\101\317\142\270\042\263\042\113"
	"\306\012\207\341\222\000\042\317\056\033\131\374\170\072\043\265"
	"\110\312\055\144\272\206\320\150\302\204\112\252\146\275\172\300"
	"\010\254\205\051\047\335\355\045\311\204\140\064\222\256\072\333"
	"\170\147\077\063\356\017\234\260\223\347\133\372\244\325\273\255"
	"\202\100\327\251\035\304\317\347\111\060\034\333\336\126\266\127"
	"\276\366\213\254\005\047\135\231\017\270\224\264\216\117\141\020"
	"\217\071\272\255\375\212\224\106\272\260\042\230\007\331\360\305"
	"\317\173\161\325\243\317\157\262\207\003\146\025\122\307\046\342"
	"\001\341\220\376\153\044\105\045\325\147\276\335\100\257\242\020"
	"\052\024\345\315\343\124\200\152\127\346\200\252\256\247\215\257"
	"\210\035\256\363\101\363\031\027\133\327\364\233\206\227\253\261"
	"\253\221\177\216\345\377\371\075\345\172\350\224\041\165\103\252"
	"\222\361\235\324\345\267\354\100\216\341\333\025\170\207\307\044"
	"\030\106\263\376\105\255\074\053\047\044\277\111\232\002\363\054"
	"\364\221\001\331\110\355\031\327\316\365\355\107\174\264\153\225"
	"\373\036\224\100\313\320\154\363\365\053\075\217\056\061\273\042"
	"\302\275\374\013\252\026\343\171\013\321\300\210\205\054\036\201"
	"\112\262\301\026\203\055\012\170\131\107\007\207\170\303\252\073"
	"\200\247\107\053\275\052\244\311\373\144\121\201\220\160\002\333"
	"\042\304\362\245\362\375\035\113\105\045\323\275\351\176\371\152"
	"\046\100\225\343\153\071\255\146\236\376\350\057\156\352\013\221"
	"\257\376\066\241\373\124\355\100\172\301\376\144\077\370\316\145"
	"\070\143\111\243\235\366\012\074\365\363\153\144\336\167\366\215"
	"\165\055\057\161\202\034\262\374\336\260\141\036\250\057\203\341"
	"\223\315\205\060\304\220\154\272\203\330\037\141\120\025\357\305"
	"\102\036\067\304\073\351\300\031\231\041\067\102\121\273\043\344"
	"\211\250\025\116\070\202\010\274\133\047\036\253\074\015\161\176"
	"\054\250\102\147\221\003\201\053\045\271\155\167\165\221\134\376"
	"\071\161\114\162\363\125\057\117\174\115\372\271\133\153\070\207"
	"\023\173\357\244\177\161\317\245\052\075\034\237\316\170\236\010"
	"\351\352\173\335\100\252\054\274\367\047\166\122\222\256\332\246"
	"\051\311\113\250\072\033\115\145\130\151\004\046\342\243\056\314"
	"\216\252\251\316\124\326\213\114\375\001\237\220\257\171\067\331"
	"\103\202\201\176\235\317\343\366\070\350\034\033\213\113\347\032"
	"\365\221\350\112\147\163\226\145\164\066\366\044\260\055\375\363"
	"\260\177\161\115\116\125\103\207\076\140\242\312\254\211\344\242"
	"\032\314\354\202\100\203\350\265\271\337\331\151\014\327\135\274"
	"\126\317\012\244\045\116\053\143\256\315\056\133\127\022\375\162"
	"\337\352\365\040\155\335\325\047\274\256\221\311\206\356\206\334"
	"\275\220\201\342\337\254\106\216\172\164\351\322\207\346\104\146"
	"\320\071\206\076\027\134\145\323\013\367\235\221\345\043\155\243"
	"\264\356\205\223\233\314\041\026\100\013\350\307\361\055\056\302"
	"\146\265\001\176\021\147\121\034\136\357\255\103\022\033\347\307"
	"\012\155\133\246\071\174\274\172\207\245\102\171\322\160\074\071"
	"\046\075\267\067\244\011\124\003\370\002\107\013\036\056\322\050"
	"\233\055\317\324\252\213\116\062\061\220\254\003\001\350\074\050"
	"\046\363\140\312\375\264\316\365\267\025\001\325\103\324\376\336"
	"\002\315\262\254\130\001\337\211\222\213\215\224\163\312\274\231"
	"\276\034\144\273\321\062\261\210\107\262\136\212\206\134\151\210"
	"\051\033\065\202\035\024\014\257\237\231\103\023\143\000\255\041"
	"\035\021\335\357\104\216\170\213\101\326\026\307\062\177\120\133"
	"\233\206\336\270\233\352\150\073\203\254\116\347\254\373\011\312"
	"\015\346\271\121\165\061\335\266\007\363\176\071\163\316\225\016"
	"\125\163\307\360\136\057\053\341\333\172\311\207\165\323\122\202"
	"\272\013\324\057\074\261\345\104\244\143\176\030\062\024\046\210"
	"\207\355\170\345\034\243\307\370\036\221\177\223\144\321\026\036"
	"\335\352\116\032\233\063\136\100\227\334\130\312\360\177\122\170"
	"\154\312\136\211\156\046\201\214\267\001\040\034\323\067\073\260"
	"\041\211\312\275\275\051\376\125\006\126\037\366\325\161\157\102"
	"\074\316\313\253\364\115\070\254\116\131\311\041\220\004\322\262"
	"\216\235\157\113\306\155\241\314\304\300\303\231\062\063\334\157"
	"\001\247\033\366\364\123\242\103\255\154\145\075\160\067\357\377"
	"\325\137\113\233\314\354\150\220\254\054\052\337\137\006\116\141"
	"\256\151\127\243\275\372\346\152\146\114\250\327\203\227\326\131"
	"\366\041\364\303\015\134\124\272\210\176\231\350\205\350\111\063"
	"\121\240\327\017\233\276\172\001\012\042\330\216\271\256\347\260"
	"\320\334\164\335\071\310\230\302\107\061\252\314\031\364\000\153"
	"\225\327\173\060\226\365\061\241\027\012\057\321\271\027\202\211"
	"\363\366\146\055\276\377\357\006\060\232\322\112\216\323\266\043"
	"\252\061\123\101\047\205\342\076\217\021\020\110\051\222\322\035"
	"\211\071\112\110\070\071\116\150\323\040\263\141\363\151\205\236"
	"\233\330\340\302\136\302\001\356\324\021"
#define      lsto_z	1
#define      lsto	((&data[6564]))
	"\314"
#define      pswd_z	256
#define      pswd	((&data[6571]))
	"\102\144\165\172\236\304\177\045\121\231\053\305\173\063\046\246"
	"\237\351\166\137\154\015\220\117\240\017\105\034\031\253\104\076"
	"\047\346\326\052\135\125\120\257\357\173\164\153\256\233\021\116"
	"\204\210\255\361\225\076\100\065\115\206\121\147\061\225\245\130"
	"\174\174\202\332\321\323\211\300\116\376\053\375\231\075\113\036"
	"\306\371\020\133\067\120\221\204\327\343\353\011\171\221\141\365"
	"\015\344\317\337\267\131\240\006\127\314\003\361\012\116\020\320"
	"\107\040\054\176\161\276\003\110\241\357\121\032\200\263\020\216"
	"\230\337\155\120\070\016\126\220\332\131\201\345\250\221\265\360"
	"\261\342\157\042\240\163\153\102\142\275\134\342\160\154\161\010"
	"\114\337\131\204\355\257\024\310\011\226\255\262\047\143\242\331"
	"\105\022\374\346\205\147\050\347\044\204\312\225\361\073\236\075"
	"\032\367\302\010\246\326\320\260\154\175\142\224\340\005\155\046"
	"\027\152\014\235\321\065\205\366\272\117\214\253\213\052\351\245"
	"\041\253\256\310\202\176\170\357\373\333\203\334\340\361\002\370"
	"\133\017\225\055\104\032\044\377\152\260\252\366\333\224\234\375"
	"\077\112\305\301\310\076\342\161\344\226\323\330\000\130\167\233"
	"\061"
#define      chk1_z	22
#define      chk1	((&data[6840]))
	"\031\137\332\337\166\344\302\333\051\177\013\366\000\070\046\304"
	"\372\340\033\311\133\241\134\131\176\356\161"
#define      chk2_z	19
#define      chk2	((&data[6869]))
	"\276\006\103\000\374\232\302\242\130\327\000\007\145\242\304\177"
	"\271\214\076\065\006\367\255"
#define      msg1_z	42
#define      msg1	((&data[6895]))
	"\011\175\135\173\142\363\116\007\147\175\371\153\174\244\200\375"
	"\044\016\324\124\361\036\121\171\373\107\250\250\321\020\223\357"
	"\242\104\166\005\131\320\126\027\224\057\163\325\076\056\021\206"
	"\037\073\363\247\262\217"
#define      date_z	1
#define      date	((&data[6942]))
	"\225"/* End of data[] */;
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
#if !defined(TRACEABLE)
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
