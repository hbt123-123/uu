// rea decompile_all
// name: FUN_100586a24
// address: 0x100586a24
// body: available
// range: 0x100586a24-0x100586c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100586c10) */

void FUN_100586a24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  long unaff_x21;
  code *pcVar6;
  
  pcVar6 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  uVar3 = param_3;
  (*pcVar6)();
  if (unaff_x21 == 0) {
    while ((uVar3 & 1) == 0) {
      switch(uVar1) {
      case 1:
        pcVar5 = *(code **)(param_3 + 0x158);
        break;
      case 2:
        pcVar5 = *(code **)(param_3 + 0x158);
        break;
      case 3:
        pcVar5 = *(code **)(param_3 + 0x160);
        break;
      case 4:
        pcVar5 = *(code **)(param_3 + 0x1a0);
        FUN_1005a8594();
        lVar2 = unaff_x20 + 0x20;
        puVar4 = &DAT_1009d46c8;
        goto LAB_100586bfc;
      case 5:
        pcVar5 = *(code **)(param_3 + 0x1a0);
        FUN_1005a85d4();
        lVar2 = unaff_x20 + 0x28;
        puVar4 = &DAT_1009d4c58;
        goto LAB_100586bfc;
      case 6:
        pcVar5 = *(code **)(param_3 + 0x1a0);
        FUN_1005a8614();
        lVar2 = unaff_x20 + 0x30;
        puVar4 = &DAT_1009d4de0;
        goto LAB_100586bfc;
      case 7:
        pcVar5 = *(code **)(param_3 + 0x1a0);
        FUN_1005a8654();
        lVar2 = unaff_x20 + 0x38;
        puVar4 = &DAT_1009d4a08;
        goto LAB_100586bfc;
      case 8:
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_1005a8f58();
        lVar2 = unaff_x20 + 0x70;
        puVar4 = &DAT_1009d4f00;
        goto LAB_100586bfc;
      case 9:
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_1005aa010();
        lVar2 = unaff_x20 + 0x90;
        puVar4 = &DAT_1009d5fc8;
        goto LAB_100586bfc;
      case 10:
        pcVar5 = *(code **)(param_3 + 0x58);
        break;
      case 0xb:
        pcVar5 = *(code **)(param_3 + 0x58);
        break;
      case 0xc:
        pcVar5 = *(code **)(param_3 + 0x158);
        break;
      default:
        goto switchD_100586ad8_caseD_d;
      case 0xe:
        pcVar5 = *(code **)(param_3 + 0x188);
        FUN_1005b26f8();
        lVar2 = unaff_x20 + 0xc0;
        puVar4 = &DAT_1009d4480;
LAB_100586bfc:
        (*pcVar5)(lVar2,puVar4,uVar1,param_2,param_3);
        goto switchD_100586ad8_caseD_d;
      case 0xf:
        pcVar5 = *(code **)(param_3 + 0x160);
      }
      (*pcVar5)();
switchD_100586ad8_caseD_d:
      uVar1 = param_2;
      uVar3 = param_3;
      (*pcVar6)();
    }
  }
  return;
}

