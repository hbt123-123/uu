// rea decompile_all
// name: FUN_1004ee278
// address: 0x1004ee278
// body: available
// range: 0x1004ee278-0x1004ee3a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004ee3a0) */
/* WARNING: Removing unreachable block (ram,0x0001004ee370) */

void FUN_1004ee278(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  uVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while ((uVar2 & 1) == 0) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          FUN_1004f0e68();
        }
        else {
          if (lVar1 != 2) goto LAB_1004ee300;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10043e4ac();
        }
        (*pcVar4)();
      }
      else if (lVar1 == 3) {
        (**(code **)(param_3 + 0x48))(unaff_x20 + 0xc,param_2,param_3);
      }
      else if (lVar1 == 4) {
        FUN_1004ee3a4();
      }
LAB_1004ee300:
      lVar1 = param_2;
      uVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}

