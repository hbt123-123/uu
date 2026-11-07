// rea decompile_all
// name: FUN_100388bd0
// address: 0x100388bd0
// body: available
// range: 0x100388bd0-0x100388d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100388bd0(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char local_6a;
  byte local_69;
  ulong local_68;
  ulong *local_60;
  undefined8 *local_50;
  long local_48;
  
  local_48 = *(long *)(param_2 + 0xb8);
  if (local_48 != 0) {
    FUN_100392994();
  }
  local_50 = *(undefined8 **)(param_2 + 200);
  if ((local_50 != (undefined8 *)0x0) && (*(char *)((long)local_50 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_50,*(undefined4 *)(local_50 + 1));
  }
  FUN_10038774c(param_2);
  FUN_100388b1c(&local_6a,param_2,param_3);
  if (local_6a == '\0') {
    lVar3 = (ulong)local_69 - 4;
    if ((ulong)local_69 < 4) goto LAB_100388c74;
    if ((*(byte *)(param_2 + 0xd8) & 1) != 0) {
      local_60 = &local_68;
      goto LAB_100388c94;
    }
  }
  else {
    if (local_68 < 4) {
LAB_100388c74:
      FUN_10037eac4(param_1,&local_6a);
      goto LAB_100388cbc;
    }
    lVar3 = local_68 - 4;
    if ((*(byte *)(param_2 + 0xd8) & 1) != 0) {
LAB_100388c94:
      uVar1 = *(uint *)((long)local_60 + lVar3);
      if (uVar1 != 0) {
        uVar2 = 0;
        _time();
        if (uVar1 <= uVar2) {
          FUN_100386734(1,"MMKV_IO.cpp","getDataWithoutMTimeForKey",0x705,
                        "deleting expired key [%@] in mmkv [%s], due date %u");
          FUN_1003822c8(param_2,param_3);
          thunk_FUN_10037e7cc(param_1,0);
          goto LAB_100388cbc;
        }
      }
    }
  }
  FUN_10037ebac(param_1,&local_6a,lVar3);
LAB_100388cbc:
  thunk_FUN_10037edac(&local_6a);
  FUN_100385fb0(&local_50);
  FUN_100385098(&local_48);
  return;
}

