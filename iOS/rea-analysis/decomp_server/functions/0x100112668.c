// rea decompile_all
// name: FUN_100112668
// address: 0x100112668
// body: available
// range: 0x100112668-0x100112793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100112668(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined1 local_34;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar2 = DAT_100b360a8;
  lVar3 = *(long *)(DAT_100b360a8 + 0x88);
  if (((*(byte *)(lVar3 + 0x14) & 1) == 0) && (iVar1 = *(int *)(lVar3 + 0x10), -1 < iVar1)) {
    uVar4 = *(undefined8 *)(DAT_100b360a8 + 0x80);
    _swift_retain(uVar4);
    local_34 = 0;
    FUN_100021f40(param_1,iVar1,0);
    _swift_release(uVar4);
    lVar3 = *(long *)(lVar2 + 0x88);
  }
  _swift_retain(lVar3);
  FUN_10008323c();
  _swift_release(lVar3);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_50 = (undefined4)param_1;
  FUN_1003fb48c(FUN_100112794,auStack_60,0xd0000000000000ac,0x800000010088b950,&DAT_d000000000000028
                ,0x800000010088bcd0,0x91,0);
  return;
}

