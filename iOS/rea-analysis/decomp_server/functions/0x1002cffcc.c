// rea decompile_all
// name: FUN_1002cffcc
// address: 0x1002cffcc
// body: available
// range: 0x1002cffcc-0x1002d0133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002cffcc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x158);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if ((long)uVar4 < 0) {
      uVar2 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if (SBORROW8(uVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d0110);
      (*pcVar1)();
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d0130);
        (*pcVar1)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d0134);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(uVar4 + uVar3 * 8 + 0x20);
    }
    else {
      FUN_100169c28(uVar3,uVar4,&PTR__OBJC_CLASS___NSURLSessionTaskMetrics_100a65a08,&DAT_100a833b0)
      ;
    }
    FUN_10004003c(0,&DAT_100a833b0,&PTR__OBJC_CLASS___NSURLSessionTaskMetrics_100a65a08);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,param_2);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
  }
  FUN_100339e50();
  uVar2 = *(ulong *)(param_1 + 0x158);
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar4 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100296dc4(uVar2,uVar4 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar4 + 1;
  *(undefined8 *)(uVar3 + uVar4 * 8 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x158) = uVar2;
  return param_2;
}

