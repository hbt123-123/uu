// rea decompile_all
// name: FUN_1004aa1c8
// address: 0x1004aa1c8
// body: available
// range: 0x1004aa1c8-0x1004aa30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004aa2cc) */

void FUN_1004aa1c8(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  long unaff_x21;
  code *pcVar6;
  
  pcVar6 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  uVar3 = param_3;
  (*pcVar6)();
  if (unaff_x21 == 0) {
    while ((uVar3 & 1) == 0) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1004ba760();
          lVar2 = unaff_x20 + 0x48;
          puVar4 = &DAT_1009c8f38;
          goto LAB_1004aa250;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x150);
LAB_1004aa2bc:
          (*pcVar5)();
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x1a0);
          FUN_1004b9370();
          lVar2 = unaff_x20 + 0x10;
          puVar4 = &DAT_1009c8ea0;
        }
        else {
          if (lVar1 != 4) {
            if (lVar1 == 5) {
              pcVar5 = *(code **)(param_3 + 0x168);
              goto LAB_1004aa2bc;
            }
            goto LAB_1004aa264;
          }
          pcVar5 = *(code **)(param_3 + 0x180);
          FUN_1004b90f0();
          lVar2 = unaff_x20 + 0x18;
          puVar4 = &DAT_1009c07d0;
        }
LAB_1004aa250:
        (*pcVar5)(lVar2,puVar4,lVar1,param_2,param_3);
      }
LAB_1004aa264:
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar6)();
    }
  }
  return;
}

