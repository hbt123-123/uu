// rea decompile_all
// name: FUN_1002185b8
// address: 0x1002185b8
// body: available
// range: 0x1002185b8-0x10021866b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100218668 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002185b8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)(param_9 >> 0x3b) & 6 | (uint)(param_7 >> 0x3d) & 1;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      param_3 = param_1;
      uVar2 = param_4;
      param_4 = param_2;
      if (uVar1 == 0) goto LAB_100218660;
    }
    else {
      uVar2 = param_2;
      if (uVar1 != 2) goto LAB_10021864c;
    }
    _swift_bridgeObjectRelease(uVar2);
    param_3 = param_6;
    param_4 = param_7 & 0xdfffffffffffffff;
  }
  else {
    if (uVar1 < 6) {
      if (uVar1 == 4) {
        FUN_100006cdc(param_2,param_3);
        param_4 = param_9 & 0xcfffffffffffffff;
        param_3 = param_8;
        goto LAB_100218660;
      }
    }
    else if (uVar1 != 6) goto LAB_100218660;
LAB_10021864c:
    param_3 = param_4;
    param_4 = param_5;
  }
LAB_100218660:
  FUN_100006cdc(param_3,param_4);
  return;
}

