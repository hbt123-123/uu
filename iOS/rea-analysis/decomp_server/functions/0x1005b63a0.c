// rea decompile_all
// name: FUN_1005b63a0
// address: 0x1005b63a0
// body: available
// range: 0x1005b63a0-0x1005b648f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005b6444) */

void FUN_1005b63a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  long unaff_x21;
  undefined8 local_60;
  long local_58;
  
  local_58 = 0;
  local_60 = 0;
  (**(code **)(param_4 + 0x158))(&local_60,param_3,param_4);
  lVar4 = local_58;
  uVar3 = local_60;
  if (unaff_x21 == 0) {
    if (local_58 != 0) {
      uVar5 = param_2[2];
      if ((((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (*(char *)(param_2 + 3) == -1)) {
        uVar6 = 0xff;
      }
      else {
        (**(code **)(param_4 + 8))(param_3,param_4);
        uVar5 = param_2[2];
        uVar6 = *(undefined1 *)(param_2 + 3);
      }
      uVar1 = *param_2;
      uVar2 = param_2[1];
      *param_2 = uVar3;
      param_2[1] = lVar4;
      param_2[2] = 0x2000000000000000;
      *(undefined1 *)(param_2 + 3) = 0;
      FUN_10051ff3c(uVar1,uVar2,uVar5,uVar6);
    }
  }
  else {
    _swift_bridgeObjectRelease(local_58);
  }
  return;
}

