// rea decompile_all
// name: FUN_10067bee4
// address: 0x10067bee4
// body: available
// range: 0x10067bee4-0x10067bef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10067bee4(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  auVar2._0_8_ = uVar1 >> 0x20 | uVar1 << 0x20;
  uVar1 = (*(ulong *)(param_1 + 0x28) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x28) & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  auVar2._8_8_ = uVar1 >> 0x20 | uVar1 << 0x20;
  return auVar2;
}

