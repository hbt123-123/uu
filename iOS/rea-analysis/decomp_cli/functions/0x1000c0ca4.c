// rea decompile_all
// name: FUN_1000c0ca4
// address: 0x1000c0ca4
// body: available
// range: 0x1000c0ca4-0x1000c0d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c0d70 to 0x1000c15b8 FUN_1000c15b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c0ca4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  do {
    FUN_1000c15a4(&DAT_100121c80);
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x58);
    DataMemoryBarrier(2,1);
    *param_2 = lVar1;
    param_2[1] = lVar2;
    if ((((uint)lVar2 >> 9 & 1) == 0) || (lVar1 == 0)) {
      FUN_1000c15b8(&DAT_100121c80);
      return;
    }
    *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x10) + 1;
    FUN_1000c15b8(&DAT_100121c80);
    lVar3 = lVar1 + -8;
    FUN_1000c15a4(lVar3);
    FUN_1000c15b8(lVar3);
    FUN_1000c15a4(&DAT_100121c80);
    lVar2 = *(long *)(lVar1 + -0x10) + -1;
    if (lVar2 == 0) {
      FUN_1000045b0(lVar3);
      operator_delete((long *)(lVar1 + -0x10));
    }
    else {
      *(long *)(lVar1 + -0x10) = lVar2;
    }
    FUN_1000c15b8(&DAT_100121c80);
    lVar1 = *(long *)(param_1 + 0x58);
    DataMemoryBarrier(2,1);
    *param_2 = *(long *)(param_1 + 0x50);
    param_2[1] = lVar1;
  } while (((uint)lVar1 >> 9 & 1) != 0);
  return;
}

