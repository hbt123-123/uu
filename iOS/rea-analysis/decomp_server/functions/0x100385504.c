// rea decompile_all
// name: FUN_100385504
// address: 0x100385504
// body: available
// range: 0x100385504-0x1003855af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100385504(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)((long)param_1 + param_2 + -8);
  uVar3 = lVar1 * -0x651e95c4d06fbfb1;
  uVar4 = *param_1 * -0x4b6d499041670d8d - param_1[1];
  uVar2 = param_1[1] ^ 0xc949d7c7509e6557;
  uVar2 = *param_1 * -0x4b6d499041670d8d + param_2 + (uVar2 >> 0x14 | uVar2 << 0x2c) +
          lVar1 * 0x651e95c4d06fbfb1;
  uVar3 = (uVar2 ^ (uVar3 >> 0x1e | uVar3 << 0x22) + (uVar4 >> 0x2b | uVar4 * 0x200000) +
                   *(long *)((long)param_1 + param_2 + -0x10) * -0x3c5a37a36834ced9) *
          -0x622015f714c7d297;
  uVar2 = (uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
}

