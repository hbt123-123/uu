// rea decompile_all
// name: FUN_100458978
// address: 0x100458978
// body: available
// range: 0x100458978-0x100458b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100458b04) */

void FUN_100458978(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  uVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while ((uVar2 & 1) == 0) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar3 = *(code **)(param_3 + 0x180);
            FUN_10045f0f8();
          }
          else {
            if (lVar1 != 2) goto LAB_100458a00;
            pcVar3 = *(code **)(param_3 + 0x180);
            FUN_10045f138();
          }
        }
        else {
          if (lVar1 != 3) {
            if (lVar1 == 4) {
              pcVar3 = *(code **)(param_3 + 0x138);
              lVar1 = unaff_x20 + 0x29;
              goto LAB_1004589f0;
            }
            goto LAB_100458a00;
          }
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_10045f178();
        }
        (*pcVar3)();
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x48);
            lVar1 = unaff_x20 + 0x2c;
          }
          else {
            if (lVar1 != 6) goto LAB_100458a00;
            pcVar3 = *(code **)(param_3 + 0x48);
            lVar1 = unaff_x20 + 0x30;
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x48);
          lVar1 = unaff_x20 + 0x34;
        }
        else {
          if (lVar1 != 8) goto LAB_100458a00;
          pcVar3 = *(code **)(param_3 + 0x60);
          lVar1 = unaff_x20 + 0x38;
        }
LAB_1004589f0:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_100458a00:
      lVar1 = param_2;
      uVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}

