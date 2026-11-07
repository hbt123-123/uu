// rea decompile_all
// name: FUN_100699c58
// address: 0x100699c58
// body: available
// range: 0x100699c58-0x100699d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100699c58(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  stat sStack_e0;
  long local_50;
  long *plStack_48;
  
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
  }
  iVar4 = _stat(pcVar1,&sStack_e0);
  uVar5 = (ulong)(iVar4 != 0);
  FUN_100699888(uVar5,param_1,param_2,"mars_boost::filesystem::is_empty");
  if ((uVar5 & 1) == 0) {
    if ((sStack_e0.st_mode & 0xf000) == 0x4000) {
      FUN_10069bb58(&local_50,param_1);
      lVar2 = DAT_100b2c480;
      if (plStack_48 != (long *)0x0) {
        LOAcquire();
        iVar4 = (int)plStack_48[1];
        *(int *)(plStack_48 + 1) = iVar4 + -1;
        LORelease();
        if (iVar4 == 1) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          LOAcquire();
          iVar4 = *(int *)((long)plStack_48 + 0xc);
          *(int *)((long)plStack_48 + 0xc) = iVar4 + -1;
          LORelease();
          if (iVar4 == 1) {
            (**(code **)(*plStack_48 + 0x18))(plStack_48);
          }
        }
      }
      bVar3 = local_50 == lVar2;
    }
    else {
      bVar3 = sStack_e0.st_size == 0;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

