// rea decompile_all
// name: FUN_1005f64e0
// address: 0x1005f64e0
// body: available
// range: 0x1005f64e0-0x1005f6c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f6b30) */
/* WARNING: Removing unreachable block (ram,0x0001005f6b34) */
/* WARNING: Removing unreachable block (ram,0x0001005f68c4) */
/* WARNING: Removing unreachable block (ram,0x0001005f67bc) */
/* WARNING: Removing unreachable block (ram,0x0001005f6740) */
/* WARNING: Removing unreachable block (ram,0x0001005f681c) */
/* WARNING: Removing unreachable block (ram,0x0001005f691c) */
/* WARNING: Removing unreachable block (ram,0x0001005f67c0) */
/* WARNING: Removing unreachable block (ram,0x0001005f66c4) */
/* WARNING: Removing unreachable block (ram,0x0001005f66d8) */

void FUN_1005f64e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_250 [8];
  undefined8 local_248;
  undefined *local_240;
  long local_238;
  undefined1 *local_230;
  long local_228;
  undefined1 local_200 [24];
  undefined1 local_1e8 [24];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined8 local_188 [3];
  undefined8 local_170 [3];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 auStack_80 [32];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar4 = &DAT_100aaf0f8;
  FUN_100004bb4(&DAT_100aaf0f8,&BYTE_100845090);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  local_230 = auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)(auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_228 = lVar10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar10 - extraout_x12_00;
  puVar4 = &DAT_100aaf100;
  FUN_100004bb4(&DAT_100aaf100,&BYTE_100845098);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar6);
  FUN_1005fa2fc();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar10 - extraout_x8_00,&DAT_1009dc720,&DAT_1009dc720,param_1,uVar6,uVar1);
  lVar5 = unaff_x20 + 0x10;
  _swift_beginAccess(lVar5,auStack_80,0,0);
  local_98[0] = *(undefined1 *)(unaff_x20 + 0x10);
  local_b0[0] = 0;
  FUN_1005fa33c();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (local_98,local_b0,puVar4,&DAT_1009dc570,lVar5);
  lVar5 = local_228;
  if (unaff_x21 == 0) {
    _swift_beginAccess(unaff_x20 + 0x18,local_98,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    local_b0[0] = 1;
    _swift_bridgeObjectRetain(uVar1);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar6,uVar1,local_b0,puVar4);
    _swift_bridgeObjectRelease(uVar1);
    _swift_beginAccess(unaff_x20 + 0x28,local_b0,0,0);
    local_c8[0] = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF
              (*(undefined4 *)(unaff_x20 + 0x28),local_c8,puVar4);
    _swift_beginAccess(unaff_x20 + 0x2c,local_c8,0,0);
    local_e0[0] = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF
              (*(undefined4 *)(unaff_x20 + 0x2c),local_e0,puVar4);
    _swift_beginAccess(unaff_x20 + 0x30,local_e0,0,0);
    local_f8[0] = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + 0x30),local_f8,puVar4);
    local_238 = lVar11;
    _swift_beginAccess(unaff_x20 + 0x38,local_f8,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    local_110[0] = 5;
    _swift_bridgeObjectRetain(uVar1);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar6,uVar1,local_110,puVar4);
    _swift_bridgeObjectRelease(uVar1);
    lVar2 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl;
    _swift_beginAccess(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl,
                       local_110,0,0);
    FUN_1005fa214(unaff_x20 + lVar2,lVar10);
    local_128[0] = 6;
    uVar6 = 0;
    __s10Foundation3URLVMa();
    puVar7 = &DAT_100aaf118;
    FUN_100144654(&DAT_100aaf118,PTR___s10Foundation3URLVSEAAMc_100996198);
    local_240 = puVar7;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (lVar10,local_128,puVar4,uVar6);
    local_248 = uVar6;
    FUN_1005fa2b4(lVar10);
    lVar2 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::receiveDataCount;
    _swift_beginAccess(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::receiveDataCount
                       ,local_128,0,0);
    local_140[0] = 7;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + lVar2),local_140,puVar4);
    lVar2 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::totalDataCount;
    _swift_beginAccess(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::totalDataCount,
                       local_140,0,0);
    local_158[0] = 8;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + lVar2),local_158,puVar4);
    lVar2 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl;
    _swift_beginAccess(unaff_x20 +
                       _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl,local_158
                       ,0,0);
    local_170[0] = *(undefined8 *)(unaff_x20 + lVar2);
    local_188[0] = CONCAT71(local_188[0]._1_7_,9);
    puVar7 = &DAT_100aaf120;
    FUN_100004bb4(&DAT_100aaf120,&BYTE_1008450a0);
    puVar8 = &DAT_100aaf128;
    FUN_1005fa37c(&DAT_100aaf128,&DAT_100aaf118,PTR___s10Foundation3URLVSEAAMc_100996198,
                  PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (local_170,local_188,puVar4,puVar7,puVar8);
    lVar2 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName;
    _swift_beginAccess(unaff_x20 +
                       _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName,
                       local_170,0,0);
    local_188[0] = *(undefined8 *)(unaff_x20 + lVar2);
    local_1a0[0] = 10;
    puVar7 = &DAT_100aae0a0;
    FUN_100004bb4(&DAT_100aae0a0,&DAT_10083f500);
    puVar8 = &DAT_100aae0a8;
    FUN_1005da960(&DAT_100aae0a8,PTR___sSSSEsWP_100995800,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (local_188,local_1a0,puVar4,puVar7,puVar8);
    lVar2 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl;
    _swift_beginAccess(unaff_x20 +
                       _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl,
                       local_188,0,0);
    FUN_1005fa214(unaff_x20 + lVar2,lVar5);
    local_1a0[0] = 0xb;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (lVar5,local_1a0,puVar4,local_248,local_240);
    FUN_1005fa2b4(lVar5);
    lVar5 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl;
    _swift_beginAccess(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl,
                       local_1a0,0,0);
    puVar3 = local_230;
    FUN_1005fa214(unaff_x20 + lVar5,local_230);
    local_1b8[0] = 0xc;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (puVar3,local_1b8,puVar4,local_248,local_240);
    FUN_1005fa2b4(local_230);
    lVar5 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskStartTime;
    _swift_beginAccess(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskStartTime,
                       local_1b8,0,0);
    local_1d0[0] = 0xd;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
              (*(undefined8 *)(unaff_x20 + lVar5),local_1d0,puVar4);
    lVar5 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userHasPaste;
    _swift_beginAccess(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userHasPaste,
                       local_1d0,0,0);
    local_1e8[0] = 0xe;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + lVar5),local_1e8,puVar4);
    lVar5 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskIsStart;
    _swift_beginAccess(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskIsStart,
                       local_1e8,0,0);
    local_200[0] = 0xf;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + lVar5),local_200,puVar4);
    lVar2 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::result;
    lVar5 = unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::result;
    _swift_beginAccess(lVar5,local_200,0,0);
    local_51 = *(undefined1 *)(unaff_x20 + lVar2);
    local_52 = 0x10;
    FUN_1005ec4f8();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_51,&local_52,puVar4,&DAT_1009dc600,lVar5);
    pcVar9 = *(code **)(lVar11 + 8);
  }
  else {
    pcVar9 = *(code **)(lVar11 + 8);
  }
  (*pcVar9)(lVar10 - extraout_x8_00,puVar4);
  return;
}

