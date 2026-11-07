// rea decompile_all
// name: FUN_10013d66c
// address: 0x10013d66c
// body: available
// range: 0x10013d66c-0x10013d827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013d66c(char *param_1,char *param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 local_64;
  long local_58;
  
  cVar4 = *param_2;
  uVar3 = *(undefined8 *)
           (param_3 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_64 = *(undefined4 *)(param_4 + 0x14);
  _swift_retain(uVar3);
  FUN_1003e37e8(&local_58,&local_64);
  _swift_release(uVar3);
  if (local_58 == 0) {
    FUN_100401b14();
    FUN_1003fb48c(FUN_10014564c,param_4,0xd0000000000000ad,0x8000000100890750,&DAT_d000000000000028,
                  0x8000000100891250,0xdd,0);
    cVar4 = '\0';
  }
  else {
    _swift_release();
    FUN_100190aa4(*(undefined4 *)(param_4 + 0x14),param_5,param_6);
    lVar2 = 0;
    FUN_10016db04();
    _swift_initStackObject();
    uVar3 = 0;
    FUN_10016dae4(0);
    _swift_initStackObject();
    FUN_10016d3cc();
    *(undefined1 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x28) = 0xf000000000000000;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined1 *)(lVar2 + 0x38) = 1;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(long *)(lVar2 + 0x10) = param_4;
    _swift_retain(param_4);
    _swift_release(uVar3);
    uVar1 = 0;
    if (cVar4 == '\0') {
      uVar1 = 2;
    }
    *(undefined1 *)(lVar2 + 0x18) = uVar1;
    FUN_10013e3f8(lVar2);
    _swift_setDeallocating(lVar2);
    _swift_release(*(undefined8 *)(lVar2 + 0x10));
    FUN_100006cc8(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
  }
  *param_1 = cVar4;
  return;
}

