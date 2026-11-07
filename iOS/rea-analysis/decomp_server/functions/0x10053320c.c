// rea decompile_all
// name: FUN_10053320c
// address: 0x10053320c
// body: available
// range: 0x10053320c-0x1005332ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10053320c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  
  FUN_100535660();
  lVar2 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (lVar2 == 0) {
      return 0;
    }
  }
  else if (lVar2 == unaff_x20[1] - lVar4) {
    return 0;
  }
  if (*(char *)(lVar4 + lVar2) != '}') {
    return 0;
  }
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = unaff_x20[1] - lVar4;
  }
  if ((lVar2 < 0) || (lVar1 <= lVar2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005332a0);
    (*pcVar3)();
  }
  unaff_x20[2] = lVar2 + 1;
  lVar2 = unaff_x20[0xb] + 1;
  if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005332a4);
    (*pcVar3)();
  }
  unaff_x20[0xb] = lVar2;
  if (unaff_x20[4] < lVar2) {
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0xd000000000000039,0x80000001008bc700,
               "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005332f0);
    (*pcVar3)();
  }
  return 1;
}

