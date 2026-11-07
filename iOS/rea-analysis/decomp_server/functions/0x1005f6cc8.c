// rea decompile_all
// name: FUN_1005f6cc8
// address: 0x1005f6cc8
// body: available
// range: 0x1005f6cc8-0x1005f75f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f71b0) */
/* WARNING: Removing unreachable block (ram,0x0001005f725c) */
/* WARNING: Removing unreachable block (ram,0x0001005f7268) */
/* WARNING: Removing unreachable block (ram,0x0001005f75a4) */
/* WARNING: Removing unreachable block (ram,0x0001005f6f98) */
/* WARNING: Removing unreachable block (ram,0x0001005f70ec) */
/* WARNING: Removing unreachable block (ram,0x0001005f7100) */
/* WARNING: Removing unreachable block (ram,0x0001005f7104) */

long FUN_1005f6cc8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar14;
  long unaff_x21;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_290 [8];
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  undefined1 *local_250;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  undefined8 *local_218;
  long local_210;
  byte *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined1 *local_1f0;
  long local_1e8;
  undefined *local_1e0;
  undefined1 local_1c0 [31];
  undefined1 local_1a1;
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170;
  undefined7 uStack_16f;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  
  puVar6 = &DAT_100aaf0f8;
  FUN_100004bb4(&DAT_100aaf0f8,&BYTE_100845090);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  local_250 = auStack_290 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (long)(auStack_290 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_240 = lVar13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar13 - extraout_x12_00;
  puVar6 = &DAT_100aaf130;
  local_210 = lVar13;
  FUN_100004bb4(&DAT_100aaf130,&BYTE_1008450b0);
  local_1e8 = *(long *)(puVar6 + -8);
  local_1e0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_1e8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_00;
  local_1f0 = (undefined1 *)(unaff_x20 + 0x10);
  *local_1f0 = 0;
  local_1f8 = (undefined8 *)(unaff_x20 + 0x18);
  *local_1f8 = 0;
  local_200 = (undefined8 *)(unaff_x20 + 0x28);
  *local_200 = 0;
  local_208 = (byte *)(unaff_x20 + 0x30);
  *local_208 = 0;
  local_218 = (undefined8 *)(unaff_x20 + 0x38);
  *local_218 = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  lVar12 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl;
  lVar7 = 0;
  __s10Foundation3URLVMa();
  pcVar14 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  local_220 = lVar12;
  (*pcVar14)(unaff_x20 + lVar12,1,1,lVar7);
  local_228 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::receiveDataCount;
  *(undefined8 *)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::receiveDataCount) = 0
  ;
  local_230 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::totalDataCount;
  *(undefined8 *)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::totalDataCount) = 0;
  local_238 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl;
  *(undefined8 *)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl) =
       0;
  local_248 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName;
  *(undefined8 *)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName)
       = 0;
  local_258 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl;
  (*pcVar14)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl,1,1,
             lVar7);
  local_260 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl;
  (*pcVar14)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl,1,1,lVar7);
  local_268 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskStartTime;
  *(undefined8 *)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskStartTime) = 0;
  lVar12 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userHasPaste;
  *(undefined1 *)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userHasPaste) = 0;
  lVar1 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskIsStart;
  *(undefined1 *)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskIsStart) = 0;
  lVar2 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::result;
  *(undefined1 *)(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::result) = 0;
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  lVar8 = param_2;
  FUN_10003f030(param_2,uVar15);
  FUN_1005fa2fc();
  puVar6 = &DAT_1009dc720;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar13,&DAT_1009dc720,&DAT_1009dc720,lVar8,uVar15,uVar16);
  puVar9 = local_1f0;
  if (unaff_x21 == 0) {
    local_278 = lVar12;
    local_288 = lVar2;
    local_280 = lVar1;
    local_80[0] = 0;
    local_270 = lVar7;
    FUN_1005fa400();
    puVar5 = local_1e0;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_98,&DAT_1009dc570,local_80,local_1e0,&DAT_1009dc570,puVar6);
    _swift_beginAccess(puVar9,local_80,1,0);
    *puVar9 = local_98[0];
    local_98[0] = 1;
    puVar9 = local_98;
    puVar6 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    _swift_beginAccess(local_1f8,local_98,1,0);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined1 **)(unaff_x20 + 0x18) = puVar9;
    *(undefined **)(unaff_x20 + 0x20) = puVar6;
    _swift_bridgeObjectRelease(uVar15);
    local_b0[0] = 2;
    puVar9 = local_b0;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF(puVar9,puVar5);
    puVar4 = local_200;
    _swift_beginAccess(local_200,local_b0,1,0);
    *(int *)puVar4 = (int)puVar9;
    local_c8[0] = 3;
    puVar9 = local_c8;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF(puVar9,puVar5);
    _swift_beginAccess(unaff_x20 + 0x2c,local_c8,1,0);
    *(int *)(unaff_x20 + 0x2c) = (int)puVar9;
    local_e0[0] = 4;
    puVar9 = local_e0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar9,puVar5);
    pbVar3 = local_208;
    _swift_beginAccess(local_208,local_e0,1,0);
    *pbVar3 = (byte)puVar9 & 1;
    local_f8[0] = 5;
    puVar9 = local_f8;
    puVar6 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    _swift_beginAccess(local_218,local_f8,1,0);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined1 **)(unaff_x20 + 0x38) = puVar9;
    *(undefined **)(unaff_x20 + 0x40) = puVar6;
    _swift_bridgeObjectRelease(uVar15);
    local_110[0] = 6;
    puVar6 = &DAT_100aaf140;
    FUN_100144654(&DAT_100aaf140,PTR___s10Foundation3URLVSeAAMc_1009961b0);
    lVar1 = local_210;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_210,local_270,local_110,puVar5,local_270,puVar6);
    lVar12 = local_220;
    _swift_beginAccess(unaff_x20 + local_220,local_110,0x21,0);
    FUN_1005fa264(lVar1,unaff_x20 + lVar12);
    _swift_endAccess(local_110);
    local_110[0] = 7;
    puVar9 = local_110;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar9,puVar5);
    lVar12 = local_228;
    _swift_beginAccess(unaff_x20 + local_228,local_110,1,0);
    *(undefined1 **)(unaff_x20 + lVar12) = puVar9;
    local_128[0] = 8;
    puVar9 = local_128;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar9,puVar5);
    lVar12 = local_230;
    _swift_beginAccess(unaff_x20 + local_230,local_128,1,0);
    *(undefined1 **)(unaff_x20 + lVar12) = puVar9;
    puVar10 = &DAT_100aaf120;
    FUN_100004bb4(&DAT_100aaf120,&BYTE_1008450a0);
    local_140[0] = 9;
    puVar11 = &DAT_100aaf148;
    FUN_1005fa37c(&DAT_100aaf148,&DAT_100aaf140,PTR___s10Foundation3URLVSeAAMc_1009961b0,
                  PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_158,puVar10,local_140,puVar5,puVar10,puVar11);
    lVar12 = local_238;
    _swift_beginAccess(unaff_x20 + local_238,local_140,1,0);
    uVar15 = *(undefined8 *)(unaff_x20 + lVar12);
    *(ulong *)(unaff_x20 + lVar12) = CONCAT71(uStack_157,local_158);
    _swift_bridgeObjectRelease(uVar15);
    puVar10 = &DAT_100aae0a0;
    FUN_100004bb4(&DAT_100aae0a0,&DAT_10083f500);
    local_158 = 10;
    puVar11 = &DAT_100aae0d0;
    FUN_1005da960(&DAT_100aae0d0,PTR___sSSSesWP_100995828,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_170,puVar10,&local_158,local_1e0,puVar10,puVar11);
    lVar12 = local_248;
    _swift_beginAccess(unaff_x20 + local_248,&local_158,1,0);
    uVar15 = *(undefined8 *)(unaff_x20 + lVar12);
    *(ulong *)(unaff_x20 + lVar12) = CONCAT71(uStack_16f,local_170);
    _swift_bridgeObjectRelease(uVar15);
    local_170 = 0xb;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_240,local_270,&local_170,local_1e0,local_270,puVar6);
    lVar12 = local_258;
    _swift_beginAccess(unaff_x20 + local_258,&local_170,0x21,0);
    FUN_1005fa264(local_240,unaff_x20 + lVar12);
    _swift_endAccess(&local_170);
    local_170 = 0xc;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_250,local_270,&local_170,local_1e0,local_270,puVar6);
    lVar12 = local_260;
    _swift_beginAccess(unaff_x20 + local_260,&local_170,0x21,0);
    FUN_1005fa264(local_250,unaff_x20 + lVar12);
    _swift_endAccess(&local_170);
    local_170 = 0xd;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_170,local_1e0);
    lVar12 = local_268;
    _swift_beginAccess(unaff_x20 + local_268,&local_170,1,0);
    *(undefined8 *)(unaff_x20 + lVar12) = param_1;
    local_188[0] = 0xe;
    puVar9 = local_188;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar9,local_1e0);
    lVar12 = local_278;
    _swift_beginAccess(unaff_x20 + local_278,local_188,1,0);
    *(byte *)(unaff_x20 + lVar12) = (byte)puVar9 & 1;
    local_1a0[0] = 0xf;
    puVar9 = local_1a0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar9,local_1e0);
    lVar1 = local_280;
    lVar12 = unaff_x20 + local_280;
    _swift_beginAccess(lVar12,local_1a0,1,0);
    *(byte *)(unaff_x20 + lVar1) = (byte)puVar9 & 1;
    local_1c0[0] = 0x10;
    FUN_1005f0d84();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1a1,&DAT_1009dc600,local_1c0,local_1e0,&DAT_1009dc600,lVar12);
    (**(code **)(local_1e8 + 8))(lVar13,local_1e0);
    lVar12 = local_288;
    _swift_beginAccess(unaff_x20 + local_288,local_1c0,1,0);
    *(undefined1 *)(unaff_x20 + lVar12) = local_1a1;
  }
  else {
    _swift_release();
  }
  FUN_10003f094(param_2);
  return unaff_x20;
}

