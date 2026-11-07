// rea decompile_all
// name: FUN_1005c25c4
// address: 0x1005c25c4
// body: available
// range: 0x1005c25c4-0x1005c272f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005c26f0) */

void FUN_1005c25c4(undefined8 param_1,long param_2,ulong param_3)

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
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar6 = *(code **)(param_3 + 0x1a0);
            FUN_1005c4a90();
            lVar2 = unaff_x20 + 0x10;
            puVar4 = &DAT_1009d78d0;
          }
          else {
            if (lVar1 != 3) goto LAB_1005c2660;
            pcVar6 = *(code **)(param_3 + 0x1a0);
            FUN_100569038();
            lVar2 = unaff_x20 + 0x18;
            puVar4 = &DAT_1009d7958;
          }
          goto LAB_1005c264c;
        }
        pcVar6 = *(code **)(param_3 + 0x150);
LAB_1005c26e0:
        (*pcVar6)();
      }
      else {
        if (lVar1 == 4) {
          pcVar6 = *(code **)(param_3 + 0x198);
          FUN_100569f5c();
          lVar2 = unaff_x20 + 0x50;
          puVar4 = &DAT_1009d6998;
        }
        else {
          if (lVar1 != 5) {
            if (lVar1 != 6) goto LAB_1005c2660;
            pcVar6 = *(code **)(param_3 + 0x150);
            goto LAB_1005c26e0;
          }
          pcVar6 = *(code **)(param_3 + 0x180);
          FUN_1005690b8();
          lVar2 = unaff_x20 + 0x20;
          puVar4 = &DAT_1009d7560;
        }
LAB_1005c264c:
        (*pcVar6)(lVar2,puVar4,lVar1,param_2,param_3);
      }
LAB_1005c2660:
      lVar1 = param_2;
      uVar3 = param_3;
      (*pcVar5)();
    }
  }
  return;
}

