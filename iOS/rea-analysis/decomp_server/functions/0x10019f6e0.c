// rea decompile_all
// name: FUN_10019f6e0
// address: 0x10019f6e0
// body: available
// range: 0x10019f6e0-0x10019f737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019f6e0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar5 = 0x65707974;
  if (bVar4 != 2) {
    uVar5 = 0x726468;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x6469;
  if (bVar4 != 0) {
    uVar2 = 0x737066;
  }
  uVar3 = 0xe200000000000000;
  if (bVar4 != 0) {
    uVar3 = 0xe300000000000000;
  }
  uVar6 = (ulong)uVar5;
  if (bVar4 < 2) {
    uVar1 = uVar3;
    uVar6 = uVar2;
  }
  *param_1 = uVar6;
  param_1[1] = uVar1;
  return;
}

