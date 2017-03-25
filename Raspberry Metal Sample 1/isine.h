
#define SIN_NUM 315
#define SIN_STEP 0.005
#define PI  3.14159265359
#define PI_2  1.57079632679
#define PI_3_2  4.71238898038
#define PI_X2  6.28318530718


double sinTable[SIN_NUM] = { 0,
0.00499997916669271,
0.00999983333416666,
0.0149994375063281,
0.0199986666933331,
0.0249973959147123,
0.0299955002024957,
0.0349928546043362,
0.0399893341866342,
0.0449848140376602,
0.0499791692706783,
0.0549722750270677,
0.0599640064794446,
0.0649542388347826,
0.0699428473375328,
0.0749297072727423,
0.0799146939691727,
0.084897682802416,
0.0898785491980111,
0.0948571686345573,
0.0998334166468282,
0.104807168828883,
0.109778300837175,
0.114746688393664,
0.119712207288919,
0.124674733385228,
0.129634142619695,
0.134590311007348,
0.139543114644237,
0.144492429710526,
0.149438132473599,
0.154380099291143,
0.159318206614246,
0.164252330990481,
0.169182349066996,
0.174108137593596,
0.179029573425824,
0.183946533528041,
0.188858894976501,
0.193766534962422,
0.198669330795061,
0.203567159904778,
0.2084598998461,
0.213347428300782,
0.218229623080869,
0.223106362131746,
0.227977523535189,
0.232842985512417,
0.237702626427135,
0.242556324788572,
0.247403959254523,
0.252245408634378,
0.257080551892155,
0.261909268149525,
0.266731436688831,
0.271546936956113,
0.276355648564114,
0.281157451295294,
0.285952225104836,
0.290739850123643,
0.29552020666134,
0.300293175209262,
0.305058636443444,
0.309816471227603,
0.314566560616118,
0.319308785857001,
0.324043028394869,
0.328769169873903,
0.333487092140815,
0.338196677247791,
0.342897807455452,
0.347590365235784,
0.35227423327509,
0.356949294476912,
0.361615431964962,
0.366272529086048,
0.370920469412983,
0.375559136747501,
0.380188415123162,
0.384808188808245,
0.389418342308651,
0.394018760370781,
0.398609327984423,
0.403189930385627,
0.40776045305957,
0.412320781743425,
0.416870802429211,
0.421410401366648,
0.425939465066,
0.430457880300909,
0.43496553411123,
0.439462313805853,
0.44394810696552,
0.448422801445635,
0.452886285379069,
0.457338447178956,
0.461779175541483,
0.466208359448673,
0.470625888171158,
0.475031651270951,
0.479425538604203,
0.48380744032396,
0.488177246882908,
0.492534849036109,
0.496880137843737,
0.501213004673798,
0.505533341204847,
0.509841039428696,
0.514135991653113,
0.518418090504517,
0.522687228930659,
0.526943300203302,
0.531186197920884,
0.535415816011184,
0.53963204873397,
0.543834790683643,
0.548023936791874,
0.552199382330228,
0.556361022912784,
0.560508754498745,
0.564642473395036,
0.5687620762589,
0.572867460100482,
0.576958522285397,
0.581035160537305,
0.585097272940463,
0.58914475794227,
0.593177514355813,
0.597195441362392,
0.601198438514041,
0.60518640573604,
0.609159243329415,
0.613116851973434,
0.617059132728087,
0.62098598703656,
0.6248973167277,
0.628793024018469,
0.632673011516387,
0.636537182221968,
0.640385439531147,
0.644217687237691,
0.648033829535608,
0.651833771021537,
0.655617416697141,
0.659384671971474,
0.66313544266335,
0.666869635003698,
0.670587155637904,
0.674287911628146,
0.677971810455715,
0.681638760023335,
0.685288668657455,
0.688921445110552,
0.692536998563402,
0.696135238627357,
0.699716075346604,
0.703279419200411,
0.706825181105366,
0.710353272417608,
0.713863604935037,
0.717356090899523,
0.720830642999099,
0.724287174370143,
0.727725598599551,
0.731145829726896,
0.734547782246579,
0.737931371109963,
0.741296511727503,
0.74464311997086,
0.747971112175,
0.751280405140293,
0.754570916134587,
0.757842562895277,
0.761095263631367,
0.764328937025506,
0.767543502236028,
0.77073887889897,
0.773914987130082,
0.777071747526824,
0.780209081170351,
0.783326909627484,
0.786425154952674,
0.789503739689951,
0.792562586874855,
0.795601620036366,
0.798620763198815,
0.801619940883778,
0.80459907811197,
0.807558100405115,
0.81049693378781,
0.813415504789374,
0.816313740445684,
0.819191568300999,
0.822048916409772,
0.824885713338451,
0.827701888167258,
0.830497370491971,
0.833272090425677,
0.836025978600521,
0.838758966169443,
0.841470984807897,
0.844161966715557,
0.846831844618015,
0.849480551768464,
0.852108021949363,
0.854714189474094,
0.857298989188603,
0.859862356473035,
0.862404227243338,
0.864924537952878,
0.867423225594017,
0.869900227699694,
0.872355482344986,
0.874788928148655,
0.877200504274681,
0.879590150433789,
0.881957806884947,
0.884303414436869,
0.886626914449487,
0.888928248835422,
0.891207360061435,
0.893464191149863,
0.895698685680047,
0.89791078778974,
0.900100442176504,
0.902267594099094,
0.904412189378825,
0.906534174400926,
0.908633496115882,
0.91071010204076,
0.91276394026052,
0.914794959429313,
0.916803108771766,
0.918788338084249,
0.920750597736134,
0.922689838671032,
0.924606012408019,
0.926499071042853,
0.928368967249165,
0.930215654279649,
0.932039085967225,
0.933839216726195,
0.935616001553385,
0.937369396029265,
0.939099356319066,
0.940805839173871,
0.942488801931696,
0.944148202518561,
0.945783999449538,
0.947396151829787,
0.948984619355585,
0.950549362315325,
0.952090341590514,
0.953607518656752,
0.955100855584691,
0.956570315040984,
0.958015860289223,
0.959437455190852,
0.960835064206071,
0.962208652394729,
0.963558185417191,
0.964883629535204,
0.966184951612733,
0.967462119116793,
0.968715100118264,
0.969943863292686,
0.971148377921043,
0.972328613890533,
0.973484541695318,
0.974616132437263,
0.975723357826658,
0.976806190182926,
0.977864602435315,
0.978898568123573,
0.979908061398613,
0.980893057023154,
0.981853530372358,
0.982789457434441,
0.983700814811275,
0.984587579718973,
0.985449729988459,
0.98628724406602,
0.987100101013849,
0.987888280510564,
0.988651762851719,
0.989390528950294,
0.990104560337177,
0.990793839161619,
0.991458348191685,
0.992098070814686,
0.992712991037587,
0.993303093487417,
0.993868363411644,
0.994408786678549,
0.99492434977758,
0.995415039819685,
0.995880844537639,
0.996321752286349,
0.996737752043143,
0.997128833408049,
0.997494986604054,
0.997836202477346,
0.998152472497547,
0.998443788757923,
0.998710143975582,
0.998951531491658,
0.999167945271476,
0.999359379904701,
0.999525830605479,
0.99966729321255,
0.999783764189357,
0.999875240624131,
0.999941720229966,
0.999983201344876,
0.999999682931835 };





double isine(double u) {

	int sgn = 1;
	u = u - PI_X2 * (int)(u / PI_X2);
	u = PI_X2 + u;
	u = u - PI_X2 * (int)(u / PI_X2);

	if (u > PI_2 && u <= PI) {
		u = PI - u;
	}

	else if (u > PI && u <= PI_3_2) {
		u = u - PI;
		sgn = -1;
	}

	else if (u > PI_3_2 && u < PI_X2) {
		u = PI_2 - (u - PI_3_2);
		sgn = -1;
	}



	double ii = u / SIN_STEP;
	int idx = (int)(ii);



	if (idx == SIN_NUM - 1)
	{
		return sinTable[SIN_NUM - 1];
	}
	if (idx > SIN_NUM - 1) {
		return 0;
	}

	double v0 = sinTable[idx];
	double v1 = sinTable[idx + 1];

	return sgn * (v0 + ((v1 - v0) * (u - idx * SIN_STEP)));

}

double icosine(double u) {
	return isine(PI_2 - u);
}






