// rea decompile_all
// name: FUN_10059b440
// address: 0x10059b440
// body: available
// range: 0x10059b440-0x10059b5d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010059b5d0) */
/* WARNING: Removing unreachable block (ram,0x00010059b580) */

void FUN_10059b440(undefined8 param_1,long param_2,ulong param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x20;
          goto LAB_10059b570;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1005a9fac();
          goto LAB_10059b4c8;
        }
LAB_10059b584:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_1005a955c();
          (**(code **)(param_3 + 0x1d0))
                    (unaff_x20 + 0x18,&DAT_1009d55b8,lVar2,lVar1,param_2,param_3);
        }
      }
      else if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x140);
        lVar1 = unaff_x20 + 0x48;
LAB_10059b570:
        (*pcVar5)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1005ab544();
        }
        else {
          if (lVar1 != 999) goto LAB_10059b584;
          pcVar5 = *(code **)(param_3 + 0x1a0);
          FUN_1005a86d4();
        }
LAB_10059b4c8:
        (*pcVar5)();
      }
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar4)();
    }
  }
  return;
}

