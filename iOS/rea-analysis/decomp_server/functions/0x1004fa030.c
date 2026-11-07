// rea decompile_all
// name: FUN_1004fa030
// address: 0x1004fa030
// body: available
// range: 0x1004fa030-0x1004fa13b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fa030(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar3 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
  }
  else {
    uVar3 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
  }
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (!SCARRY8(lVar6,uVar3)) {
    lVar2 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar2 == 0) ||
       (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar6 + uVar3))) {
      FUN_100506f84();
      uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
      lVar5 = lVar2;
    }
    uVar4 = uVar4 - *(long *)(lVar5 + 0x10);
    lVar6 = lVar5 + *(long *)(lVar5 + 0x10) + 0x20;
    __ss11_StringGutsV8copyUTF84intoSiSgSrys5UInt8VG_tF(lVar6,uVar4,param_1,param_2);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      if (lVar6 < (long)uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa134);
        (*pcVar1)();
      }
      if (0 < lVar6) {
        if (SCARRY8(*(long *)(lVar5 + 0x10),lVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa138);
          (*pcVar1)();
        }
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + lVar6;
      }
      *unaff_x20 = lVar5;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa13c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa130);
  (*pcVar1)();
}

