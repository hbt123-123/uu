// rea decompile_all
// name: FUN_10063a64c
// address: 0x10063a64c
// body: available
// range: 0x10063a64c-0x10063a76f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063a64c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar6 = unaff_x20[5];
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063a764);
    (*pcVar3)();
  }
  if ((param_1 == -0x8000000000000000) && (lVar6 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063a76c);
    (*pcVar3)();
  }
  lVar2 = 0;
  if (lVar6 != 0) {
    lVar2 = param_1 / lVar6;
  }
  if (-1 < lVar2) {
    lVar4 = unaff_x20[3];
    FUN_10063a544(lVar4,lVar2);
    lVar5 = lVar4;
    FUN_10063a850();
    _swift_allocObject();
    FUN_10063a460(lVar4);
    _swift_release(unaff_x20[4]);
    unaff_x20[4] = lVar5;
    pcVar3 = (code *)*unaff_x20;
    lVar4 = *(long *)(lVar5 + 0x10);
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    _swift_bridgeObjectRetain(lVar4);
    thunk_FUN_10066690c(uVar1,8);
    FUN_100628ae0();
    lVar5 = lVar4;
    (*pcVar3)(lVar4,lVar4 + 0x20,0,*(long *)(lVar4 + 0x10) << 1 | 1);
    _swift_bridgeObjectRelease(lVar4);
    if (lVar5 != 0) {
      _swift_bridgeObjectRelease(unaff_x20[6]);
      unaff_x20[6] = lVar5;
      unaff_x20[7] = param_1 - lVar2 * lVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063a770);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10063a768);
  (*pcVar3)();
}

