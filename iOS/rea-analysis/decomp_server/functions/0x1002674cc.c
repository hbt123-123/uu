// rea decompile_all
// name: FUN_1002674cc
// address: 0x1002674cc
// body: available
// range: 0x1002674cc-0x10026750f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026750c to 0x1002673b8 FUN_1002673b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002674cc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar3 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(unaff_x20 + (*(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  FUN_1002673b8(param_1,param_2,param_3 & 0x1ff,*(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar3,
                *puVar1,puVar1[1]);
  return;
}

