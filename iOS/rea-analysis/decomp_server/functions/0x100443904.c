// rea decompile_all
// name: FUN_100443904
// address: 0x100443904
// body: available
// range: 0x100443904-0x1004439a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100443974 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100443904(uint *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(ulong *)(param_1 + 4);
  puVar3 = *(ulong **)(param_1 + 6);
  uVar5 = *param_1;
  uVar6 = *(ulong *)(param_1 + 2);
  uVar2 = *puVar3;
  uVar4 = puVar3[1];
  uVar7 = puVar3[2];
  if ((param_2 & 1) != 0) {
    FUN_100008184(uVar6,uVar1);
    FUN_10020373c(uVar2,uVar4,uVar7);
    *puVar3 = (ulong)uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar1;
    FUN_100006cdc(uVar6,uVar1);
    return;
  }
  FUN_10020373c(uVar2,uVar4,uVar7);
  *puVar3 = (ulong)uVar5;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  return;
}

