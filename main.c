/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
#include "timer.h"
#include <string.h>
void display7SEG (int num){
	  switch (num) {
	  case 0:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_RESET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_SET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(a_GPIO_Port , a_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(b_GPIO_Port , b_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(c_GPIO_Port , c_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(d_GPIO_Port , d_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(e_GPIO_Port , e_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(g_GPIO_Port , g_Pin, GPIO_PIN_RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(f_GPIO_Port , f_Pin, GPIO_PIN_SET);
		  break;
	  default:
		  HAL_GPIO_WritePin(GPIOB , GPIO_PIN_All, GPIO_PIN_SET);
		  break;
	  }

 }

int index_led = 0;
int led_buffer [4] = {3, 6, 0, 8};
void update7SEG(){
    HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);


    switch (index_led){
    	case 0:
    	// Display the first 7SEG with led_buffer [0]
    	display7SEG(led_buffer[0]);
    	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
    	break;
    	case 1:
    	// Display the second 7SEG with led_buffer [1]
    	display7SEG(led_buffer[1]);
    	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
    	break;
    	case 2:
    	// Display the third 7SEG with led_buffer [2]
    	display7SEG(led_buffer[2]);
    	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
    	break;
    	case 3:
    	// Display the forth 7SEG with led_buffer [3]
    	display7SEG(led_buffer[3]);
    	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
    	break;
    	default:
    	break;
    	}
    index_led++;
     if (index_led >= 4) index_led = 0;
}



typedef enum {
    STATE_A_GREEN,
    STATE_A_YELLOW,
    STATE_B_GREEN,
    STATE_B_YELLOW,
	STATE_ALL_RED
} TrafficState;

int counter = 0;                // 7-seg display counter
TrafficState currentState = STATE_A_GREEN;
int amberDuration = 2;
int greenDuration = 5;
int redDuration = 7;
int time = 0;

void enter_modify_mode() {
    // Turn off all LEDs (SET = off)
    HAL_GPIO_WritePin(LED_REDA_GPIO_Port, LED_REDA_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWA_GPIO_Port, LED_YELLOWA_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_GREENA_GPIO_Port, LED_GREENA_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_REDB_GPIO_Port, LED_REDB_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWB_GPIO_Port, LED_YELLOWB_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_GREENB_GPIO_Port, LED_GREENB_Pin, GPIO_PIN_SET);
}


void setLights_StateA_Green(void) {
    // A: Green ON, Red OFF, Yellow OFF
    HAL_GPIO_WritePin(LED_GREENA_GPIO_Port, LED_GREENA_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_REDA_GPIO_Port, LED_REDA_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWA_GPIO_Port, LED_YELLOWA_Pin, GPIO_PIN_SET);

    // B: Red ON, others OFF
    HAL_GPIO_WritePin(LED_REDB_GPIO_Port, LED_REDB_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GREENB_GPIO_Port, LED_GREENB_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWB_GPIO_Port, LED_YELLOWB_Pin, GPIO_PIN_SET);

//    counter = 5; // Duration in seconds
    counter = greenDuration;
 //   a_remaining = greenDuration;
 //   b_remaining = greenDuration + amberDuration + redDuration;

}

void setLights_StateA_Yellow(void) {
    // A: Yellow ON
    HAL_GPIO_WritePin(LED_GREENA_GPIO_Port, LED_GREENA_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWA_GPIO_Port, LED_YELLOWA_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_REDA_GPIO_Port, LED_REDA_Pin, GPIO_PIN_SET);

    // B: Red ON
    HAL_GPIO_WritePin(LED_REDB_GPIO_Port, LED_REDB_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GREENB_GPIO_Port, LED_GREENB_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWB_GPIO_Port, LED_YELLOWB_Pin, GPIO_PIN_SET);

  //  counter = 2;

    counter = amberDuration;
 //   a_remaining = amberDuration;
 //   b_remaining = amberDuration + redDuration;

}

void setLights_StateB_Green(void) {
    // B: Green ON
    HAL_GPIO_WritePin(LED_GREENB_GPIO_Port, LED_GREENB_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_REDB_GPIO_Port, LED_REDB_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWB_GPIO_Port, LED_YELLOWB_Pin, GPIO_PIN_SET);

    // A: Red ON
    HAL_GPIO_WritePin(LED_REDA_GPIO_Port, LED_REDA_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GREENA_GPIO_Port, LED_GREENA_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWA_GPIO_Port, LED_YELLOWA_Pin, GPIO_PIN_SET);

    //counter = 5;
    counter = greenDuration;
 //   b_remaining = greenDuration;
 //   a_remaining = greenDuration + amberDuration + redDuration;

}

void setLights_StateB_Yellow(void) {
    // B: Yellow ON
    HAL_GPIO_WritePin(LED_GREENB_GPIO_Port, LED_GREENB_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWB_GPIO_Port, LED_YELLOWB_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_REDB_GPIO_Port, LED_REDB_Pin, GPIO_PIN_SET);

    // A: Red ON
    HAL_GPIO_WritePin(LED_REDA_GPIO_Port, LED_REDA_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GREENA_GPIO_Port, LED_GREENA_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YELLOWA_GPIO_Port, LED_YELLOWA_Pin, GPIO_PIN_SET);

 //   counter = 2;

    counter = amberDuration;
 //   b_remaining = amberDuration;
 //   a_remaining = amberDuration + redDuration;

}

int timer0_counter = 0;
int timer0_flag = 0;
int TIMER_CYCLE = 10;


void setTimer0(int duration){
    timer0_counter = duration/TIMER_CYCLE;
    timer0_flag = 0;

}


void timer_run (){
    if(timer0_counter > 0){
       timer0_counter--;
       if(timer0_counter == 0) {
       	timer0_flag = 1;
       }
    }


}


enum Mode {
     MODE_1_NORMAL = 1,
     MODE_2_MODIFY_RED = 2,
     MODE_3_MODIFY_AMBER = 3,
     MODE_4_MODIFY_GREEN = 4
 };


 int currentMode = MODE_1_NORMAL;

 void modify_mode_run(char *colorName) {
	 static uint8_t prevBtn3 = 0;
	     uint8_t currBtn3 = is_button_pressed(2);  // Button 3
	     if (currBtn3 && !prevBtn3) {
	         if (strcmp(colorName, "RED") == 0)
	             redDuration = time;
	         else if (strcmp(colorName, "AMBER") == 0)
	             amberDuration = time;
	         else if (strcmp(colorName, "GREEN") == 0)
	             greenDuration = time;

	        // currentMode = MODE_1_NORMAL;
	     }
	     prevBtn3 = currBtn3;
	 }

	 void fsm_mode_control(void) {
	     static int previousButtonState = 0;
	     static int old_mode = MODE_1_NORMAL;

	     // Button 1: Change Mode (falling edge)
	     if (!is_button_pressed(0) && previousButtonState == 1) {
	         currentMode++;
	         if (currentMode > MODE_4_MODIFY_GREEN) currentMode = MODE_1_NORMAL;
	     }
	     previousButtonState = is_button_pressed(0);

	     if (currentMode != old_mode) {
	         if (currentMode > MODE_1_NORMAL) {
	             enter_modify_mode();
	             switch (currentMode) {
	                 case MODE_2_MODIFY_RED:
//	                     time = redDuration;
	                     break;
	                 case MODE_3_MODIFY_AMBER:
//	                     time = amberDuration;
	                     break;
	                 case MODE_4_MODIFY_GREEN:
//	                     time = greenDuration;
	                     break;
	             }
	         } else {
	             // Resume normal mode lights based on current state
	             switch (currentState) {
	                 case STATE_A_GREEN:
	                     setLights_StateA_Green();
	                     break;
	                 case STATE_A_YELLOW:
	                     setLights_StateA_Yellow();
	                     break;
/*	                 case STATE_ALL_RED:
	                     setLights_StateAllRed();
	                     break;  */
	                 case STATE_B_GREEN:
	                     setLights_StateB_Green();
	                     break;
	                 case STATE_B_YELLOW:
	                     setLights_StateB_Yellow();
	                     break;
	             }
	         }
	         old_mode = currentMode;
	     }

	     switch (currentMode) {
	         case MODE_1_NORMAL:
	             // Normal operation handled in main loop
	             break;
	         case MODE_2_MODIFY_RED:
	             modify_mode_run("RED");
	             break;
	         case MODE_3_MODIFY_AMBER:
	             modify_mode_run("AMBER");
	             break;
	         case MODE_4_MODIFY_GREEN:
	             modify_mode_run("GREEN");
	             break;
	     }

 }


 void update_buffer(){
     int tens = time / 10;
     int ones = time % 10;
     led_buffer[0] = 0; // Display mode number  //currentMode
     led_buffer[1] = currentMode;          // or 'r'/'A'/'G'
     led_buffer[2] = tens;
     led_buffer[3] = ones;
 }

 static int blink_counter = 0;
 void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
  /*   if (htim->Instance == TIM2) {
         button_reading();
         fsm_for_input_processing();
         timer_run();
         update_flag = 1;

         // Blink logic for modify modes (2Hz = every 500ms)
         blink_counter++;
         if (currentMode > MODE_1_NORMAL && blink_counter >= 50) {
             blink_counter = 0;
             switch (currentMode) {
                 case MODE_2_MODIFY_RED:
                     HAL_GPIO_TogglePin(LED_REDA_GPIO_Port, LED_REDA_Pin);
                     HAL_GPIO_TogglePin(LED_REDB_GPIO_Port, LED_REDB_Pin);
                     break;
                 case MODE_3_MODIFY_AMBER:
                     HAL_GPIO_TogglePin(LED_YELLOWA_GPIO_Port, LED_YELLOWA_Pin);
                     HAL_GPIO_TogglePin(LED_YELLOWB_GPIO_Port, LED_YELLOWB_Pin);
                     break;
                 case MODE_4_MODIFY_GREEN:
                     HAL_GPIO_TogglePin(LED_GREENA_GPIO_Port, LED_GREENA_Pin);
                     HAL_GPIO_TogglePin(LED_GREENB_GPIO_Port, LED_GREENB_Pin);
                     break;
             }
         }
     }  */

 	if (htim->Instance == TIM2) {
 	        button_reading();
 	        fsm_for_input_processing();
 	        timer_run();
 	        // Blink logic for modify modes (dynamic period based on 'time')
 	        if (currentMode > MODE_1_NORMAL) {
 	            blink_counter++;
 	            int threshold = 50 + (time * 100);  // Longer blink as 'time' increases (min 550ms, max ~1s)
 	            if (blink_counter >= threshold) {
 	                blink_counter = 0;
 	                switch (currentMode) {
 	                    case MODE_2_MODIFY_RED:
 	                        HAL_GPIO_TogglePin(LED_REDA_GPIO_Port, LED_REDA_Pin);
 	                        HAL_GPIO_TogglePin(LED_REDB_GPIO_Port, LED_REDB_Pin);
 	                        break;
 	                    case MODE_3_MODIFY_AMBER:
 	                        HAL_GPIO_TogglePin(LED_YELLOWA_GPIO_Port, LED_YELLOWA_Pin);
 	                        HAL_GPIO_TogglePin(LED_YELLOWB_GPIO_Port, LED_YELLOWB_Pin);
 	                        break;
 	                    case MODE_4_MODIFY_GREEN:
 	                        HAL_GPIO_TogglePin(LED_GREENA_GPIO_Port, LED_GREENA_Pin);
 	                        HAL_GPIO_TogglePin(LED_GREENB_GPIO_Port, LED_GREENB_Pin);
 	                        break;
 	                }
 	            }
 	        }
 	    }
 }





int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT(&htim2);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  setLights_StateA_Green();
 //  enter_modify_mode();
  setTimer0(10);
  redDuration = greenDuration + amberDuration;
  while (1)
  {
	  fsm_mode_control();
	  update_buffer();
	  static uint8_t prev = 0;
	     uint8_t curr = is_button_pressed(1);
	  //   if (is_button_pressed(1)) {
	    	 if (curr && !prev) {
	         time++;
	         if (time > 99) time = 1;
	         }
	    	 prev = curr;
	 //    }

//	  static uint8_t prev1 = 0;
//	   	uint8_t curr1 = is_button_pressed(2);
	   	  //   if (is_button_pressed(1)) {

	  static int previousButtonState = 0;
	  if (!is_button_pressed(2) && previousButtonState == 1) {
		  greenDuration = time;
		  amberDuration = redDuration + 2 - greenDuration;
		  redDuration = greenDuration + amberDuration;
		  time = 0;
		  setLights_StateA_Green();
	  }
	     previousButtonState = is_button_pressed(2);

	  if (timer0_flag == 1){
	  if (currentMode == MODE_1_NORMAL){
	  update7SEG () ;
	  setTimer0(1000);
	  counter--;


//      a_remaining--;
//      b_remaining--;
      if (counter <= 0 ) {
          // Switch state
          switch (currentState) {
              case STATE_A_GREEN:
                  setLights_StateA_Yellow();
                  currentState = STATE_A_YELLOW;
                  break;
              case STATE_A_YELLOW:
                  setLights_StateB_Green();
                  currentState = STATE_B_GREEN;
                  break;
              case STATE_B_GREEN:
                  setLights_StateB_Yellow();
                  currentState = STATE_B_YELLOW;
                  break;
              case STATE_B_YELLOW:
                  setLights_StateA_Green();
                  currentState = STATE_A_GREEN;
                  break;
          }

          //setTimer0(1000);
      }
	  }

	  else if (currentMode == MODE_2_MODIFY_RED){
		  update7SEG () ;
		  setTimer0(500);
	      modify_mode_run("RED");

	   }
	  else if (currentMode == MODE_3_MODIFY_AMBER){
		  update7SEG () ;
		  setTimer0(500);
	      modify_mode_run("AMBER");

	  }
	  else if (currentMode == MODE_4_MODIFY_GREEN){
		  update7SEG () ;
		  setTimer0(500);
	      modify_mode_run("GREEN");

	  }
	//  timer0_flag = 0;
	  }
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  /* USER CODE BEGIN MX_GPIO_Init_1 */

  /* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_REDA_Pin|LED_YELLOWA_Pin|LED_GREENA_Pin|LED_REDB_Pin
                          |LED_YELLOWB_Pin|LED_GREENB_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, a_Pin|b_Pin|c_Pin|EN3_Pin
                          |EN4_Pin|d_Pin|e_Pin|f_Pin
                          |g_Pin|EN0_Pin|EN1_Pin|EN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_REDA_Pin LED_YELLOWA_Pin LED_GREENA_Pin LED_REDB_Pin
                           LED_YELLOWB_Pin LED_GREENB_Pin */
  GPIO_InitStruct.Pin = LED_REDA_Pin|LED_YELLOWA_Pin|LED_GREENA_Pin|LED_REDB_Pin
                          |LED_YELLOWB_Pin|LED_GREENB_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin EN3_Pin
                           EN4_Pin d_Pin e_Pin f_Pin
                           g_Pin EN0_Pin EN1_Pin EN2_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|EN3_Pin
                          |EN4_Pin|d_Pin|e_Pin|f_Pin
                          |g_Pin|EN0_Pin|EN1_Pin|EN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : BUTTON_1_Pin BUTTON_2_Pin BUTTON_3_Pin */
  GPIO_InitStruct.Pin = BUTTON_1_Pin|BUTTON_2_Pin|BUTTON_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /* USER CODE BEGIN MX_GPIO_Init_2 */

  /* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

