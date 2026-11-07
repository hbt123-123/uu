// rea decompile_all
// name: FUN_1005cae3c
// address: 0x1005cae3c
// body: available
// range: 0x1005cae3c-0x1005cb273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1005cae3c(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5,
                  undefined8 param_6,ulong *param_7,undefined8 param_8,ulong *param_9,
                  undefined8 param_10,undefined1 param_11,undefined4 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x21;
  undefined *local_150;
  code *pcStack_148;
  code *local_140;
  code *pcStack_138;
  ulong *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [16];
  ulong local_100;
  ulong *puStack_f8;
  undefined8 local_f0;
  ulong *puStack_e8;
  undefined8 local_e0;
  ulong *puStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_a8 [5];
  ulong *puStack_80;
  ulong local_78;
  ulong *puStack_70;
  
  local_d0 = param_10;
  local_c8 = param_11;
  local_c0 = param_13;
  uStack_b8 = param_14;
  local_100 = param_4;
  puStack_f8 = param_5;
  local_f0 = param_6;
  puStack_e8 = param_7;
  local_e0 = param_8;
  puStack_d8 = param_9;
  if ((param_3 >> 0x3c & 1) == 0) {
    local_128 = param_1;
    local_120 = param_6;
    local_118 = param_8;
    if ((param_3 >> 0x3d & 1) == 0) {
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_1005cb224;
      local_130 = (ulong *)((param_3 & 0xfffffffffffffff) + 0x20);
      local_78 = local_78 & 0xffffffffffffff00;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_140 = (code *)&local_78;
      _swift_bridgeObjectRetain_n(param_7,2);
      _swift_bridgeObjectRetain_n(param_9,2);
      _swift_retain_n(param_10,2);
      pcVar1 = FUN_1001326cc;
      FUN_100152adc(FUN_1001326cc,&local_150,param_4,param_5);
      if (((ulong)pcVar1 & 1) == 0) {
        _swift_bridgeObjectRetain(param_7);
        _swift_bridgeObjectRetain(param_9);
        _swift_retain(param_10);
        pcStack_138 = (code *)local_130;
        goto LAB_1005cb170;
      }
      local_a8[4] = 0;
      puStack_80 = (ulong *)0xe100000000000000;
      local_a8[2] = 0x305c;
      local_a8[3] = 0xe200000000000000;
      local_78 = param_4;
      puStack_70 = param_5;
      FUN_1005c95cc();
      local_150 = PTR___sSSN_1009957f8;
      puVar2 = local_a8 + 4;
      puVar3 = local_a8 + 2;
      pcStack_148 = pcVar1;
      local_140 = pcVar1;
      pcStack_138 = pcVar1;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (puVar2,puVar3,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      _swift_bridgeObjectRetain(param_7);
      _swift_bridgeObjectRetain(param_9);
      _swift_retain(param_10);
      pcStack_138 = (code *)local_130;
LAB_1005cb0d4:
      local_140 = (code *)param_13;
      FUN_1005cb274(local_128,puVar2,puVar3,local_120,param_7,local_118,param_9,param_10,param_11);
      _swift_bridgeObjectRelease(param_9);
      puVar2 = param_7;
    }
    else {
      puStack_70 = (ulong *)(param_3 & 0xffffffffffffff);
      local_a8[4] = local_a8[4] & 0xffffffffffffff00;
      local_78 = param_2;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_140 = (code *)(local_a8 + 4);
      _swift_bridgeObjectRetain_n(param_7,2);
      _swift_bridgeObjectRetain_n(param_9,2);
      _swift_retain_n(param_10,2);
      pcVar1 = FUN_1001326cc;
      FUN_100152adc(FUN_1001326cc,&local_150,param_4,param_5);
      if (((ulong)pcVar1 & 1) != 0) {
        local_a8[2] = 0;
        local_a8[3] = 0xe100000000000000;
        local_a8[0] = 0x305c;
        local_a8[1] = 0xe200000000000000;
        local_a8[4] = param_4;
        puStack_80 = param_5;
        FUN_1005c95cc();
        local_150 = PTR___sSSN_1009957f8;
        puVar2 = local_a8 + 2;
        puVar3 = local_a8;
        pcStack_148 = pcVar1;
        local_140 = pcVar1;
        pcStack_138 = pcVar1;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (puVar2,puVar3,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
        _swift_bridgeObjectRetain(param_7);
        _swift_bridgeObjectRetain(param_9);
        _swift_retain(param_10);
        pcStack_138 = (code *)&local_78;
        goto LAB_1005cb0d4;
      }
      _swift_bridgeObjectRetain(param_7);
      _swift_bridgeObjectRetain(param_9);
      _swift_retain(param_10);
      pcStack_138 = (code *)&local_78;
LAB_1005cb170:
      local_140 = (code *)param_13;
      FUN_1005cb274(local_128,param_4,param_5,local_120,param_7,local_118,param_9,param_10,param_11)
      ;
      puVar2 = param_9;
      puVar3 = param_7;
    }
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(puVar3);
    _swift_bridgeObjectRelease(param_5);
    _swift_bridgeObjectRelease(param_9);
    _swift_bridgeObjectRelease(param_7);
    _swift_release_n(param_10,2);
  }
  else {
LAB_1005cb224:
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (FUN_1005cde44,auStack_110,param_2,param_3,PTR___sytN_100995e90 + 8);
    if (unaff_x21 != 0) {
      _swift_release(param_10);
      _swift_bridgeObjectRelease(param_9);
      param_9 = param_7;
      goto LAB_1005cb1f0;
    }
    _swift_bridgeObjectRelease(param_5);
  }
  _swift_release(param_10);
  param_5 = param_7;
LAB_1005cb1f0:
  _swift_bridgeObjectRelease(param_9);
  _swift_bridgeObjectRelease(param_5);
  return;
}

