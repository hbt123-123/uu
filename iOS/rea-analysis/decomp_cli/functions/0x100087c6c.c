// rea decompile_all
// name: FUN_100087c6c
// address: 0x100087c6c
// body: available
// range: 0x100087c6c-0x10008817f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100087c6c(undefined8 *******param_1,undefined8 *****param_2,undefined8 *****param_3,
                  byte param_4,undefined8 *****param_5,undefined8 *param_6,char param_7)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  code *pcVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined *puVar8;
  undefined8 *****pppppuVar9;
  undefined *puVar10;
  undefined8 ******ppppppuVar11;
  long unaff_x21;
  undefined8 *******pppppppuVar12;
  byte local_158 [24];
  undefined *local_140;
  undefined8 *******local_138;
  undefined8 *****pppppuStack_130;
  undefined8 *****local_128;
  undefined8 *****pppppuStack_120;
  undefined8 *****local_118;
  undefined8 *****pppppuStack_110;
  undefined8 *****local_108;
  undefined8 *****pppppuStack_100;
  undefined1 local_f8;
  undefined8 *******local_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 *****local_e0;
  undefined8 *****local_d8;
  undefined8 *****local_d0;
  undefined8 *****pppppuStack_c8;
  undefined8 *****local_c0;
  undefined8 *****local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  undefined8 *****pppppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  pppppuStack_98 = (undefined8 *****)param_6[1];
  local_a0 = *param_6;
  uStack_88 = param_6[3];
  uStack_90 = param_6[2];
  local_80 = param_6[4];
  FUN_1000997ac(&local_138);
  pppppuVar9 = pppppuStack_100;
  if (pppppuStack_130 == (undefined8 *****)0x0) {
    FUN_10001fc18(&local_138,&DAT_100104818,&DAT_1000d62d0);
LAB_100087e58:
    pppppuStack_120 = (undefined8 *****)PTR___sSbN_1000f03a0;
    local_138 = (undefined8 *******)(CONCAT71(local_138._1_7_,param_4) & 0xffffffffffffff01);
    FUN_1000866dc(&local_138,&local_d8);
    local_b0 = 1;
    local_f0 = param_1;
    pppppuStack_e8 = param_2;
    local_e0 = param_3;
    local_b8 = param_5;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_5);
    FUN_100099afc(&local_f0);
    FUN_100065194(&local_f0);
    puVar8 = &DAT_100104198;
    puVar10 = &DAT_1000d5180;
  }
  else {
    pppppuStack_c8 = pppppuStack_110;
    local_d0 = local_118;
    local_b8 = pppppuStack_100;
    local_c0 = local_108;
    local_b0 = local_f8;
    pppppuStack_e8 = pppppuStack_130;
    local_f0 = local_138;
    local_d8 = pppppuStack_120;
    local_e0 = local_128;
    pppppppuVar12 = (undefined8 *******)pppppuStack_100[2];
    pppppppuVar6 = (undefined8 *******)PTR___swiftEmptyArrayStorage_1000f0740;
    if (pppppppuVar12 != (undefined8 *******)0x0) {
      pppppppuVar6 = pppppppuVar12;
      FUN_100079728(pppppppuVar12,0);
      pppppppuVar7 = &local_138;
      FUN_10008e0d4(pppppppuVar7,pppppppuVar6 + 4,pppppppuVar12,pppppuVar9);
      pppppuVar4 = local_118;
      pppppuVar3 = pppppuStack_120;
      pppppuVar2 = local_128;
      pppppuVar1 = pppppuStack_130;
      _swift_bridgeObjectRetain(pppppuVar9);
      FUN_10008f124(local_138,pppppuVar1,pppppuVar2,pppppuVar3,pppppuVar4);
      if (pppppppuVar7 != pppppppuVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10008816c);
        (*pcVar5)();
      }
    }
    local_138 = pppppppuVar6;
    _swift_retain(pppppppuVar6);
    FUN_1000afe18(&local_138);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      _swift_release(local_138);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100088180);
      (*pcVar5)();
    }
    _swift_release(pppppppuVar6);
    ppppppuVar11 = local_138[2];
    _swift_release();
    FUN_100065194(&local_f0);
    if (ppppppuVar11 == (undefined8 ******)0x0) goto LAB_100087e58;
    if (param_7 != '\0') {
      if (param_7 == '\x01') {
        FUN_1000997ac(&local_138,param_1,param_2,param_3);
        puVar8 = PTR___sSbN_1000f03a0;
        if (pppppuStack_130 == (undefined8 *****)0x0) {
          local_c0 = (undefined8 *****)PTR___sSbN_1000f03a0;
          local_d8 = (undefined8 *****)(CONCAT71(local_d8._1_7_,param_4) & 0xffffffffffffff01);
          pppppuVar9 = (undefined8 *****)PTR___swiftEmptyArrayStorage_1000f0740;
          FUN_100097700();
          local_b0 = 1;
          local_f0 = param_1;
          pppppuStack_e8 = param_2;
          local_e0 = param_3;
          local_b8 = pppppuVar9;
          _swift_bridgeObjectRetain(param_2);
          _swift_bridgeObjectRetain(param_3);
        }
        else {
          pppppuStack_c8 = pppppuStack_110;
          local_d0 = local_118;
          local_b8 = pppppuStack_100;
          local_c0 = local_108;
          local_b0 = local_f8;
          pppppuStack_e8 = pppppuStack_130;
          local_f0 = local_138;
          local_d8 = pppppuStack_120;
          local_e0 = local_128;
        }
        FUN_1000866dc(&local_d8,&local_138);
        puVar10 = &DAT_100104198;
        FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
        ppppppuVar11 = (undefined8 ******)local_158;
        _swift_dynamicCast(ppppppuVar11,&local_138,puVar10,puVar8,6);
        if ((int)ppppppuVar11 == 0) {
          local_158[0] = param_4;
        }
        pppppuStack_120 = (undefined8 *****)puVar8;
        local_138 = (undefined8 *******)
                    (CONCAT71(local_138._1_7_,local_158[0]) & 0xffffffffffffff01);
        FUN_10008f168(&local_138,&local_d8);
        _swift_bridgeObjectRetain(param_5);
        FUN_100080a28();
        FUN_100099afc(&local_f0);
LAB_1000880ac:
        FUN_100065194(&local_f0);
        return;
      }
      goto LAB_100087e58;
    }
    FUN_1000997ac(&local_138,param_1,param_2,param_3);
    if (pppppuStack_130 != (undefined8 *****)0x0) {
      pppppuStack_c8 = pppppuStack_110;
      local_d0 = local_118;
      local_b8 = pppppuStack_100;
      local_c0 = local_108;
      local_b0 = local_f8;
      pppppuStack_e8 = pppppuStack_130;
      local_f0 = local_138;
      local_d8 = pppppuStack_120;
      local_e0 = local_128;
      FUN_1000866dc(&local_d8,&local_138);
      puVar8 = &DAT_100104198;
      FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
      puVar10 = PTR___sSbN_1000f03a0;
      ppppppuVar11 = (undefined8 ******)local_158;
      _swift_dynamicCast(ppppppuVar11,&local_138,puVar8,PTR___sSbN_1000f03a0,6);
      pppppuVar1 = pppppuStack_98;
      pppppuVar9 = local_b8;
      if (((((ulong)ppppppuVar11 & 1) == 0) || (local_158[0] == 2)) ||
         (((local_158[0] ^ param_4) & 1) != 0)) {
        FUN_100054664();
        _swift_allocError(&DAT_1000fa8c8,ppppppuVar11,0,0);
        *ppppppuVar11 = pppppuVar9;
        ppppppuVar11[1] = param_5;
        ppppppuVar11[2] = pppppuVar1;
        pppppppuVar6 = local_138;
        ppppppuVar11[6] = pppppuStack_120;
        ppppppuVar11[5] = local_128;
        ppppppuVar11[4] = pppppuStack_130;
        ppppppuVar11[3] = pppppppuVar6;
        ppppppuVar11[8] = pppppuStack_110;
        ppppppuVar11[7] = local_118;
        ppppppuVar11[9] = local_108;
        *(undefined1 *)(ppppppuVar11 + 10) = 0xb;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_5);
        _swift_bridgeObjectRetain(pppppuVar9);
        _swift_bridgeObjectRetain(pppppuVar1);
        goto LAB_1000880ac;
      }
      local_140 = puVar10;
      local_158[0] = param_4 & 1;
      FUN_1000866dc(local_158,&pppppuStack_120);
      local_f8 = 1;
      local_138 = param_1;
      pppppuStack_130 = param_2;
      local_128 = param_3;
      pppppuStack_100 = param_5;
      _swift_bridgeObjectRetain(param_5);
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_3);
      FUN_100099afc(&local_138);
      FUN_100065194(&local_138);
      FUN_100065194(&local_f0);
      puVar8 = &DAT_100104198;
      puVar10 = &DAT_1000d5180;
      pppppppuVar6 = (undefined8 *******)local_158;
      goto LAB_100087ed0;
    }
    puVar8 = &DAT_100104818;
    puVar10 = &DAT_1000d62d0;
  }
  pppppppuVar6 = &local_138;
LAB_100087ed0:
  FUN_10001fc18(pppppppuVar6,puVar8,puVar10);
  return;
}

