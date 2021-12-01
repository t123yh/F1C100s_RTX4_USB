// ���ļ��ɺ���ҫ��ƣ�����ͨ��QQ��ϵ���ߣ�26750452
#include "usrinc.h"

////////////////////////////////////////////////////////////////////////////////
//|          |
//| �������� |: UserEntryInit
//| �������� |: Ӧ�ó����ʼ��
//|          |:
//| �����б� |:
//|          |:
//| ��    �� |:
//|          |:
//| ��ע��Ϣ |:
//|          |:
////////////////////////////////////////////////////////////////////////////////
void UserEntryInit(void)
{
  target_wdt_feed();

  printf("DDR size: %uMB\n", (*(uint32_t*)0x5c) & 0xFFFFFF);

  //f1c100s_twi_init(TWI0_MID, 400 * 1000);

  //f1c100s_uart_init(UART0_MID);
  //f1c100s_uart_setBaudrate(UART0_MID, 115200);
  //f1c100s_uart_clearfifo(UART0_MID);

	/*
  if (!APP_CreateGuiService()) {
    sys_suspend();
  }
	*/
}

////////////////////////////////////////////////////////////////////////////////
//|          |
//| �������� |: UserEntryLoop
//| �������� |: Ӧ�ó�����ѭ��
//|          |:
//| �����б� |:
//|          |:
//| ��    �� |:
//|          |:
//| ��ע��Ϣ |:
//|          |:
////////////////////////////////////////////////////////////////////////////////
void UserEntryLoop(void)
{
  for (;;) {
    target_wdt_feed();
    // ѭ�����
    sys_delay(500);

#if 0
    // ������������
    if (f1c100s_uart_isTxEnd(UART0_MID)) {
      rCnt = f1c100s_uart_readFifo(UART0_MID, rbuffer, sizeof(rbuffer));
      if (rCnt > 0) {
        f1c100s_uart_asyncTx(UART0_MID, rbuffer, rCnt);
      }
    }
#endif
  }
}


////////////////////////////////////////////////////////////////////////////////

