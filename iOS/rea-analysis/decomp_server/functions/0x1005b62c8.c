// rea decompile_all
// name: FUN_1005b62c8
// address: 0x1005b62c8
// body: available
// range: 0x1005b62c8-0x1005b639f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b62c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  long unaff_x21;
  undefined8 local_50;
  byte local_48;
  
  local_50 = 0;
  local_48 = 1;
  (**(code **)(param_4 + 0x38))(&local_50,param_3,param_4);
  uVar3 = local_50;
  if ((unaff_x21 == 0) && ((local_48 & 1) == 0)) {
    uVar4 = param_2[2];
    if ((((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (*(char *)(param_2 + 3) == -1)
       ) {
      uVar5 = 0xff;
    }
    else {
      (**(code **)(param_4 + 8))(param_3,param_4);
      uVar4 = param_2[2];
      uVar5 = *(undefined1 *)(param_2 + 3);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = uVar3;
    param_2[2] = 0x1000000000000000;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_10051ff3c(uVar1,uVar2,uVar4,uVar5);
  }
  return;
}

