// rea decompile_all
// name: FUN_10043b434
// address: 0x10043b434
// body: available
// range: 0x10043b434-0x10043b563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010043b560) */

void FUN_10043b434(undefined8 param_1,long param_2,ulong param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_10043ca40();
          goto LAB_10043b54c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
          lVar1 = unaff_x20 + 0xc;
          goto LAB_10043b4ac;
        }
      }
      else if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x180);
        FUN_10043c900();
LAB_10043b54c:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x48);
          lVar1 = unaff_x20 + 0x1c;
        }
        else {
          if (lVar1 != 5) goto LAB_10043b4bc;
          pcVar3 = *(code **)(param_3 + 0x48);
          lVar1 = unaff_x20 + 0x20;
        }
LAB_10043b4ac:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_10043b4bc:
      lVar1 = param_2;
      uVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}

