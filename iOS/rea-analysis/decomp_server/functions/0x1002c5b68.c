// rea decompile_all
// name: FUN_1002c5b68
// address: 0x1002c5b68
// body: available
// range: 0x1002c5b68-0x1002c5c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c5b68(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = *unaff_x20;
  lVar5 = *(long *)(lVar3 + 0x10);
  if (SCARRY8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c5c74);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || ((long)(*(ulong *)(lVar3 + 0x18) >> 1) < lVar5 + lVar4)) {
    (*param_2)();
    lVar5 = *(long *)(param_1 + 0x10);
    lVar3 = lVar2;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (lVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c5c78);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x10);
    if ((long)((*(ulong *)(lVar3 + 0x18) >> 1) - lVar5) < lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c5c7c);
      (*pcVar1)();
    }
    FUN_100004bb4(param_3,param_4);
    _swift_arrayInitWithCopy(lVar3 + lVar5 * 0x28 + 0x20,param_1 + 0x20,lVar4,param_3);
    _swift_bridgeObjectRelease(param_1);
    if (lVar4 != 0) {
      if (SCARRY8(*(long *)(lVar3 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c5c80);
        (*pcVar1)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + lVar4;
    }
  }
  *unaff_x20 = lVar3;
  return;
}

