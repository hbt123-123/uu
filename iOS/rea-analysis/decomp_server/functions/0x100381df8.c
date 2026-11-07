// rea decompile_all
// name: FUN_100381df8
// address: 0x100381df8
// body: available
// range: 0x100381df8-0x100381f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100381df8(long param_1,ID param_2,void *param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_88 [30];
  char local_6a;
  byte local_69;
  undefined1 *local_68;
  undefined1 **local_60;
  undefined8 *local_50;
  long local_48;
  
  IVar3 = objc_stub::length(param_2);
  if ((int)param_4 < 0) {
    return (undefined1 *)0xffffffff;
  }
  if (IVar3 == 0) {
    return (undefined1 *)0xffffffff;
  }
  local_48 = *(long *)(param_1 + 0xb8);
  if (local_48 != 0) {
    FUN_100392994();
  }
  local_50 = *(undefined8 **)(param_1 + 200);
  if ((local_50 != (undefined8 *)0x0) && (*(char *)((long)local_50 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_50,*(undefined4 *)(local_50 + 1));
  }
  FUN_100388bbc(&local_6a,param_1,param_2);
  puVar5 = (undefined1 *)(ulong)local_69;
  ppuVar2 = &local_68;
  if (local_6a != '\0') {
    puVar5 = local_68;
    ppuVar2 = local_60;
  }
  FUN_10037c13c(auStack_88,ppuVar2,puVar5);
  puVar5 = auStack_88;
  thunk_FUN_10037c5d4();
  puVar4 = puVar5;
  FUN_10039280c();
  if (-1 < (int)(uint)puVar5) {
    puVar1 = (undefined1 *)(((ulong)puVar4 & 0xffffffff) + ((ulong)puVar5 & 0xffffffff));
    if (local_6a == '\0') {
      local_60 = &local_68;
      if (puVar1 == (undefined1 *)(ulong)local_69) goto joined_r0x000100381ef0;
      puVar5 = (undefined1 *)(ulong)local_69;
      if (local_69 <= param_4) goto LAB_100381f68;
    }
    else if (puVar1 == local_68) {
joined_r0x000100381ef0:
      if ((uint)puVar5 <= param_4) {
        _memcpy(param_3,(void *)((long)local_60 + ((ulong)puVar4 & 0xffffffff)),
                (ulong)puVar5 & 0xffffffff);
        goto LAB_100381f2c;
      }
    }
    else {
      puVar5 = local_68;
      if (local_68 <= (undefined1 *)(ulong)param_4) {
LAB_100381f68:
        _memcpy(param_3,local_60,(size_t)puVar5);
        goto LAB_100381f2c;
      }
    }
  }
  puVar5 = (undefined1 *)0xffffffff;
LAB_100381f2c:
  thunk_FUN_10037edac(&local_6a);
  FUN_100385fb0(&local_50);
  FUN_100385098(&local_48);
  return puVar5;
}

