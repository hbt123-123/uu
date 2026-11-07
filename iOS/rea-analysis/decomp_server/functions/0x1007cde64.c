// rea decompile_all
// name: FUN_1007cde64
// address: 0x1007cde64
// body: available
// range: 0x1007cde64-0x1007cdedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007cde64(void)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  uVar4 = *unaff_x20;
  if (DAT_100abba58 != -1) {
    _swift_once(&DAT_100abba58,FUN_1007cdd44);
  }
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cdedc);
    (*pcVar3)();
  }
  if (uVar4 < *(ulong *)(DAT_100b3a970 + 0x10)) {
    lVar1 = DAT_100b3a970 + uVar4 * 0x10;
    auVar2 = *(undefined1 (*) [16])(lVar1 + 0x20);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar1 + 0x28));
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cdee0);
  (*pcVar3)();
}

