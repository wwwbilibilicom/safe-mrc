#ifndef __MRC_COM_H__
#define __MRC_COM_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "main.h"
#include "mrc_protocol.h"

#pragma pack(1)
    typedef struct MRC_Com_t
    {
        uint8_t id;

        MRC_Cmd_Protocol cmd_msg; // Command message structure
        uint8_t cmd_msg_buffer[sizeof(MRC_Cmd_Protocol)]; // DMA buffer for command message
        MRC_Fbk_Protocol fbk_msg; // Feedback message structure

        UART_HandleTypeDef *mrc_huart; // UART handle for communication

        uint8_t RxFlag; // Flag indicating new command received
        uint16_t RxLen; // Length of the received data
        uint16_t TxLen; // Length of the transmitted data

        uint8_t cmd_correct; // 0: error, 1: correct
    } MRC_Com_t;
#pragma pack()

// Function declarations
/**
 * @brief Initialize MRC communication module
 * @param mrc_com: MRC communication structure pointer
 * @param huart: UART handle pointer
 * @param id: Device ID
 * @return 0: Success, -1: Failure
 */
int MRC_Com_Init(MRC_Com_t *mrc_com, UART_HandleTypeDef *huart, uint8_t id);

/**
 * @brief Unpack command data from DMA buffer (device side)
 * @param mrc_com: MRC communication structure pointer
 * @return 0: Success, -1: Failure
 */
int MRC_Com_UnpackCmd(MRC_Com_t *mrc_com);

/**
 * @brief Pack feedback data for transmission (device side)
 * @param mrc_com: MRC communication structure pointer
 * @param mode: Current work mode
 * @param encoder_value: Encoder angle value
 * @param present_current: Current torque value
 * @param collision_flag: Collision flag
 * @return 0: Success, -1: Failure
 */
int MRC_Com_PackFbk(MRC_Com_t *mrc_com, MRC_Mode mode, int32_t encoder_value, int32_t encoder_velocity,
    int32_t present_current, uint8_t collision_flag);

/**
 * @brief Send feedback data using DMA (device side response)
 * @param mrc_com: MRC communication structure pointer
 * @return 0: Success, -1: Failure
 */
int MRC_Com_SendFbk(MRC_Com_t *mrc_com);


/**
 * @brief Get command correctness flag
 * @param mrc_com: MRC communication structure pointer
 * @return 1: Command correct, 0: Command error
 */
int MRC_Com_IsCmdCorrect(MRC_Com_t *mrc_com);

/**
 * @brief Reset communication status
 * @param mrc_com: MRC communication structure pointer
 */
void MRC_Com_Reset(MRC_Com_t *mrc_com);

#ifdef __cplusplus
}
#endif

#endif

