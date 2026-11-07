// rea decompile_all
// name: FUN_100386dd0
// address: 0x100386dd0
// body: available
// range: 0x100386dd0-0x100386f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100386dd0(ulong param_1,byte *param_2,undefined1 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_50;
  ulong *puStack_48;
  byte *local_40;
  ulong local_38;
  
  local_38 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
  puStack_48 = &local_38;
  uVar2 = param_1;
  local_50 = param_1;
  local_40 = param_2;
  FUN_1003874a4();
  *(ulong *)(param_1 + 0x88) = uVar2;
  iVar1 = (int)param_1;
  if (uVar2 < local_38 && uVar2 + 4 <= local_38) {
    FUN_1003805fc(param_1,uVar2,**(undefined4 **)(param_1 + 0xa8));
    if ((int)param_1 != 0) {
      *param_2 = 1;
      return;
    }
    FUN_100387538(&local_50);
    if ((*param_2 & 1) != 0) {
      return;
    }
    iVar1 = iVar1 + 0x18;
    FUN_100384c0c();
    if (iVar1 == 1) {
      *param_2 = 1;
      *param_3 = 1;
    }
    uVar3 = 0x119;
  }
  else {
    iVar1 = iVar1 + 0x18;
    FUN_100386734(3,"MMKV_IO.cpp","checkDataValid",0x11d,
                  "check [%s] error: %zu size in total, file size is %zu");
    FUN_100387538(&local_50);
    if ((*param_2 & 1) != 0) {
      return;
    }
    FUN_100384c28();
    if (iVar1 == 1) {
      *(ulong *)(param_1 + 0x88) = local_38 - 4;
      *param_2 = 1;
      *param_3 = 1;
    }
    uVar3 = 0x129;
  }
  FUN_100386734(1,"MMKV_IO.cpp","checkDataValid",uVar3,"recover strategic for [%s] is %d");
  return;
}

