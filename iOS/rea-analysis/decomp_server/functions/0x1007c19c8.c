// rea decompile_all
// name: FUN_1007c19c8
// address: 0x1007c19c8
// body: available
// range: 0x1007c19c8-0x1007c1ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c19c8(ulong param_1)

{
  code *pcVar1;
  ulong *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar2 = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    _swift_bridgeObjectRelease(param_1);
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if ((long)uVar3 < 0) {
      uVar4 = uVar3;
    }
    _swift_bridgeObjectRetain(uVar3);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    _swift_bridgeObjectRelease(uVar3);
  }
  if (!SCARRY8(uVar4,uVar2)) {
    FUN_1007c17e4(uVar4 + uVar2,1,FUN_1007d1d94);
    uVar3 = *unaff_x20;
    uVar4 = uVar3 & 0xffffffffffffff8;
    FUN_1007c1c30(uVar4 + *(long *)(uVar4 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar4 + 0x18) >> 1) - *(long *)(uVar4 + 0x10));
    if ((long)param_1 < (long)uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1ae0);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar4 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1ae4);
        (*pcVar1)();
      }
      *(ulong *)(uVar4 + 0x10) = *(long *)(uVar4 + 0x10) + param_1;
    }
    _swift_bridgeObjectRelease();
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1adc);
  (*pcVar1)();
}

