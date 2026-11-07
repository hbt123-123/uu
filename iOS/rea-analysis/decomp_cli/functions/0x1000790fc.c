// rea decompile_all
// name: FUN_1000790fc
// address: 0x1000790fc
// body: available
// range: 0x1000790fc-0x100079183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000790fc(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  FUN_1000772e8();
  pcVar6 = (char *)(unaff_x20 + 0xc1);
  lVar5 = *(long *)(unaff_x20 + 0x10) + 1;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
    cVar3 = *pcVar6;
    puVar1 = (ulong *)(pcVar6 + -0x99);
    plVar2 = (long *)(pcVar6 + -0xa1);
    pcVar6 = pcVar6 + 0xd0;
  } while ((*plVar2 != 0 || (*puVar1 & 2) == 0) || cVar3 != '\x04');
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(uVar4);
  return lVar5 != 0;
}

