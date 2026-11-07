// rea decompile_all
// name: FUN_1005cb274
// address: 0x1005cb274
// body: available
// range: 0x1005cb274-0x1005cb70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cb274(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6,long param_7,uint param_8,undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar5;
  long unaff_x21;
  undefined1 auStack_150 [16];
  long local_140;
  undefined1 local_138;
  ulong *local_130;
  ulong *puStack_128;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  ulong local_100;
  ulong uStack_f8;
  long local_f0;
  undefined1 local_e8;
  ulong *local_e0;
  undefined8 local_d0;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  long local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  
  local_88 = (undefined1)param_8;
  local_80 = param_9;
  uStack_78 = param_10;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_1005cb628;
      puVar3 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_e8 = (undefined1)param_8;
      local_100 = param_5;
      local_e0 = puVar3;
      local_d0 = param_10;
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) != 0) {
          uStack_48 = param_4 & 0xffffffffffffff;
          uStack_f8 = param_6;
          local_f0 = param_7;
          local_50 = extraout_x12;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_138 = (undefined1)param_8;
          puStack_128 = &local_50;
          local_130 = puVar3;
          uStack_118 = param_10;
          if ((param_6 >> 0x3c & 1) == 0) {
            if ((param_6 >> 0x3d & 1) == 0) {
              if ((param_5 >> 0x3c & 1) == 0) goto LAB_1005cb6d0;
              uVar1 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
              param_8 = param_8 & 0xff;
            }
            else {
              uVar1 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
              local_60 = param_5;
LAB_1005cb5b8:
              uStack_58 = param_6 & 0xffffffffffffff;
              param_8 = param_8 & 0xff;
            }
            goto LAB_1005cb5e8;
          }
LAB_1005cb6d0:
          pcVar2 = FUN_1005ce024;
LAB_1005cb6f4:
          local_140 = param_7;
          __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
                    (pcVar2,auStack_150,param_5,param_6,PTR___sytN_100995e90 + 8);
          goto LAB_1005cb5f4;
        }
        if ((extraout_x12 >> 0x3c & 1) != 0) {
          puVar4 = (ulong *)((param_4 & 0xfffffffffffffff) + 0x20);
          uStack_f8 = param_6;
          local_f0 = param_7;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_138 = (undefined1)param_8;
          local_130 = puVar3;
          puStack_128 = puVar4;
          uStack_118 = param_10;
          if ((param_6 >> 0x3c & 1) != 0) {
LAB_1005cb6e4:
            pcVar2 = FUN_1005ce024;
            goto LAB_1005cb6f4;
          }
          if ((param_6 >> 0x3d & 1) == 0) {
            if ((param_5 >> 0x3c & 1) == 0) goto LAB_1005cb6e4;
            uVar1 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
            param_8 = param_8 & 0xff;
          }
          else {
            uStack_48 = param_6 & 0xffffffffffffff;
            uVar1 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
            param_8 = param_8 & 0xff;
            local_50 = param_5;
          }
          goto LAB_1005cb5e8;
        }
      }
      pcVar2 = FUN_1005ce038;
      uVar5 = extraout_x12;
    }
    else {
      uStack_48 = param_2 & 0xffffffffffffff;
      local_50 = param_1;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_e8 = (undefined1)param_8;
      local_e0 = &local_50;
      local_100 = param_5;
      local_d0 = param_10;
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) != 0) {
          uStack_58 = param_4 & 0xffffffffffffff;
          uStack_f8 = param_6;
          local_f0 = param_7;
          local_60 = extraout_x12_00;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_138 = (undefined1)param_8;
          local_130 = &local_50;
          puStack_128 = &local_60;
          uStack_118 = param_10;
          if ((param_6 >> 0x3c & 1) != 0) {
LAB_1005cb6a8:
            pcVar2 = FUN_1005cdec8;
            goto LAB_1005cb6f4;
          }
          if ((param_6 >> 0x3d & 1) == 0) {
            if ((param_5 >> 0x3c & 1) == 0) goto LAB_1005cb6a8;
            uVar1 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
            param_8 = param_8 & 0xff;
          }
          else {
            uStack_68 = param_6 & 0xffffffffffffff;
            uVar1 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
            param_8 = param_8 & 0xff;
            local_70 = param_5;
          }
LAB_1005cb5e8:
          local_140 = param_7;
          FUN_1005ce6e8(uVar1,param_8);
          goto LAB_1005cb5f4;
        }
        if ((extraout_x12_00 >> 0x3c & 1) != 0) {
          puVar3 = (ulong *)((param_4 & 0xfffffffffffffff) + 0x20);
          uStack_f8 = param_6;
          local_f0 = param_7;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_138 = (undefined1)param_8;
          local_130 = &local_50;
          puStack_128 = puVar3;
          uStack_118 = param_10;
          if ((param_6 >> 0x3c & 1) == 0) {
            if ((param_6 >> 0x3d & 1) != 0) {
              uVar1 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
              local_60 = param_5;
              goto LAB_1005cb5b8;
            }
            if ((param_5 >> 0x3c & 1) != 0) {
              uVar1 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
              param_8 = param_8 & 0xff;
              goto LAB_1005cb5e8;
            }
          }
          pcVar2 = FUN_1005ce024;
          goto LAB_1005cb6f4;
        }
      }
      pcVar2 = FUN_1005cdeb4;
      uVar5 = extraout_x12_00;
    }
    uStack_f8 = param_6;
    local_f0 = param_7;
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (pcVar2,auStack_110,uVar5,param_4,PTR___sytN_100995e90 + 8);
  }
  else {
LAB_1005cb628:
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (FUN_1005cde80,auStack_c0,param_1,param_2,PTR___sytN_100995e90 + 8);
    if (unaff_x21 != 0) {
      _swift_release(param_7);
      _swift_bridgeObjectRelease(param_6);
      goto LAB_1005cb604;
    }
  }
LAB_1005cb5f4:
  _swift_bridgeObjectRelease(param_4);
  _swift_release(param_7);
  param_4 = param_6;
LAB_1005cb604:
  _swift_bridgeObjectRelease(param_4);
  return;
}

