// rea decompile_all
// name: FUN_1000f45c0
// address: 0x1000f45c0
// body: available
// range: 0x1000f45c0-0x1000f4693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1000f45c0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  uVar5 = *unaff_x20;
  if (uVar5 >> 0x3e == 0) {
    if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f4640);
      (*pcVar1)();
    }
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if ((uVar5 & 0x8000000000000000) != 0) {
      uVar3 = uVar5;
    }
    uVar4 = uVar3;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f4694);
      (*pcVar1)();
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f463c);
      (*pcVar1)();
    }
  }
  if ((uVar5 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f468c);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(uVar5 + 0x20);
  }
  else {
    uVar2 = 0;
    FUN_10016a380(0,uVar5);
  }
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if ((uVar5 & 0x8000000000000000) != 0) {
      uVar3 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f4690);
    (*pcVar1)();
  }
  FUN_100082194(0,1);
  return uVar2;
}

