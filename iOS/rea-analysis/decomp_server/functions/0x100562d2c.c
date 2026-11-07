// rea decompile_all
// name: FUN_100562d2c
// address: 0x100562d2c
// body: available
// range: 0x100562d2c-0x100562de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100562d2c(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  
  uVar4 = param_1 % 0x15180;
  uVar3 = (ulong)((int)uVar4 + 0x15180);
  if (-1 < (long)uVar4) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3;
  FUN_100523018(uVar3,0x3c);
  uVar2 = (int)uVar4 % 0x3c;
  uVar1 = uVar2 + 0x3c;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uVar4 = uVar3 & 0xffffffff;
  iVar5 = (int)uVar3;
  FUN_100523018(uVar3,0xe10);
  auVar6._0_8_ = uVar3 & 0xffffffff | (ulong)uVar1 << 0x20;
  auVar6._8_4_ = iVar5 + (int)(uVar4 / 0x3c) * -0x3c;
  auVar6._12_4_ = 0;
  return auVar6;
}

