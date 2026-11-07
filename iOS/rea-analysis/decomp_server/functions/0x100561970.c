// rea decompile_all
// name: FUN_100561970
// address: 0x100561970
// body: available
// range: 0x100561970-0x100561a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100561970(char param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  
  bVar5 = 0;
  pcVar2 = *(char **)(unaff_x20 + 0x28);
  pcVar6 = pcVar2;
  while( true ) {
    lVar3 = (long)pcVar6 - (long)pcVar2;
    do {
      pcVar7 = pcVar6;
      if (pcVar7 == *(char **)(unaff_x20 + 0x30)) goto LAB_1005619e8;
      cVar1 = *pcVar7;
      if (cVar1 == param_1) {
        FUN_10054c680();
        *(char **)(unaff_x20 + 0x28) = pcVar7 + 1;
        FUN_100560bb8();
        lVar4 = lVar3;
        if (lVar3 != 0 && !(bool)(bVar5 ^ 1)) {
          FUN_10055f314(pcVar2);
          _swift_bridgeObjectRelease(lVar3);
        }
        goto LAB_1005619f0;
      }
      pcVar6 = pcVar7 + 1;
      *(char **)(unaff_x20 + 0x28) = pcVar6;
      if (cVar1 == '\n' || cVar1 == '\r') goto LAB_1005619e8;
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\\');
    if (pcVar6 == *(char **)(unaff_x20 + 0x30)) break;
    pcVar6 = pcVar7 + 2;
    *(char **)(unaff_x20 + 0x28) = pcVar6;
    bVar5 = 1;
  }
LAB_1005619e8:
  pcVar2 = (char *)0x0;
  lVar4 = 0;
LAB_1005619f0:
  auVar8._8_8_ = lVar4;
  auVar8._0_8_ = pcVar2;
  return auVar8;
}

