/* 変数型�E定義 */
typedef enum {
  STP = 0,
  STR,
  ROT
} run_state_t;

typedef struct {
  unsigned char val[7];
} serial_data_t;

typedef struct {
  unsigned char val[6];
} middle_data_t;

typedef struct {
  signed short val[3];
} command_data_t;

/* ピン配置 */
#define PIN_ENC_A_L 2
#define PIN_ENC_B_L 4
#define PIN_ENC_A_R 3
#define PIN_ENC_B_R 7
#define PIN_DIR_R   8
#define PIN_PWM_R   9
#define PIN_DIR_L   12
#define PIN_PWM_L   11
#define PIN_SW      10
#define PIN_LED     3
#define PIN_BATT    19


//#define PIN_ENC_A_NECK    
//#define PIN_ENC_B_NECK  
#define PIN_DIR_NECK    6
#define PIN_PWM_NECK    5
/* パラメータ */
// 動作周朁E[ms]
#define T_CTRL 10 

// タイヤ半征E[cm] 3.2
#define R_TIRE     4.387 
// タイヤ間隔 [cm] 25.0
#define D_TIRE    32.0
// エンコーダ刁E��能 (A相立上り/立下りを利用するため2倁E
#define ENC_RANGE (13*2) 
#define T_E_RATIO 14.0   
#define L_R_RATIO 0.99   // 1.03

#define V_RATIO 0.5 //4
