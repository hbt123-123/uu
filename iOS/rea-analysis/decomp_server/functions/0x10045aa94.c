// rea decompile_all
// name: FUN_10045aa94
// address: 0x10045aa94
// body: available
// range: 0x10045aa94-0x10045ac4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010045ac4c) */

void FUN_10045aa94(undefined8 param_1,long param_2,ulong param_3)

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
      if (lVar1 < 6) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar5 = *(code **)(param_3 + 0x138);
          }
          else {
            if (lVar1 != 2) goto LAB_10045ab1c;
            pcVar5 = *(code **)(param_3 + 0x138);
          }
        }
        else if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x138);
        }
        else if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 5) goto LAB_10045ab1c;
          pcVar5 = *(code **)(param_3 + 0x150);
        }
LAB_10045ab0c:
        (*pcVar5)();
      }
      else {
        if (lVar1 < 8) {
          if (lVar1 == 6) {
            pcVar5 = *(code **)(param_3 + 0x138);
            goto LAB_10045ab0c;
          }
          if (lVar1 != 7) goto LAB_10045ab1c;
          pcVar5 = *(code **)(param_3 + 0x180);
          FUN_10045f378();
          lVar2 = unaff_x20 + 0x20;
          puVar4 = &DAT_1009c08f0;
        }
        else {
          puVar4 = &DAT_1009c0980;
          if (lVar1 == 8) {
            pcVar5 = *(code **)(param_3 + 0x180);
            FUN_10045f3b8();
            lVar2 = unaff_x20 + 0x30;
          }
          else if (lVar1 == 9) {
            pcVar5 = *(code **)(param_3 + 0x180);
            FUN_10045f3b8();
            lVar2 = unaff_x20 + 0x40;
          }
          else {
            if (lVar1 != 10) goto LAB_10045ab1c;
            pcVar5 = *(code **)(param_3 + 0x180);
            FUN_10045f3b8();
            lVar2 = unaff_x20 + 0x50;
          }
        }
        (*pcVar5)(lVar2,puVar4,lVar1,param_2,param_3);
      }
LAB_10045ab1c:
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar6)();
    }
  }
  return;
}

