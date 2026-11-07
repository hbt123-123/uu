// rea decompile_all
// name: FUN_10063a460
// address: 0x10063a460
// body: available
// range: 0x10063a460-0x10063a543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063a460(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  if (uVar5 == 0) {
    *(long *)(unaff_x20 + 0x10) = param_1;
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    lVar2 = param_1;
    thunk_FUN_100629d98(param_1,param_1 + 0x20,0,uVar5 | 1);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    if (*(ulong *)(param_1 + 0x10) < uVar5 >> 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a540);
      (*pcVar1)();
    }
    if (uVar5 != 1) {
      lVar2 = param_1;
      thunk_FUN_100629d98(param_1,param_1 + 0x20,uVar5 >> 1,*(ulong *)(param_1 + 0x10) << 1 | 1);
      _swift_bridgeObjectRelease(param_1);
      param_1 = lVar2;
    }
  }
  puVar3 = &DAT_100ab7e48;
  FUN_100004bb4(&DAT_100ab7e48,&DAT_100848d08);
  puVar4 = &DAT_100ab7e30;
  FUN_100004bb4(&DAT_100ab7e30,&DAT_100848ce8);
  if (puVar3 != puVar4) {
    FUN_10067c38c(param_1,0);
    *(long *)(unaff_x20 + 0x18) = param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a544);
  (*pcVar1)();
}

