// rea decompile_all
// name: FUN_100251174
// address: 0x100251174
// body: available
// range: 0x100251174-0x1002512ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100251174(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint local_64;
  
  local_64 = 0;
  uVar1 = param_1;
  FUN_1002512ac(param_1,param_2,&local_64);
  if ((int)uVar1 == 0) {
    uVar3 = (ulong)(int)local_64;
    uVar1 = param_1;
    FUN_1002512ac(param_1,param_2,&local_64);
    if ((int)uVar1 == 0) {
      lVar4 = (long)(int)local_64;
      uVar1 = param_1;
      FUN_1002512ac(param_1,param_2,&local_64);
      if ((int)uVar1 == 0) {
        lVar5 = (long)(int)local_64;
        uVar1 = param_1;
        FUN_1002512ac(param_1,param_2,&local_64);
        if ((int)uVar1 == 0) {
          lVar6 = (long)(int)local_64;
          uVar1 = param_1;
          FUN_1002512ac(param_1,param_2,&local_64);
          if ((int)uVar1 == 0) {
            lVar7 = (long)(int)local_64;
            uVar1 = param_1;
            FUN_1002512ac(param_1,param_2,&local_64);
            if ((int)uVar1 == 0) {
              uVar8 = (ulong)local_64;
              uVar1 = param_1;
              FUN_1002512ac(param_1,param_2,&local_64);
              if ((int)uVar1 == 0) {
                uVar2 = (ulong)local_64;
                FUN_1002512ac(param_1,param_2,&local_64);
                uVar3 = uVar3 | lVar4 << 8 | lVar5 << 0x10 | lVar6 << 0x18 | lVar7 << 0x20 |
                        uVar8 << 0x28 | uVar2 << 0x30 | (ulong)local_64 << 0x38;
                if ((int)param_1 != 0) {
                  uVar3 = 0;
                }
                goto LAB_100251248;
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_100251248:
  *param_3 = uVar3;
  return;
}

