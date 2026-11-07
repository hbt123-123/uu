// rea decompile_all
// name: FUN_100599ca8
// address: 0x100599ca8
// body: available
// range: 0x100599ca8-0x100599dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100599db8) */

void FUN_100599ca8(undefined8 param_1,long param_2,ulong param_3)

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
          pcVar5 = *(code **)(param_3 + 0x188);
          FUN_1005b26f8();
          lVar2 = unaff_x20 + 0x10;
        }
        else {
          if (lVar1 != 2) goto LAB_100599d34;
          pcVar5 = *(code **)(param_3 + 0x188);
          FUN_1005b26f8();
          lVar2 = unaff_x20 + 0x11;
        }
LAB_100599d1c:
        (*pcVar5)(lVar2,&DAT_1009d4480,lVar1,param_2,param_3);
      }
      else if (lVar1 == 3) {
        (**(code **)(param_3 + 0x158))(unaff_x20 + 0x18,param_2,param_3);
      }
      else if (lVar1 == 4) {
        pcVar5 = *(code **)(param_3 + 0x188);
        FUN_1005b26f8();
        lVar2 = unaff_x20 + 0x28;
        goto LAB_100599d1c;
      }
LAB_100599d34:
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar4)();
    }
  }
  return;
}

