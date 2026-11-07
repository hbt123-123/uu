// rea decompile_all
// name: FUN_10058c0dc
// address: 0x10058c0dc
// body: available
// range: 0x10058c0dc-0x10058c2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010058c268) */

void FUN_10058c0dc(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
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
            pcVar5 = *(code **)(param_3 + 0x158);
            lVar1 = unaff_x20 + 0x10;
          }
          else {
            if (lVar1 != 2) goto LAB_10058c164;
            pcVar5 = *(code **)(param_3 + 0x158);
            lVar1 = unaff_x20 + 0x38;
          }
          goto LAB_10058c154;
        }
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x50);
          lVar1 = unaff_x20 + 0x20;
          goto LAB_10058c154;
        }
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x188);
          FUN_1005b2c94();
          lVar2 = unaff_x20 + 0x25;
          puVar4 = &DAT_1009d4b58;
        }
        else {
          if (lVar1 != 5) goto LAB_10058c164;
          pcVar5 = *(code **)(param_3 + 0x188);
          FUN_1005b2c54();
          lVar2 = unaff_x20 + 0x26;
          puVar4 = &DAT_1009d4ac8;
        }
LAB_10058c254:
        (*pcVar5)(lVar2,puVar4,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 < 9) {
          if (lVar1 == 6) {
            pcVar5 = *(code **)(param_3 + 0x158);
            lVar1 = unaff_x20 + 0x28;
          }
          else {
            if (lVar1 != 7) {
              if (lVar1 == 8) {
                pcVar5 = *(code **)(param_3 + 0x198);
                FUN_1005a9430();
                lVar2 = unaff_x20 + 0x70;
                puVar4 = &DAT_1009d50b8;
                goto LAB_10058c254;
              }
              goto LAB_10058c164;
            }
            pcVar5 = *(code **)(param_3 + 0x158);
            lVar1 = unaff_x20 + 0x48;
          }
        }
        else if (lVar1 == 9) {
          pcVar5 = *(code **)(param_3 + 0x50);
          lVar1 = unaff_x20 + 0x58;
        }
        else if (lVar1 == 10) {
          pcVar5 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x60;
        }
        else {
          if (lVar1 != 0x11) goto LAB_10058c164;
          pcVar5 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x90;
        }
LAB_10058c154:
        (*pcVar5)(lVar1,param_2,param_3);
      }
LAB_10058c164:
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar6)();
    }
  }
  return;
}

