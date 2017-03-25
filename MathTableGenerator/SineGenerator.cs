using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MathTableGenerator
{
	class SineGenerator
	{

		public string Generate(double step = 0.001)
		{
			StringBuilder sb = new StringBuilder("START");

			double u = 0;
			int num = 0;
			while (u <= Math.PI / 2)
			{
				//Console.WriteLine("{0}  {1}", u, Math.Sin(u), Math.Cos(u));

				sb.AppendFormat("{0},\n", Math.Sin(u));
				u += step;
				num++;
			}
			sb.Remove(sb.Length - 2, 2);

			sb.Replace("START", string.Format(@"
#define SIN_NUM {0}
#define SIN_STEP {1}
#define PI  3.14159265359
#define PI_2  1.57079632679
#define PI_3_2  4.71238898038
#define PI_X2  6.28318530718


double sinTable[SIN_NUM]={{", num, step));
			sb.AppendLine("};");

			sb.Append(@"




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







");

			return sb.ToString();
		}



	}
}
