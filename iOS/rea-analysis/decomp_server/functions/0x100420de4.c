// rea decompile_all
// name: FUN_100420de4
// address: 0x100420de4
// body: available
// range: 0x100420de4-0x100420ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100420ee4) */

void FUN_100420de4(undefined8 param_1,long param_2,ulong param_3)

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
          pcVar3 = *(code **)(param_3 + 0x78);
        }
        else {
          if (lVar1 != 2) goto LAB_100420e5c;
          pcVar3 = *(code **)(param_3 + 0x168);
        }
LAB_100420e4c:
        (*pcVar3)();
      }
      else {
        if (lVar1 != 3) {
          if (lVar1 == 4) {
            pcVar3 = *(code **)(param_3 + 0x90);
          }
          else {
            if (lVar1 != 5) goto LAB_100420e5c;
            pcVar3 = *(code **)(param_3 + 0x78);
          }
          goto LAB_100420e4c;
        }
        pcVar3 = *(code **)(param_3 + 0x180);
        FUN_10042dad0();
        (*pcVar3)(unaff_x20 + 0x18,&DAT_1009c0860,lVar1,param_2,param_3);
      }
LAB_100420e5c:
      lVar1 = param_2;
      uVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}

