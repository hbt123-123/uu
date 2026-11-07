// rea decompile_all
// name: FUN_1005cc7cc
// address: 0x1005cc7cc
// body: available
// range: 0x1005cc7cc-0x1005cc903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cc7cc(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  undefined1 param_6,undefined8 param_7,ulong param_8,undefined8 param_9)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong uStack_58;
  
  local_90 = param_5;
  local_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_2;
  local_70 = param_8;
  uStack_68 = param_9;
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) goto LAB_1005cc8bc;
      uVar2 = *(undefined8 *)(param_5 + _TtC12NRDSecureLog12SecureLogger::handle);
      if (0x7ffffffe < param_8) {
        param_8 = 0x7fffffff;
      }
      _swift_retain(param_5);
      puVar1 = (ulong *)((param_4 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_58 = param_4 & 0xffffffffffffff;
      uVar2 = *(undefined8 *)(param_5 + _TtC12NRDSecureLog12SecureLogger::handle);
      if (0x7ffffffe < param_8) {
        param_8 = 0x7fffffff;
      }
      local_60 = param_3;
      _swift_retain(param_5);
      puVar1 = &local_60;
    }
    FUN_1005ce6e8(uVar2,param_6,param_7,param_2,puVar1,param_8,param_9);
  }
  else {
LAB_1005cc8bc:
    _swift_retain(param_5);
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (param_1,FUN_1005ce024,auStack_a0,param_3,param_4,PTR___sytN_100995e90 + 8);
  }
  _swift_release(param_5);
  return;
}

