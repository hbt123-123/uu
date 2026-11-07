// rea decompile_all
// name: FUN_10005f374
// address: 0x10005f374
// body: available
// range: 0x10005f374-0x10005f47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005f374(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10005f470);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar6 + lVar5)) {
    FUN_100033f0c();
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (lVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10005f474);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x10);
    uVar3 = *(ulong *)(lVar4 + 0x18);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    if ((long)((uVar3 >> 1) - lVar6) < lVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10005f478);
      (*pcVar1)();
    }
    uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
    uVar3 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar4 + uVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * lVar6,param_1 + uVar3,lVar5
               ,lVar2);
    _swift_bridgeObjectRelease(param_1);
    if (lVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10005f47c);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}

