// rea decompile_all
// name: FUN_10005d098
// address: 0x10005d098
// body: available
// range: 0x10005d098-0x10005d157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005d098(undefined1 *param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    uVar4 = 2;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    _swift_unknownObjectRetain(uVar5);
    _swift_release();
    FUN_100075194();
    _swift_unknownObjectRelease(uVar5);
    lVar2 = *(long *)(param_2 + 0x10);
    lVar3 = 0x20;
    do {
      if (lVar2 == 0) {
        uVar4 = 1;
        goto LAB_10005d138;
      }
      piVar1 = (int *)(param_2 + lVar3);
      lVar3 = lVar3 + 4;
      lVar2 = lVar2 + -1;
    } while (*piVar1 != *(int *)(param_3 + 0x60));
    uVar4 = 2;
LAB_10005d138:
    _swift_bridgeObjectRelease(param_2);
  }
  *param_1 = uVar4;
  return;
}

