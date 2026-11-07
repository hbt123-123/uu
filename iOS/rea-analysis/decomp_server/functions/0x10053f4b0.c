// rea decompile_all
// name: FUN_10053f4b0
// address: 0x10053f4b0
// body: available
// range: 0x10053f4b0-0x10053f52b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053f4b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_1;
  FUN_10053e394(uVar1,param_1[1],(ulong)*(uint5 *)(param_1 + 2),(ulong)*(uint5 *)(param_1 + 3),
                *unaff_x20,unaff_x20[1],(ulong)*(uint5 *)(unaff_x20 + 2),
                (ulong)*(uint5 *)(unaff_x20 + 3),*(undefined1 *)((long)unaff_x20 + 0x1c),
                *(undefined1 *)((long)unaff_x20 + 0x14),*(undefined1 *)((long)param_1 + 0x1c),
                *(undefined1 *)((long)param_1 + 0x14));
  return (uint)uVar1 & 1;
}

