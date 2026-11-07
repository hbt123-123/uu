// rea decompile_all
// name: FUN_1001f1d6c
// address: 0x1001f1d6c
// body: available
// range: 0x1001f1d6c-0x1001f1f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f1d6c(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long unaff_x20;
  undefined1 auStack_80 [16];
  
  if (*(int *)(unaff_x20 + 0x1c) < 1) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1001fa838);
  }
  else {
    if (DAT_100a73be8 != -1) {
      _swift_once(&DAT_100a73be8,FUN_1001e92d8);
    }
    lVar2 = DAT_100a7d518;
    if (*(long *)(DAT_100a7d518 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f1f5c);
      (*pcVar3)();
    }
    _swift_bridgeObjectRetain(DAT_100a7d518);
    FUN_1001a2c70();
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f1f6c);
      (*pcVar3)();
    }
    iVar1 = *(int *)(*(long *)(lVar2 + 0x38) + param_1 * 4);
    _swift_bridgeObjectRelease(lVar2);
    iVar4 = _tcgetpgrp(*(int *)(unaff_x20 + 0x18));
    if (iVar4 < 1) {
      iVar4 = *(int *)(unaff_x20 + 0x1c);
    }
    if (SBORROW4(0,iVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f1f60);
      (*pcVar3)();
    }
    iVar4 = _kill(-iVar4,iVar1);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    if (iVar4 < 0) {
      FUN_1003fb4ec(FUN_1001fa850,auStack_80,0xd000000000000095,0x80000001008a00c0,
                    0xd00000000000001b,0x80000001008a1bf0,0x59e,0);
    }
    else {
      FUN_1003fb48c(FUN_1001fa840,auStack_80,0xd000000000000095,0x80000001008a00c0,
                    0xd00000000000001b,0x80000001008a1bf0,0x5a0,0);
    }
  }
  return;
}

