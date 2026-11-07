// rea decompile_all
// name: FUN_1005cc4bc
// address: 0x1005cc4bc
// body: available
// range: 0x1005cc4bc-0x1005cc7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cc4bc(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,long param_7,undefined1 param_8,ulong param_9,undefined8 param_10)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined1 auStack_110 [16];
  long local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  ulong *puStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  ulong local_c0;
  ulong uStack_b8;
  long local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  local_90 = param_10;
  local_c0 = param_5;
  uStack_b8 = param_6;
  local_b0 = param_7;
  local_a8 = param_8;
  local_a0 = param_2;
  uStack_98 = param_9;
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) != 0) {
      uStack_70 = param_4 & 0xffffffffffffff;
      local_78 = param_3;
      (*(code *)PTR____chkstk_darwin_100995498)();
      puStack_e8 = &local_78;
      uStack_d8 = param_10;
      local_e0 = param_9;
      if ((param_6 >> 0x3c & 1) == 0) {
        if ((param_6 >> 0x3d & 1) == 0) {
          if ((param_5 >> 0x3c & 1) == 0) goto LAB_1005cc738;
          uVar3 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
          if (0x7ffffffe < param_9) {
            param_9 = 0x7fffffff;
          }
          local_100 = param_7;
          local_f8 = param_8;
          local_f0 = param_2;
          _swift_bridgeObjectRetain(param_6);
          _swift_retain(param_7);
          puVar1 = (ulong *)((param_6 & 0xfffffffffffffff) + 0x20);
        }
        else {
          uStack_80 = param_6 & 0xffffffffffffff;
          uVar3 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
          if (0x7ffffffe < param_9) {
            param_9 = 0x7fffffff;
          }
          local_100 = param_7;
          local_f8 = param_8;
          local_f0 = param_2;
          local_88 = param_5;
          _swift_bridgeObjectRetain(param_6);
          _swift_retain(param_7);
          puVar1 = &local_88;
        }
        FUN_1005ce6e8(uVar3,param_8,param_2,&local_78,puVar1,param_9,param_10);
      }
      else {
LAB_1005cc738:
        local_100 = param_7;
        local_f8 = param_8;
        local_f0 = param_2;
        _swift_bridgeObjectRetain(param_6);
        _swift_retain(param_7);
        __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
                  (extraout_x8_00,FUN_1005ce024,auStack_110,param_5,param_6,PTR___sytN_100995e90 + 8
                  );
      }
      goto LAB_1005cc6bc;
    }
    if ((param_3 >> 0x3c & 1) != 0) {
      puVar1 = (ulong *)((param_4 & 0xfffffffffffffff) + 0x20);
      (*(code *)PTR____chkstk_darwin_100995498)();
      uStack_d8 = param_10;
      puStack_e8 = puVar1;
      local_e0 = param_9;
      if ((param_6 >> 0x3c & 1) == 0) {
        if ((param_6 >> 0x3d & 1) == 0) {
          if ((param_5 >> 0x3c & 1) == 0) goto LAB_1005cc784;
          uVar3 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
          if (0x7ffffffe < param_9) {
            param_9 = 0x7fffffff;
          }
          local_100 = param_7;
          local_f8 = param_8;
          local_f0 = param_2;
          _swift_bridgeObjectRetain(param_6);
          _swift_retain(param_7);
          puVar2 = (ulong *)((param_6 & 0xfffffffffffffff) + 0x20);
        }
        else {
          uStack_70 = param_6 & 0xffffffffffffff;
          uVar3 = *(undefined8 *)(param_7 + _TtC12NRDSecureLog12SecureLogger::handle);
          if (0x7ffffffe < param_9) {
            param_9 = 0x7fffffff;
          }
          local_100 = param_7;
          local_f8 = param_8;
          local_f0 = param_2;
          local_78 = param_5;
          _swift_bridgeObjectRetain(param_6);
          _swift_retain(param_7);
          puVar2 = &local_78;
        }
        FUN_1005ce6e8(uVar3,param_8,param_2,puVar1,puVar2,param_9,param_10);
      }
      else {
LAB_1005cc784:
        local_100 = param_7;
        local_f8 = param_8;
        local_f0 = param_2;
        _swift_bridgeObjectRetain(param_6);
        _swift_retain(param_7);
        __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
                  (extraout_x8,FUN_1005ce024,auStack_110,param_5,param_6,PTR___sytN_100995e90 + 8);
      }
      goto LAB_1005cc6bc;
    }
  }
  _swift_bridgeObjectRetain(param_6);
  _swift_retain(param_7);
  __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
            (param_1,FUN_1005ce038,auStack_d0,param_3,param_4,PTR___sytN_100995e90 + 8);
LAB_1005cc6bc:
  _swift_release(param_7);
  _swift_bridgeObjectRelease(param_6);
  return;
}

