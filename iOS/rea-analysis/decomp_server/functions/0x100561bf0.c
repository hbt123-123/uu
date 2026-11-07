// rea decompile_all
// name: FUN_100561bf0
// address: 0x100561bf0
// body: available
// range: 0x100561bf0-0x100561c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100561bf0(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  
  pbVar3 = *(byte **)(unaff_x20 + 0x28);
  lVar4 = *(long *)(param_1 + 0x10);
  pbVar5 = pbVar3;
  if (lVar4 == 0) {
    if (pbVar3 == *(byte **)(unaff_x20 + 0x30)) {
      return 1;
    }
  }
  else {
    pbVar6 = (byte *)(param_1 + 0x20);
    do {
      if (pbVar5 == *(byte **)(unaff_x20 + 0x30)) goto LAB_100561c8c;
      bVar2 = *pbVar5;
      uVar1 = (uint)bVar2;
      if (0xffffffe5 < bVar2 - 0x5b) {
        uVar1 = bVar2 | 0x20;
      }
      if (uVar1 != *pbVar6) goto LAB_100561c8c;
      pbVar5 = pbVar5 + 1;
      *(byte **)(unaff_x20 + 0x28) = pbVar5;
      pbVar6 = pbVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (pbVar5 == *(byte **)(unaff_x20 + 0x30)) {
      return 1;
    }
  }
  if ((*pbVar5 & 0xffffffdf) - 0x5b < 0xffffffe6) {
    FUN_100560bb8();
    return 1;
  }
LAB_100561c8c:
  *(byte **)(unaff_x20 + 0x28) = pbVar3;
  return 0;
}

