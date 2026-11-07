// rea decompile_all
// name: FUN_10038798c
// address: 0x10038798c
// body: available
// range: 0x10038798c-0x100387b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10038798c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  
  uVar1 = param_1;
  FUN_1003805d0();
  if ((uVar1 & 1) == 0) {
    pcVar3 = "[%s] file not valid";
    uVar2 = 0x191;
  }
  else {
    if ((*(byte *)(param_1 + 0x30) >> 5 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x90);
      FUN_10037dc88();
      if (param_2 < uVar1) {
        if (*(long *)(param_1 + 0xb0) == 0) {
          lVar4 = *(long *)(param_1 + 0x68);
        }
        else {
          lVar4 = *(long *)(param_1 + 0x70);
        }
        if (*(long *)(lVar4 + 0x18) != 0) {
          return 1;
        }
      }
      if (*(char *)(param_1 + 0xd8) == '\x01') {
        FUN_100387b24(param_1);
      }
      if (*(long *)(param_1 + 0xb0) == 0) {
        FUN_100387fd4(auStack_48,*(undefined8 *)(param_1 + 0x68));
      }
      else {
        FUN_100387e10(auStack_48,*(undefined8 *)(param_1 + 0x70));
      }
      FUN_10037eac4(auStack_70,auStack_48);
      local_50 = local_28;
      lVar4 = 0x68;
      if (*(long *)(param_1 + 0xb0) != 0) {
        lVar4 = 0x70;
      }
      FUN_100388048(param_1,param_2,auStack_70,*(long *)(*(long *)(param_1 + lVar4) + 0x18) != 0);
      thunk_FUN_10037edac(auStack_70);
      thunk_FUN_10037edac(auStack_48);
      return param_1;
    }
    pcVar3 = "[%s] file readonly";
    uVar2 = 0x195;
  }
  FUN_100386734(2,"MMKV_IO.cpp","ensureMemorySize",uVar2,pcVar3);
  return 0;
}

