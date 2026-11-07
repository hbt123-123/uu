// rea decompile_all
// name: FUN_1000c09c4
// address: 0x1000c09c4
// body: available
// range: 0x1000c09c4-0x1000c0af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c0af0 to 0x1000c15b8 FUN_1000c15b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1000c09c4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong local_60;
  ulong local_58;
  
  plVar4 = (long *)0x0;
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = *(ulong *)(param_1 + 0x58);
  uVar5 = (uint)uVar2;
  while( true ) {
    while (local_60 = uVar1, local_58 = uVar2, (uVar5 >> 9 & 1) != 0) {
      FUN_1000c0ca4(param_1,&local_60);
      uVar1 = local_60;
      uVar2 = local_58;
      uVar5 = (uint)local_58;
    }
    if (plVar4 == (long *)0x0) {
      plVar4 = operator_new(0x20);
      *plVar4 = 1;
      FUN_1000c159c(plVar4 + 1,0);
      plVar4[2] = 0xc0;
      plVar4[3] = uVar1;
      FUN_1000c15a4(plVar4 + 1);
    }
    else {
      plVar4[3] = uVar1;
    }
    uVar3 = uVar2 | 0x200;
    uVar1 = *(ulong *)(param_1 + 0x50);
    uVar2 = *(ulong *)(param_1 + 0x58);
    if ((uVar1 == local_58) && (uVar2 == local_60)) {
      *(ulong *)(param_1 + 0x50) = uVar3;
      *(long **)(param_1 + 0x58) = plVar4 + 2;
    }
    if (uVar1 == local_60 && uVar2 == local_58) break;
    uVar5 = (uint)uVar2;
  }
  uVar1 = local_58;
  if (((uint)local_58 >> 10 & 1) != 0) {
    uVar1 = local_58 & 0xfffffffffffffbff;
    *(char *)(param_1 + 0x21) = (char)local_58;
  }
  local_58 = uVar1 | 0x800;
  *(ulong *)(param_1 + 0x50) = local_60;
  *(ulong *)(param_1 + 0x58) = local_58;
  FUN_1000c15a4(&DAT_100121c80);
  FUN_1000c15b8(plVar4 + 1);
  if (*plVar4 + -1 == 0) {
    FUN_1000045b0(plVar4 + 1);
    operator_delete(plVar4);
  }
  else {
    *plVar4 = *plVar4 + -1;
  }
  FUN_1000c15b8(&DAT_100121c80);
  return;
}

