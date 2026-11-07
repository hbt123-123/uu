// rea decompile_all
// name: FUN_10059ab88
// address: 0x10059ab88
// body: available
// range: 0x10059ab88-0x10059ad07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010059aca8) */
/* WARNING: Removing unreachable block (ram,0x00010059ad04) */

void FUN_10059ab88(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  uVar3 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while ((uVar3 & 1) == 0) {
      if (lVar1 < 6) {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 != 3) {
LAB_10059acb8:
            if (lVar1 - 1000U < 0x1ffffc18) {
              lVar2 = lVar1;
              FUN_1005a94f8();
              (**(code **)(param_3 + 0x1d0))
                        (unaff_x20 + 0x18,&DAT_1009d5520,lVar2,lVar1,param_2,param_3);
            }
            goto LAB_10059ac10;
          }
          pcVar5 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x21;
        }
LAB_10059ac00:
        (*pcVar5)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 6) {
          pcVar5 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x22;
          goto LAB_10059ac00;
        }
        if (lVar1 == 7) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1005a9fac();
        }
        else {
          if (lVar1 != 999) goto LAB_10059acb8;
          pcVar5 = *(code **)(param_3 + 0x1a0);
          FUN_1005a86d4();
        }
        (*pcVar5)();
      }
LAB_10059ac10:
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar4)();
    }
  }
  return;
}

