// rea decompile_all
// name: FUN_100507c1c
// address: 0x100507c1c
// body: available
// range: 0x100507c1c-0x100507c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100507c1c(ulong param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  
  uVar3 = (param_1 & 0x1fffffff) << 3 | param_2 & 0xff;
  pbVar1 = (byte *)*unaff_x20;
  pbVar2 = pbVar1;
  uVar4 = uVar3;
  if (0x7f < uVar3) {
    do {
      pbVar1 = pbVar2 + 1;
      *pbVar2 = (byte)uVar4 | 0x80;
      uVar3 = uVar4 >> 7;
      uVar5 = uVar4 >> 0xe;
      pbVar2 = pbVar1;
      uVar4 = uVar3;
    } while (uVar5 != 0);
  }
  *pbVar1 = (byte)uVar3;
  *unaff_x20 = pbVar1 + 1;
  return;
}

