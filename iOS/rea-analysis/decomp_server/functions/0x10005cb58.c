// rea decompile_all
// name: FUN_10005cb58
// address: 0x10005cb58
// body: available
// range: 0x10005cb58-0x10005cd03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005cb58(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    pcVar3 = *(code **)(param_2 + 0x78);
    if (pcVar3 != (code *)0x0) {
      uVar4 = *(undefined8 *)(param_2 + 0x80);
      _swift_retain(uVar4);
      (*pcVar3)(param_5,param_6,4);
      FUN_10007ed2c(pcVar3,uVar4);
    }
    FUN_100075dc8(param_4);
    FUN_10005d508();
    FUN_10005dad4(0x65766f6d6572,0xe600000000000000,param_3,param_4,0);
    pcVar3 = *(code **)(param_2 + 0x78);
    if (pcVar3 != (code *)0x0) {
      uVar4 = *(undefined8 *)(param_2 + 0x80);
      _swift_retain(uVar4);
      (*pcVar3)(0x65766f6d6572,0xe600000000000000,5);
      FUN_10007ed2c(pcVar3,uVar4);
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar2 = DAT_100b36068;
      uVar1 = DAT_100b36060;
      if (DAT_100a73b10 != -1) {
        _swift_once(&DAT_100a73b10,FUN_100041da4);
        puVar2 = DAT_100b36068;
        uVar1 = DAT_100b36060;
      }
    }
    else {
      pcVar3 = *(code **)(param_2 + 0x78);
      if (pcVar3 != (code *)0x0) {
        uVar4 = *(undefined8 *)(param_2 + 0x80);
        _swift_retain(uVar4);
        (*pcVar3)(param_1,0,3);
        FUN_10007ed2c(pcVar3,uVar4);
      }
      puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
      uVar1 = 0x2715;
    }
    (*param_7)(uVar1,puVar2);
    _swift_release(param_2);
  }
  return;
}

