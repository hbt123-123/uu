// rea decompile_all
// name: FUN_10037c1f4
// address: 0x10037c1f4
// body: available
// range: 0x10037c1f4-0x10037c2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10037c1f4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  FUN_10037c3b8();
  uVar2 = param_1;
  FUN_10037c3b8(param_1);
  uVar3 = param_1;
  FUN_10037c3b8(param_1);
  uVar4 = param_1;
  FUN_10037c3b8(param_1);
  uVar5 = param_1;
  FUN_10037c3b8(param_1);
  uVar6 = param_1;
  FUN_10037c3b8(param_1);
  uVar7 = param_1;
  FUN_10037c3b8(param_1);
  FUN_10037c3b8(param_1);
  return uVar1 & 0xff | (uVar2 & 0xff) << 8 | (uVar3 & 0xff) << 0x10 | (uVar4 & 0xff) << 0x18 |
         (ulong)((uint)uVar5 & 0xff) << 0x20 | (ulong)((uint)uVar6 & 0xff) << 0x28 |
         (ulong)((uint)uVar7 & 0xff) << 0x30 | param_1 << 0x38;
}

