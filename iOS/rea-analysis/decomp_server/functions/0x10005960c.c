// rea decompile_all
// name: FUN_10005960c
// address: 0x10005960c
// body: available
// range: 0x10005960c-0x1000596e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005960c(undefined1 *param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
LAB_1000596cc:
    uVar5 = 2;
  }
  else {
    lVar4 = param_2;
    FUN_100075194();
    iVar3 = *(int *)(param_3 + 0x60);
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = 0x20;
    do {
      if (lVar6 == 0) {
        _swift_bridgeObjectRelease();
        iVar2 = iVar3;
        _CGDisplayIsOnline();
        if (iVar2 == 0) {
          _swift_release(param_2);
          goto LAB_1000596cc;
        }
        _CGDisplayIsActive();
        _swift_release(param_2);
        if (iVar3 != 0) goto LAB_1000596cc;
        uVar5 = 1;
        goto LAB_1000596d0;
      }
      piVar1 = (int *)(lVar4 + lVar7);
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (*piVar1 != iVar3);
    _swift_release(param_2);
    _swift_bridgeObjectRelease(lVar4);
    uVar5 = 0;
  }
LAB_1000596d0:
  *param_1 = uVar5;
  return;
}

