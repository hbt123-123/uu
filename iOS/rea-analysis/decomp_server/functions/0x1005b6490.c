// rea decompile_all
// name: FUN_1005b6490
// address: 0x1005b6490
// body: available
// range: 0x1005b6490-0x1005b655f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b6490(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  long unaff_x21;
  ulong uVar5;
  byte local_31;
  
  local_31 = 2;
  (**(code **)(param_4 + 0x140))(&local_31,param_3,param_4);
  if ((unaff_x21 == 0) && (uVar5 = (ulong)local_31, local_31 != 2)) {
    uVar3 = param_2[2];
    if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && ((char)param_2[3] == -1)) {
      uVar4 = 0xff;
    }
    else {
      (**(code **)(param_4 + 8))(param_3,param_4);
      uVar3 = param_2[2];
      uVar4 = (undefined1)param_2[3];
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = uVar5 & 1;
    param_2[2] = 0x3000000000000000;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_10051ff3c(uVar1,uVar2,uVar3,uVar4);
  }
  return;
}

