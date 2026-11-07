// rea decompile_all
// name: FUN_1005c174c
// address: 0x1005c174c
// body: available
// range: 0x1005c174c-0x1005c1903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005c18e8) */

void FUN_1005c174c(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  uVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while ((uVar2 & 1) == 0) {
      if (lVar1 < 7) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x48);
            lVar1 = unaff_x20 + 0x1c;
          }
          else if (lVar1 == 4) {
            pcVar3 = *(code **)(param_3 + 0x150);
            lVar1 = unaff_x20 + 0x20;
          }
          else {
            if (lVar1 != 6) goto LAB_1005c17d4;
            pcVar3 = *(code **)(param_3 + 0x150);
            lVar1 = unaff_x20 + 0x30;
          }
          goto LAB_1005c17c4;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_1005c4a10();
LAB_1005c18d4:
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_1005c4a50();
          goto LAB_1005c18d4;
        }
      }
      else {
        if (lVar1 < 9) {
          if (lVar1 == 7) {
            pcVar3 = *(code **)(param_3 + 0x48);
            lVar1 = unaff_x20 + 0x40;
          }
          else {
            if (lVar1 != 8) goto LAB_1005c17d4;
            pcVar3 = *(code **)(param_3 + 0x138);
            lVar1 = unaff_x20 + 0x44;
          }
        }
        else {
          if (lVar1 == 9) {
            pcVar3 = *(code **)(param_3 + 0x1a0);
            FUN_100569038();
            goto LAB_1005c18d4;
          }
          if (lVar1 == 10) {
            pcVar3 = *(code **)(param_3 + 0x150);
            lVar1 = unaff_x20 + 0x50;
          }
          else {
            if (lVar1 != 0xb) goto LAB_1005c17d4;
            pcVar3 = *(code **)(param_3 + 0x150);
            lVar1 = unaff_x20 + 0x60;
          }
        }
LAB_1005c17c4:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_1005c17d4:
      lVar1 = param_2;
      uVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}

