// rea decompile_all
// name: FUN_10059e1dc
// address: 0x10059e1dc
// body: available
// range: 0x10059e1dc-0x10059e3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010059e3a8) */
/* WARNING: Removing unreachable block (ram,0x00010059e3ec) */

void FUN_10059e1dc(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  code *pcVar6;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  uVar3 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while ((uVar3 & 1) == 0) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar6 = *(code **)(param_3 + 0x188);
            FUN_1005b2878();
            lVar2 = unaff_x20 + 0x1a;
            puVar4 = &DAT_1009d5af8;
          }
          else {
            if (lVar1 != 4) goto LAB_10059e3ac;
            pcVar6 = *(code **)(param_3 + 0x188);
            FUN_1005b2838();
            lVar2 = unaff_x20 + 0x1b;
            puVar4 = &DAT_1009d5b88;
          }
          goto LAB_10059e380;
        }
        if (lVar1 == 1) {
          pcVar6 = *(code **)(param_3 + 0x188);
          FUN_1005b28f8();
          lVar2 = unaff_x20 + 0x18;
          puVar4 = &DAT_1009d59d8;
          goto LAB_10059e380;
        }
        if (lVar1 == 2) {
          pcVar6 = *(code **)(param_3 + 0x188);
          FUN_1005b28b8();
          lVar2 = unaff_x20 + 0x19;
          puVar4 = &DAT_1009d5a68;
          goto LAB_10059e380;
        }
LAB_10059e3ac:
        if (lVar1 - 1000U < 0x2329) {
          lVar2 = lVar1;
          FUN_1005a9fac();
          (**(code **)(param_3 + 0x1d0))
                    (unaff_x20 + 0x10,&DAT_1009d5920,lVar2,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar6 = *(code **)(param_3 + 0x188);
            FUN_1005b27f8();
            lVar2 = unaff_x20 + 0x1c;
            puVar4 = &DAT_1009d5c18;
          }
          else {
            if (lVar1 != 6) goto LAB_10059e3ac;
            pcVar6 = *(code **)(param_3 + 0x188);
            FUN_1005b27b8();
            lVar2 = unaff_x20 + 0x1d;
            puVar4 = &DAT_1009d5ca8;
          }
        }
        else if (lVar1 == 7) {
          pcVar6 = *(code **)(param_3 + 0x188);
          FUN_1005b2778();
          lVar2 = unaff_x20 + 0x1e;
          puVar4 = &DAT_1009d5d38;
        }
        else {
          if (lVar1 != 8) goto LAB_10059e3ac;
          pcVar6 = *(code **)(param_3 + 0x188);
          FUN_1005b2738();
          lVar2 = unaff_x20 + 0x1f;
          puVar4 = &DAT_1009d5e48;
        }
LAB_10059e380:
        (*pcVar6)(lVar2,puVar4,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar5)();
    }
  }
  return;
}

