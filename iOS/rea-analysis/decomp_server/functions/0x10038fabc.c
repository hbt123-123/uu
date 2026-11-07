// rea decompile_all
// name: FUN_10038fabc
// address: 0x10038fabc
// body: available
// range: 0x10038fabc-0x10038fc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038fabc(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 **local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 **local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((-1 < *(int *)(param_1 + 0x18)) && (*(long *)(param_1 + 0x28) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    FUN_100386734(2,"MemoryFile.cpp","reloadFromFile",0xe7,
                  "calling reloadFromFile while the cache [%s] is still valid");
    FUN_1003902f0(param_1,0);
  }
  uVar4 = param_1;
  FUN_10038f8b8();
  if ((uVar4 & 1) == 0) {
    piVar3 = ___error();
    _strerror(*piVar3);
    FUN_100386734(3,"MemoryFile.cpp","reloadFromFile",0xed,"fail to open:%s, %s");
    return;
  }
  local_48[0] = *(undefined4 *)(param_1 + 0x18);
  local_40 = 0;
  uStack_38 = 0;
  local_58 = local_48;
  local_50 = 0;
  local_4c = 1;
  local_60 = &local_58;
  FUN_10037dd20(local_48,0);
  FUN_10038fdb4(*(undefined4 *)(param_1 + 0x18),param_1 + 0x28);
  uVar4 = 0;
  if (DAT_100b366f8 != 0) {
    uVar4 = ((param_2 + DAT_100b366f8) - 1) / DAT_100b366f8;
  }
  uVar1 = DAT_100b366f8;
  if (DAT_100b366f8 <= uVar4 * DAT_100b366f8) {
    uVar1 = uVar4 * DAT_100b366f8;
  }
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (DAT_100b366f8 != 0) {
        uVar2 = uVar4 / DAT_100b366f8;
      }
      if (uVar4 == uVar2 * DAT_100b366f8) goto LAB_10038fbac;
    }
    local_70 = local_48;
    local_68 = 1;
    local_64 = 1;
    local_78 = &local_70;
    FUN_10037dd20(local_48,1);
    uVar4 = 0;
    if (DAT_100b366f8 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x28) / DAT_100b366f8;
    }
    uVar4 = DAT_100b366f8 + DAT_100b366f8 * uVar4;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    FUN_10038fe2c(param_1,uVar1);
    FUN_100385fb0(&local_78);
  }
  else {
LAB_10038fbac:
    uVar4 = param_1;
    FUN_1003901fc();
    if ((uVar4 & 1) == 0) {
      FUN_1003902f0(param_1,0);
    }
  }
  FUN_100385fb0(&local_60);
  return;
}

