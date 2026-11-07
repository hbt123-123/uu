// rea decompile_all
// name: FUN_100250330
// address: 0x100250330
// body: available
// range: 0x100250330-0x1002503ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100250330(byte *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = 0x34567890;
  param_2[1] = 0x23456789;
  *param_2 = 0x12345678;
  param_2[2] = 0x34567890;
  uVar4 = (uint)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0x12345678;
    uVar3 = 0x23456789;
    do {
      param_1 = param_1 + 1;
      uVar2 = *(ulong *)(param_3 + (ulong)(uVar4 ^ (uint)uVar2 & 0xff) * 8) ^ uVar2 >> 8;
      uVar3 = (uVar3 + (uVar2 & 0xff)) * 0x8088405 + 1;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      uVar1 = *(ulong *)(param_3 + ((ulong)((uint)uVar1 ^ (uint)uVar3 >> 0x18) & 0xff) * 8) ^
              uVar1 >> 8;
      param_2[2] = uVar1;
      uVar4 = (uint)*param_1;
    } while (uVar4 != 0);
  }
  return;
}

