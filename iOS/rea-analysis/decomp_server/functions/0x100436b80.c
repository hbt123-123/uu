// rea decompile_all
// name: FUN_100436b80
// address: 0x100436b80
// body: available
// range: 0x100436b80-0x100436d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100436d8c) */

void FUN_100436b80(undefined8 param_1,long param_2,ulong param_3)

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
      if (lVar1 < 6) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar3 = *(code **)(param_3 + 0x180);
            FUN_10043c7c0();
          }
          else {
            if (lVar1 != 2) goto LAB_100436c20;
            pcVar3 = *(code **)(param_3 + 0x180);
            FUN_10043c800();
          }
        }
        else {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x138);
            lVar1 = unaff_x20 + 0x19;
            goto LAB_100436d7c;
          }
          if (lVar1 == 4) {
            pcVar3 = *(code **)(param_3 + 0x180);
            FUN_10043c840();
          }
          else {
            if (lVar1 != 5) goto LAB_100436c20;
            pcVar3 = *(code **)(param_3 + 0x198);
            FUN_10043e4ac();
          }
        }
LAB_100436c0c:
        (*pcVar3)();
      }
      else {
        if (lVar1 < 9) {
          if (lVar1 == 6) {
            pcVar3 = *(code **)(param_3 + 0x198);
            FUN_10043e4ac();
          }
          else {
            if (lVar1 != 7) {
              if (lVar1 != 8) goto LAB_100436c20;
              pcVar3 = *(code **)(param_3 + 0x48);
              lVar1 = unaff_x20 + 0x3c;
              goto LAB_100436d7c;
            }
            pcVar3 = *(code **)(param_3 + 0x180);
            FUN_10043c880();
          }
          goto LAB_100436c0c;
        }
        if (lVar1 == 9) {
          pcVar3 = *(code **)(param_3 + 0x138);
          lVar1 = unaff_x20 + 0x40;
        }
        else {
          if (lVar1 == 10) {
            pcVar3 = *(code **)(param_3 + 0x180);
            FUN_10043c800();
            goto LAB_100436c0c;
          }
          if (lVar1 != 0xb) goto LAB_100436c20;
          pcVar3 = *(code **)(param_3 + 0x48);
          lVar1 = unaff_x20 + 0x54;
        }
LAB_100436d7c:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_100436c20:
      lVar1 = param_2;
      uVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}

