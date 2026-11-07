// rea decompile_all
// name: FUN_100381c00
// address: 0x100381c00
// body: available
// range: 0x100381c00-0x100381d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100381c00(long param_1,ID param_2,int param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 auStack_78 [30];
  char local_5a;
  byte local_59;
  ulong local_58;
  ulong *puStack_50;
  undefined8 *local_40;
  long local_38;
  
  IVar3 = objc_stub::length(param_2);
  if (IVar3 == 0) {
    return 0;
  }
  local_38 = *(long *)(param_1 + 0xb8);
  if (local_38 != 0) {
    FUN_100392994();
  }
  local_40 = *(undefined8 **)(param_1 + 200);
  if ((local_40 != (undefined8 *)0x0) && (*(char *)((long)local_40 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_40,*(undefined4 *)(local_40 + 1));
  }
  FUN_100388bbc(&local_5a,param_1,param_2);
  if (param_3 != 0) {
    uVar1 = (ulong)local_59;
    puVar2 = &local_58;
    if (local_5a != '\0') {
      uVar1 = local_58;
      puVar2 = puStack_50;
    }
    FUN_10037c13c(auStack_78,puVar2,uVar1);
    puVar4 = auStack_78;
    thunk_FUN_10037c5d4();
    if (-1 < (int)puVar4) {
      puVar5 = puVar4;
      FUN_10039280c();
      uVar1 = (ulong)local_59;
      if (local_5a != '\0') {
        uVar1 = local_58;
      }
      uVar6 = (ulong)puVar4 & 0xffffffff;
      if (((ulong)puVar4 & 0xffffffff) + ((ulong)puVar5 & 0xffffffff) == uVar1) goto LAB_100381cf4;
    }
  }
  uVar6 = local_58;
  if (local_5a == '\0') {
    uVar6 = (ulong)local_59;
  }
LAB_100381cf4:
  thunk_FUN_10037edac(&local_5a);
  FUN_100385fb0(&local_40);
  FUN_100385098(&local_38);
  return uVar6;
}

