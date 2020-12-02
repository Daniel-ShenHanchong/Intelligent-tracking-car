/**********************718创新实验室开发板例程*********************
*  编写：718创新实验室
*  平台：STM32F103ZET6
*  说明：由于作者的水平有限，若有不足之处，还请大家谅解。
*		 建议大家多看看数据手册。     
******************************************************************/

/*************************功能说明********************************
*通过四路PWM控制电机
*TIM1 通道1， PE9
*TIM1 通道2， PE11
*TIM1 通道3， PE13
*TIM1 通道4， PE14
*************************功能说明********************************/

#include "stm32f10x.h"
#include "motor.h"

int main()
{
	tim_motor_init();
	while(1)
	{
		motor_run(motor_1,100);
		motor_run(motor_2,300);
		motor_run(motor_3,200);
		motor_run(motor_4,400);
	}
}
