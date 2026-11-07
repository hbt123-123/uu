// rea decompile_all
// name: FUN_10055eeb0
// address: 0x10055eeb0
// body: available
// range: 0x10055eeb0-0x10055efcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10055eeb0(byte param_1)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar6 == pbVar2) || (*pbVar6 != param_1)) {
    return 0;
  }
  pbVar6 = pbVar6 + 1;
  *(byte **)(unaff_x20 + 0x28) = pbVar6;
  do {
    if ((pbVar6 == pbVar2) || (bVar3 = *pbVar6, 0x23 < bVar3)) goto LAB_10055ef54;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar3 != 0x23) {
LAB_10055ef54:
        lVar1 = *(long *)(unaff_x20 + 0x50) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10055ef84);
          (*pcVar4)();
        }
        *(long *)(unaff_x20 + 0x50) = lVar1;
        if (lVar1 <= *(long *)(unaff_x20 + 0x40)) {
          return 1;
        }
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x80000001008bcf30,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2,0x119,0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10055efd0);
        (*pcVar4)();
      }
      pbVar5 = pbVar6 + 1;
      do {
        pbVar6 = pbVar2;
        if (pbVar5 == pbVar2) break;
        pbVar6 = pbVar5 + 1;
        bVar3 = *pbVar5;
        pbVar5 = pbVar6;
      } while (bVar3 != 10 && bVar3 != 0xd);
    }
    else {
      pbVar6 = pbVar6 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar6;
  } while( true );
}

