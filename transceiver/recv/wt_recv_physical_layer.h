#ifndef __WT_RECV_PHYSICAL_LAYER_H__
#define __WT_RECV_PHYSICAL_LAYER_H__
#include "proto_utils/wt_proto_physical_layer.h"
#include "proto_utils/wt_proto_common.h"


int WTRecvPhyLayerInit(void);

void WTRecvPhyLayerExit(void);

void WTRecvPhyLayerSendPcm(const RecvAudioType *pcm, int pcm_len);

int WTRecvPhyLayerGetData(WTPhyFreqMarkType *data_buf, int buf_len);


int WTRecvPhyLayerInitForCompare();

void WTRecvPhyLayerExitForCompare();

void WTRecvPhyLayerSendPcmForCompare(const RecvAudioType *pcm, int pcm_len);

int WTRecvPhuLayerGetDataForCompare(WTFreqCodeType *data_buf, int buf_len);


#endif
