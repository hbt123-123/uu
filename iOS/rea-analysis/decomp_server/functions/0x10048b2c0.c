// rea decompile_all
// name: FUN_10048b2c0
// address: 0x10048b2c0
// body: available
// range: 0x10048b2c0-0x10048b4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010048b4a0) */

void FUN_10048b2c0(undefined8 param_1,long param_2,ulong param_3)

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
      if (lVar1 < 7) {
        if (lVar1 < 4) {
          if (lVar1 == 1) {
            pcVar5 = *(code **)(param_3 + 0x150);
          }
          else if (lVar1 == 2) {
            pcVar5 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 3) goto LAB_10048b348;
            pcVar5 = *(code **)(param_3 + 0x150);
          }
        }
        else if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 5) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 6) goto LAB_10048b348;
          pcVar5 = *(code **)(param_3 + 0x150);
        }
LAB_10048b338:
        (*pcVar5)();
      }
      else {
        puVar4 = &DAT_1009c63e8;
        if (lVar1 < 10) {
          if (lVar1 == 7) {
            pcVar5 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 8) {
              if (lVar1 != 9) goto LAB_10048b348;
              pcVar5 = *(code **)(param_3 + 0x198);
              FUN_100494424();
              lVar2 = unaff_x20 + 0x98;
              goto LAB_10048b48c;
            }
            pcVar5 = *(code **)(param_3 + 0x150);
          }
          goto LAB_10048b338;
        }
        if (lVar1 == 10) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_100494424();
          lVar2 = unaff_x20 + 0xb0;
        }
        else if (lVar1 == 0xb) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_100494424();
          lVar2 = unaff_x20 + 200;
        }
        else {
          if (lVar1 != 0xc) goto LAB_10048b348;
          pcVar5 = *(code **)(param_3 + 0x1a0);
          FUN_100493478();
          lVar2 = unaff_x20 + 0x80;
          puVar4 = &DAT_1009c6470;
        }
LAB_10048b48c:
        (*pcVar5)(lVar2,puVar4,lVar1,param_2,param_3);
      }
LAB_10048b348:
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar6)();
    }
  }
  return;
}

