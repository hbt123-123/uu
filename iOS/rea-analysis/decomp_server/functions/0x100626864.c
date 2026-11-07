// rea decompile_all
// name: FUN_100626864
// address: 0x100626864
// body: available
// range: 0x100626864-0x1006268d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006268d4 to 0x10061e058 FUN_10061e058 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100626864(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  puVar2 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  uVar3 = (ulong)*(byte *)(*(long *)(puVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_10061e058(*param_1,*(undefined1 *)(param_1 + 1),*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 + uVar4,*(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1]);
  return;
}

